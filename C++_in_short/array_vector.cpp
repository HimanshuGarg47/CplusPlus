#include <bits/stdc++.h>

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
		
		cout << " " <<  *it  ;
	}
	cout << endl;

/* The std::vector::data() returns a direct pointer to the memory array used internally by the vector to store its owned elements.
	 returns a pointer to the first element in the array which is used internally by the vector. */
	int* pos = myvector.data();
 
    // prints the vector
    cout << "The vector elements are: ";
    for (int i = 0; i < myvector.size(); ++i)
        cout << pos++ << " ";








	/* ---------      capacity of vector ----------------------*/
		// capacity() ==> size of the storage space currently allocated to the vector expressed as number of elements.
	cout <<	"\n" << myvector.size() << " " << myvector.capacity() << " " << myvector.max_size() <<  endl;
	// set vector size
	myvector.resize(20);





	// empty() tell is vector empty or not
	cout << myvector.capacity() << " " << myvector.empty() << endl;





	// shrink vector
	myvector.resize(5);
	cout << myvector.size();
	myvector.shrink_to_fit();





/* ----------------------------------- Insert and remove into vector ------------------------------------------ */


// std::vector::insert()  inserts new elements before the element at the specified position, effectively increasing the container size by the number of elements inserted.
// vector_name.insert (position, val)

// position – It specifies the iterator which points to the position where the insertion is to be done.


cout << "\n---------------------Inserting ----------------------" << endl;
auto it = myvector.insert(myvector.begin(), 3);
    // inserts 2 at front
    myvector.insert(it, 2);
  
    int i = 2;
    // inserts 7 at i-th index
    it = myvector.insert(myvector.begin() + i, 7);
  
    cout << "The vector elements are: ";
    for (auto it = myvector.begin(); it != myvector.end(); ++it)
        cout << *it << " ";



	int x = 50;
  
    // inserting multiple elements
    // at specific positions
    myvector.insert(myvector.begin() + 2, { 30, 40, x, 60 });
  
    cout << "The vector elements are:\n ";
    for (auto it : myvector)
        cout <<  it << " ";












		/* -------------------------------------------sorting ------------------------------------------------*/



	vector<int> v{ 1, 5, 8, 9, 6, 7, 3, 4, 2, 0 };

	sort(v.begin(), v.end());

	cout << "Sorted \n";
	for (auto x : v)
		cout << x << " ";


cout << "\n\n";


/* ----------------------------------------- vector of pairs ---------------------------------------------*/


 vector< pair <int,int> > vect;
  
    // initialising 1st and 2nd element of
    // pairs with array values
    int arr[] = {10, 20, 5, 40 };
    int arr1[] = {30, 60, 20, 50};
    int n = sizeof(arr)/sizeof(arr[0]);
  
    // Entering values in vector of pairs
    for (int i=0; i<n; i++)
        vect.push_back( make_pair(arr[i],arr1[i]) );
  
    // Printing the vector
    for (int i=0; i<n; i++)
    {
        // "first" and "second" are used to access
        // 1st and 2nd element of pair respectively
        cout << vect[i].first << " "
             << vect[i].second << endl;
    }


	/* ----------------------------------------- sorting vector of pairs ---------------------------------------------*/
	
	/* Case 1 : Sorting the vector elements on the basis of first element of pairs in ascending order. */
	 sort(vect.begin(), vect.end());
  
     // Printing the sorted vector(after using sort())
    cout << "The vector after sort operation is:\n" ;
    for (int i=0; i<n; i++)
    {
        // "first" and "second" are used to access
        // 1st and 2nd element of pair respectively
        cout << vect[i].first << " "
             << vect[i].second << endl;
    }
	return 0;
}
