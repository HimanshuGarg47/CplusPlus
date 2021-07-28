#include <iostream>
using namespace std;

class Node{
    int l;
    int b;
      
    
    int product(int l,int b){
        return l*b;
    }

    int initialize(int l,int b);
};

int Node::initialize(int l,int b)
{
    
        this->l = l;
        this->b = b;
    
}
int main()
{
    

}