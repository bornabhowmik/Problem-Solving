#include<bits/stdc++.h>
using namespace std;

int main()
{
    double A, B, C;
    
    cin>>A>>B>>C;
    
    double average = (A * 2 + B * 3 + C * 5) / 10.0;

    cout<<fixed<<setprecision(1);
    cout<<"MEDIA = "<<average<<endl;

    return 0;
}