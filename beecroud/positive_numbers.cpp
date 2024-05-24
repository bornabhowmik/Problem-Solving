#include<bits/stdc++.h>
using namespace std;

int main() 
{
    double numbers[6];
    
    int positiveCount = 0;

    for (int i = 0; i < 6; ++i) 
    {
        cin >> numbers[i];
    
        if (numbers[i] > 0) 
        {
            positiveCount++;
        }
    }

    cout << positiveCount << " valores positivos" << endl;

    return 0;
}
