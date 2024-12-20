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

/*
string toSymbol(int a) {
    if(a == 0) return "a";
    else if(a == 1) return "b";
    else if(a == 2) return "c";
    else if(a == 3) return "d";
    else if(a == 4) return "e";
    else if(a == 5) return "f";
    else if(a == 6) return "g";
    else if(a == 7) return "h";
    else if(a == 8) return "i";
    else if(a == 9) return "j";
    else if(a == 10) return "k";
    else if(a == 11) return "l";
    else if(a == 12) return "m";
    else if(a == 13) return "n";
    else if(a == 14) return "o";
    else if(a == 15) return "p";
    else if(a == 16) return "q";
    else if(a == 17) return "r";
    else if(a == 18) return "s";
    else if(a == 19) return "t";
    else if(a == 20) return "u";
    else if(a == 21) return "v";
    else if(a == 22) return "w";
    else if(a == 23) return "x";
    else if(a == 24) return "y";
    else if(a == 25) return "z";
    else if(a == 26) return "A";
    else if(a == 27) return "B";
    else if(a == 28) return "C";
    else if(a == 29) return "D";
    else if(a == 30) return "E";
    else if(a == 31) return "F";
    else if(a == 32) return "G";
    else if(a == 33) return "H";
    else if(a == 34) return "I";
    else if(a == 35) return "J";
    else if(a == 36) return "K";
    else if(a == 37) return "L";
    else if(a == 38) return "M";
    else if(a == 39) return "N";
    else if(a == 40) return "O";
    else if(a == 41) return "P";
    else if(a == 42) return "Q";
    else if(a == 43) return "R";
    else if(a == 44) return "S";
    else if(a == 45) return "T";
    else if(a == 46) return "U";
    else if(a == 47) return "V";
    else if(a == 48) return "W";
    else if(a == 49) return "X";
    else if(a == 50) return "Y";
    else if(a == 51) return "Z";
    else if(a == 52) return "0";
    else if(a == 53) return "1";
    else if(a == 54) return "2";
    else if(a == 55) return "3";
    else if(a == 56) return "4";
    else if(a == 57) return "5";
    else if(a == 58) return "6";
    else if(a == 59) return "7";
    else if(a == 60) return "8";
    else if(a == 61) return "9";
    else if(a == 62) return "*";
    else if(a == 63) return "@";
    else if(a == 64) return "#";
    else if(a == 65) return "!";
    else return "?";
}
*/