#include <iostream>

using namespace std;

int doubler(int a) {
    return a * 2;
}


int main()

{
    int firstnum;
    cout << "Enter a number: ";
    cin >> firstnum;

    int doubled = doubler(firstnum);
    cout << "The number doubles is " << doubled << endl;

    return 0;

}

