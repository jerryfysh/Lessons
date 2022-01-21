#include <iostream>
using namespace std;

int main()


{

int n;

cout << "Enter a number to be factored "; //loop
cin >> n;

for (int i = 1; i < n; i++){
    if (n % i == 0)
        cout << i << ",";

    }
    cout << n << endl;

}

// #include <iostream> 
// using namespace std;

// int main()

/*
int result = 0;
int input = 0;

cout << "Enter a number "; //only even numbers calc
cin >> input;
if (input % 2 == 0){
    result = result + input;
}

cout << "Enter a number ";
cin >> input;
if (input % 2 == 0){
    result = result + input;
}

cout << "Enter a number ";
cin >> input;
if (input % 2 == 0){
    result = result + input;
}


cout << "Enter a number ";
cin >> input;
if (input % 2 == 0){
    result = result + input;
}
cout << "Results: " << result << endl;

}

*/



// #include <iostream>
// using namespace std;

// int main()

// {

// int n = 0;
// int result = 0;

// cout << "Enter a number ";
// cin >> n;

// cout << "Enter a number ";
// cin >> n;

// cout << "Enter a number ";
// cin >> n;

// cout << "Enter a number ";
// cin >> n;

// for (int i = 1; i < n; i++){
//     if (n % 2 == 0)
//         result = result + n;
//     }

//     cout << "Results: " << result << endl;


// }