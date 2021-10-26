#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

int main() {
    // The vars
    string cmd;
    float ver = 0.3;
    // The start
    cout << "Welcome to the PyCmd!\n";
    cout << "Type any text to continue: ";
    cin >> cmd;
    // The main cycle
    while (cmd != "exit") {
        cout << "> ";
        cin >> cmd;
        if (cmd == "version" || cmd == "ver") {
            cout << "__________        _________              .___\n\\______   \\___.__.\\_   ___ \\  _____    __| _/\n"
                 << " |     ___<   |  |/    \\  \\/ /     \\  / __ | \n |    |    \\___  |\\     \\___|  Y Y  \\/ /_/ |\n"
                 << " |____|    / ____| \\______  /__|_|  /\\____ | \n           \\/             \\/      \\/      \\/ \n"
                 << "PyCmd, version " << ver << "\n";
        } else if (cmd == "") {
            cout << endl;
        } else {
            cout << "The command \"" << cmd << "\" is not exist!\n";
        }
    }
}
