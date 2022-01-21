#include <iostream>

using namespace std;

int main() 

{

    char char1;
    int num;

    cout << "Please enter a character ---> ";
    cin >> char1;

    if (char1 >= 'a' && char1 <= 'z') {
        cout << char1 << " is a lowercase letter" << endl;
    }
    
    else if (char1 >= 'A' && char1<= 'Z') {

        cout << char1 << " is an uppercase letter" << endl;
    }

    else if (char1 >= '0' && char1 <= '9') {

    cout << char1 << " is a single digit number" << endl;
    num = (char1 - 48);
    cout << "character " << char1 << " + 2 " << char1 + 2 << endl;
    cout << "converted " << char1 << " + 2 " << num + 2 << endl;
    }

    else {
    
    cout << char1 << " is not a alphanumeric character" << endl;

    }
    return 0;
}