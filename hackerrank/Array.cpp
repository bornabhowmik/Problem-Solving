#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main() 
{
    int n;

    cin >> n;

    vector<int>arr(n);

    for (int i = 0; i < n; ++i) 
    {
        cin >> arr[i];
    }

    for (int i = n - 1; i >= 0; --i) 
    {
        cout << arr[i];

        if (i != 0) 
        {
            cout << " ";
        }
    }
    
    cout << endl;

    return 0;
}
