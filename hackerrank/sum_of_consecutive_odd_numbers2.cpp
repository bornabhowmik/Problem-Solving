#include<bits/stdc++.h>
using namespace std;

int main() 
{
    int N;
    cin >> N;  
    
    for (int i = 0; i < N; ++i) 
    {
        int X, Y;
        cin >> X >> Y;  
        
        int sum = 0;
        
        if (X > Y) 
        {
            swap(X, Y);
        }
        
        for (int j = X + 1; j < Y; ++j) 
        {
            if (j % 2 != 0) 
            {
                sum += j;
            }
        }
        
        cout << sum << endl;
    }
    
    return 0;
}
