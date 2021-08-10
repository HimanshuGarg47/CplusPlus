#include <iostream>
#include <algorithm>

int main() {
	// your code goes here
	int num_num,i = 0;
	std::cin >> num_num;
	int p[num_num];
	while(i<num_num)
	{
	    std::cin >> p[i++];
	}
	std::sort(p,p+num_num);
    i = 0;
	while(i<num_num)
	std::cout << p[i++] << std::endl;
	return 0;
}
