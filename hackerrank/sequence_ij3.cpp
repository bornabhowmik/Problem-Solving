#include<bits/stdc++.h>
using namespace std;

int main() 
{
    for (int I = 1; I <= 9; I += 2) 
    {
        int startJ = 7 + (I / 2) * 2;

        for (int J = startJ; J >= startJ - 2; --J) 
        {
            cout << "I=" << I << " J=" << J << endl;
        }
    }

    return 0;
}
