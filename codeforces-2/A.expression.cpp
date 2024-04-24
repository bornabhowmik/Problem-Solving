#include<bits/stdc++.h>
using namespace std;

int main(){

    int a,b,c;
    cin>>a>>b>>c;

    int i;
    cin>>i;

    if(a+b*c || a*(b+c) || a*b*c || (a+b)*c){
        cout << i <<endl;
    }
}
