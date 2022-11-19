#include <iostream>
#include <math.h>
#define tenday 1024
using namespace std;

int main() {
	unsigned short int temp,t;
	long int n,temp2 ,d;
	
	cin >> t;
	while(t--){
	    cin >> n >> d;
	    
	    temp = temp2 = 0;
	    if(d < 11)
	    {
	        temp = pow(2,d);
	       if(temp>n) // if people less than number of days calcaulated print as it is people
	       cout << n;
	       else             // else people will effect maximum of n people will be maximum people can effect
	       cout << temp;

	    }
	   else if(d > 10 && n <= 1024)
	   cout << n;
	    else
	    {
	        if((d-10)>11)
             temp2 =  tenday* pow(3,11);
            else
                  temp2 =  tenday* pow(3,d-10);
	    
	       if(temp2 > n)
	       cout << n;
	       else
	       cout << temp2;
	    }
	    cout << endl;
	}
	return 0;
}
