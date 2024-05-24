#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int values[5];
    int evenCount = 0, oddCount = 0, positiveCount = 0, negativeCount = 0;

    for (int i = 0; i < 5; ++i) 
    {
        cin >> values[i];

        if (values[i] % 2 == 0) 
        {
            evenCount++;
        } 
        else 
        {
            oddCount++;
        }

        if (values[i] > 0) 
        {
            positiveCount++;
        } 
        else if (values[i] < 0) 
        {
            negativeCount++;
        }
    }

    cout << evenCount << " valor(es) par(es)" << endl;
    cout << oddCount << " valor(es) impar(es)" << endl;
    cout << positiveCount << " valor(es) positivo(s)" << endl;
    cout << negativeCount << " valor(es) negativo(s)" << endl;

    return 0;
}
