#include<bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin>>t;

    // int a, b, c;
    // cin>>a>>b>>c;

    while(t--){
        int a, b, c;
        cin>>a>>b>>c;

        if(a<b && b>c && c>a){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }

    cout<<" ";

    return 0;
}