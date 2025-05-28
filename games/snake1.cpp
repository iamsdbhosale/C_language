/*
A snake game with full terminal window screen .
*/
#include <iostream>
#include <termios.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/ioctl.h>  // For terminal size
#include <cstdlib>
#include <ctime>
using namespace std;

int width, height;  // Dynamically determined
int x, y, fruitX, fruitY, score;
int tailX[10000], tailY[10000];
int nTail;
int speed = 100;
bool gameOver;

enum eDirection { STOP = 0, LEFT, RIGHT, UP, DOWN };
eDirection dir;

// Terminal size detection
void getTerminalSize(int &cols, int &rows) {
    struct winsize w;
    ioctl(STDOUT_FILENO, TIOCGWINSZ, &w);
    cols = w.ws_col;
    rows = w.ws_row;
}

// Keyboard hit check
int _kbhit() {
    struct termios oldt, newt;
    int ch;
    int oldf;

    tcgetattr(STDIN_FILENO, &oldt);
    newt = oldt;
    newt.c_lflag &= ~(ICANON | ECHO);
    tcsetattr(STDIN_FILENO, TCSANOW, &newt);
    oldf = fcntl(STDIN_FILENO, F_GETFL, 0);
    fcntl(STDIN_FILENO, F_SETFL, oldf | O_NONBLOCK);
    ch = getchar();
    tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
    fcntl(STDIN_FILENO, F_SETFL, oldf);

    if(ch != EOF) {
        ungetc(ch, stdin);
        return 1;
    }

    return 0;
}

char _getch() {
    struct termios oldt, newt;
    char ch;
    tcgetattr(STDIN_FILENO, &oldt);
    newt = oldt;
    newt.c_lflag &= ~(ICANON | ECHO);
    tcsetattr(STDIN_FILENO, TCSANOW, &newt);
    ch = getchar();
    tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
    return ch;
}

void Setup() {
    srand(time(0));
    int cols, rows;
    getTerminalSize(cols, rows);

    width = cols - 2;     // Leave room for borders
    height = rows - 6;    // Leave room for info lines

    gameOver = false;
    dir = STOP;
    x = width / 2;
    y = height / 2;
    fruitX = rand() % width;
    fruitY = rand() % height;
    score = 0;
    nTail = 0;

    int choice;
    cout << "Select Speed Level:\n";
    cout << "1. Slow\n";
    cout << "2. Medium\n";
    cout << "3. Fast\n";
    cout << "Enter choice (1-3): ";
    cin >> choice;

    switch (choice) {
        case 1: speed = 200; break;
        case 2: speed = 100; break;
        case 3: speed = 50; break;
        default: cout << "Invalid choice. Defaulting to Medium.\n"; speed = 100;
    }

    cout << "Use W A S D to move. Press X to exit.\n";
    usleep(1500 * 1000);
}

void Draw() {
    cout << "\033[2J\033[1;1H";  // Clear screen

    for (int i = 0; i < width + 2; i++) cout << "#";
    cout << endl;

    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            if (j == 0) cout << "#";

            if (i == y && j == x)
                cout << "O";
            else if (i == fruitY && j == fruitX)
                cout << "F";
            else {
                bool print = false;
                for (int k = 0; k < nTail; k++) {
                    if (tailX[k] == j && tailY[k] == i) {
                        cout << "x";
                        print = true;
                        break;
                    }
                }
                if (!print) cout << " ";
            }

            if (j == width - 1) cout << "#";
        }
        cout << endl;
    }

    for (int i = 0; i < width + 2; i++) cout << "#";
    cout << endl;
    cout << "Score: " << score << "   ";
    cout << "Speed: " << (speed == 50 ? "Fast" : speed == 100 ? "Medium" : "Slow") << endl;
}

void Input() {
    if (_kbhit()) {
        switch (_getch()) {
            case 'a': dir = LEFT; break;
            case 'd': dir = RIGHT; break;
            case 'w': dir = UP; break;
            case 's': dir = DOWN; break;
            case 'x': gameOver = true; break;
        }
    }
}

void Logic() {
    int prevX = tailX[0];
    int prevY = tailY[0];
    int prev2X, prev2Y;
    tailX[0] = x;
    tailY[0] = y;
    for (int i = 1; i < nTail; i++) {
        prev2X = tailX[i];
        prev2Y = tailY[i];
        tailX[i] = prevX;
        tailY[i] = prevY;
        prevX = prev2X;
        prevY = prev2Y;
    }

    switch (dir) {
        case LEFT:  x--; break;
        case RIGHT: x++; break;
        case UP:    y--; break;
        case DOWN:  y++; break;
        default: break;
    }

    if (x >= width || x < 0 || y >= height || y < 0)
        gameOver = true;

    for (int i = 0; i < nTail; i++)
        if (tailX[i] == x && tailY[i] == y)
            gameOver = true;

    if (x == fruitX && y == fruitY) {
        score += 10;
        fruitX = rand() % width;
        fruitY = rand() % height;
        nTail++;
    }
}

int main() {
    Setup();
    while (!gameOver) {
        Draw();
        Input();
        Logic();
        usleep(speed * 1000);
    }
    cout << "Game Over! Final Score: " << score << endl;
    return 0;
}

/*

SNAKE C++ Game
--------------
F for Fruit
R for Rat


F|R	Oxxxxxxxxxxxxxxxxxxxxxxxx
				x
				x
				x
				xxxxxxxxxxxxxxxxx

*/




