#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	int win,lead;
	static int lead1,lead2;
	while(t--){
	    int p1,p2;
	    cin>>p1>>p2;
	    
	    if(p1>p2){
	        win=1;
	        lead=p1-p2;
	        if(lead1<lead){
	            lead1=lead;
	        }
	    }
	    else{
	        win=2;
	        lead=p2-p1;
	        if(lead2<lead){
	            lead2=lead;
	        }
	    }
	}
	    if(lead1>lead2){
	        cout<<"1"<<"\t"<<lead1;
	    }
	    else{
	        cout<<"2"<<"\t"<<lead2;
	    }
	return 0;
}
