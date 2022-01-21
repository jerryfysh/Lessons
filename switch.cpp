#include <iostream>

using namespace std;

int main() 
{
    int num;
    char c;

    cout << "What is the number?\n";
    cin >> num;

    switch(num){
        case 0:
        cout << "I love Cams!\n";
        break;

        case 2:
        cout << "I love Mille!\n";
        break;

        default:
         cout << "Seriously!\n";
    }
}