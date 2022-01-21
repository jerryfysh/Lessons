#include <iostream>

using namespace std;

int main()
{
    int DaysUntilBreak, NumDays, NumMinutes;
    int NumWeeks;
    
    const int days_in_week = 7;
    const int hours_in_day = 24;
    const int minutes_in_hour = 60;

    cout << "Enter number of days until spring break --> " << endl;
    cin >> DaysUntilBreak;

        // Calculate number of whole weeks
    NumWeeks = DaysUntilBreak / 7;

        // Calculate number of remaining days
    
    NumDays = DaysUntilBreak % 7;
    
    cout << DaysUntilBreak << " days until spring break\n";
    cout << "That is " << NumWeeks << " weeks and " << NumDays << " days!" << endl;

        // Calculate number of minutes
    NumMinutes = DaysUntilBreak * 24 * 60;
    cout << "or " << NumMinutes << " minutes!" << endl;

    return 0;
}
