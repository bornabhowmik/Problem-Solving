#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    int a,b,c;
    cin>>a>>b>>c;

    // for(int i=0; i<=n; i++){
        if(a<b || b<c || a<c){
            cout<<"+";
        }else if(a>b || b>c || a>c){
            cout<<"-";
        }
            
        
    // }
    cout<<endl;
}