#include<bits/stdc++.h>
using namespace std;

int main()
{
    double A, B;
    
    cin>>A>>B;
    
    double average = (A * 3.5 + B * 7.5) / 11.0;

    cout<<fixed<<setprecision(5);
    cout<<"MEDIA = "<<average<<endl;
    
    return 0;
}