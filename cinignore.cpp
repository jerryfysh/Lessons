#include <iostream>

using namespace std;

int main()

{

    string name, major, hall; 
    cout << "Enter your name: ";  
    getline( cin , name ); 
    
    cout << "\nEnter your UID: ";  
    int UID; 
    cin >> UID ; 

    cin.ignore(1000, '\n');
 
    cout << "\nEnter your Major: ";   
    getline( cin , major ); 
    
    cout << "\nEnter your residence hall: ";   
    getline( cin , hall ); 

}