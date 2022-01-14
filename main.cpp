#include <iostream>
#include <cstdio>
#include <ctime>
#include <sstream>

using namespace std;

int multifunction(int g, int h);

int main() {

    int x, y;
    cout << "Enter 2 numbers: ";
    cin >> x >> y;


    cout << "product is :" << multifunction(x, y);
    return 0;
}

int multifunction(int x, int y) {
    return x * y;
}