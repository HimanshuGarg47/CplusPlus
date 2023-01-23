#include <iostream>
#include <vector>
using namespace std;

void swap(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main() {
	int t;
	cin >> t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    
	    vector<int> vec(2*n);
	    for(int i = 0;i<2*n;i++)
	    cin >> vec[i];
	    
	    bool check = true;
	    long int count = 0, m = 2*n;
	    for(int i = 0;i<n;i++)
	    {
	        check = true;
	        for(int j = 0;j<m-i-1;j++)
	        {
	            if(vec[j] > vec[j+1])
	            {
	                swap(vec[j], vec[j+1]);
	                count++;
	                check = false;
	            }
	            
	        }
	        if (check)
            break;
	    }
	    cout << count << endl;
	}
	return 0;
}
