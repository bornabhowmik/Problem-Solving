#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int total_days;
    
    cin >> total_days;
    
    int years = total_days / 365;
    int remaining_days_after_years = total_days % 365;
    
    int months = remaining_days_after_years / 30;
    int days = remaining_days_after_years % 30;
    
    cout << years << " ano(s)" << endl;
    cout << months << " mes(es)" << endl;
    cout << days << " dia(s)" << endl;
    
    return 0;
}
