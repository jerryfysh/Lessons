#include <iostream>

using namespace std;
int main()

{
    int num1;
    //char ch[20];
    string ch; // name user inputs
    string cg; // other name user inputs

    cout << "Enter a number ";
    cin >> num1;

    cin.ignore(1000, '\n'); // clear the keyboard buffer
    
    cout << "Enter a name ";
    //cin.getline (ch, 20);
    getline (cin, ch);

    cout << "Enter another name ";
    //cin.getline (ch, 20);
    getline (cin, cg);

    cout << "\nnum1 = " << num1 << endl;
    cout << "The name is " << (cin, ch) << endl;
    cout << "The other name is " << (cin, cg) << endl;

    return 0;
}
