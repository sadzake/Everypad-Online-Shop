#include <iostream>
#include <windows.h>
using namespace std;

void title() {
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h, 10);
    cout << " _____                                     _ \n";
    cout << "|  ___|                                   | |\n";
    cout << "| |____   _____ _ __ _   _ _ __   __ _  __| |\n";
    cout << "|  __\ \ / / _ \ '__| | | | '_ \ / _` |/ _` |\n";
    cout << "| |___\ V /  __/ |  | |_| | |_) | (_| | (_| |\n";
    cout << "\____/ \_/ \___|_|   \__, | .__/ \__,_|\__,_|\n";
    cout << "                      __/ | |                \n";
    cout << "                     |___/|_|                \n";
}