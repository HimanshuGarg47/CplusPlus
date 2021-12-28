#include <iostream>
#include <vector>

using namespace std;

int main()
{


	/* ------------- pointers ----------------------*/
	// int arr[] = { 10, 20, 30, 40, 50, 60 };
	// int* ptr = arr;
	// cout << "arr[2] = " << arr[2] << "\n";
	// cout << "*(arr + 2) = " << *(arr + 2) << "\n";
	// cout << "ptr[2] = " << ptr[2] << "\n";
	// cout << "*(ptr + 2) = " << *(ptr + 2) << "\n";

	/* ------------- pointers ----------------------*/




	/*  -------------vector -----------------*/

				// begin ------------
	vector<int> myvector = {1,2,3,4,5};
	for(auto it = myvector.begin();it!=myvector.end();it++)
	{
		cout << " " <<  *it  ;
	}

	cout <<  endl;
			// end or reverse array
	for(auto it=myvector.end()-1;it!=myvector.begin()-1;it--)
	{
		cout << " " <<  *it  ;
	}
	

	cout << endl;


		// push_back method


	myvector.push_back(6);
	myvector.push_back(7);


			/* rbegin iterator ===> returns a reverse iter, pointing to the last element in the container.  || rend iterator => returns a reverse iterator pointing to the theoretical element right before the first element in the array container. || 
			reversing a vector array STL */
	for(auto it=myvector.rend()-1;it!=myvector.rbegin()-1;it--)
	{
		*it = 8;
		cout << " " <<  *it  ;
	}
	return 0;
}
