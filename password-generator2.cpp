#include <iostream>
#include <string>
#include <cstdlib>
#include <time.h>
using namespace std;

char toSymbol(int a);

int main() {
    int nrOfChars;
    cout << "Enter the number of characters your password should have: ";
    cin >> nrOfChars;
    cout << "" << endl;
    cout << "" << endl;


    srand(time(0));
    for(int i = 0; i < nrOfChars; i += 1) {
        int n = rand() % 68;
        char sn = toSymbol(n);
        cout << sn;
    }
    return 0;
}

char toSymbol(int a) {
    const string allChars = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890@#&*!?";
    return allChars[a];
}
