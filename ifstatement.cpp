#include <iostream>

using namespace std;

int main()

{
    int numCase;

    cout << "Please enter new cases of omnicron ";
    cin >> numCase;

    if(numCase ==0)
    
    {
        cout << "No new cases\n";

    }
    else
    
    { 

        cout << "Unfortunate. There were " << numCase << " cases recorded\n";
    }
    
    return 0;
}
