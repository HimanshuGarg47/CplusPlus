#include <iostream>
using namespace std;
#define MAX 4
struct Node
{
	int data;
	Node* right, *down;
	
	Node(int x){
	    data = x;
	    right = NULL;
	    down = NULL;
	}
};

// n is the size of the matrix
// function must return the pointer to the first element 
// of the in linked list i.e. that should be the element at arr[0][0]
Node* constructLinkedMatrix(int mat[MAX][MAX], int n)
{
     return  constructMatrix(mat,0,0,n,n);
     
}
    Node* constructMatrix(int mat[MAX][MAX],int i,int j,int m,int n)
    {
      if (i > n - 1 || j > m - 1)
      return NULL;
     Node* temp = new Node(mat[i][j]);
     temp->right = constructMatrix(mat, i, j + 1, m, n);
     temp->down = constructMatrix(mat, i + 1, j, m, n);
     return temp;
}

int main()
{

}