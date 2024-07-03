#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long x, y;
    cin >> x >> y;

    long long ch = x % 10;
    long long hc = y % 10;
    
    long long sum = ch + hc;

    cout<<sum<<endl;

    return 0;
}