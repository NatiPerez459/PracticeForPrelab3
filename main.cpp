#include<iostream>

using namespace std;

int main () {

}

/*Verify that the parameter given by the function is printable. If
it is printable, check if it is digit and print, ”It is printable and digit.”. If it is
not a digit, print ”It is printable”. If it’s not printable or a digit, print ”It is
not printable”*/

void printable(char character) {
    bool print = isprint(character);
        if(print){
            bool digit = isdigit(character);
            if(digit){
                cout << "It is printable and digit." << endl;
            }
        }
}
