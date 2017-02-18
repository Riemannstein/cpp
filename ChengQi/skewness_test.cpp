#include <iostream>
#include <vector>
#include <numeric>
#include "skewness.h"

int main(){
	std::vector<double> test_vec{1.5,2.9,3.9,4.9,5};
	std::cout << accumulate(test_vec.cbegin(), test_vec.cend(),0)/test_vec.size() << std::endl;
	return 0;
}
