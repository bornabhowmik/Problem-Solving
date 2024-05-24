#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int N;
    
    cin >> N;
    
    int hours = N / 3600;
    int remaining_seconds_after_hours = N % 3600;
    
    int minutes = remaining_seconds_after_hours / 60;
    int seconds = remaining_seconds_after_hours % 60;
    
    cout << hours << ":" << minutes << ":" << seconds << endl;
    
    return 0;
}
