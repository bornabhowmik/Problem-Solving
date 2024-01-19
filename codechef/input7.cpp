#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y,a;
	    cin>>x>>y>>a;
	   // if((a>=y) && (a<x)){
	    // if((x<=y) && (y<=a) && (x<=a)){
        if((x<=y) && (x<=a) && (y>a)){
	        cout<<"yes"<<endl;
	    }
	    else{
	        cout<<"no"<<endl;
	    }
	    
	}
	return 0;
}
