#include <iostream>

// Problem 01
// Multiples of 3 or 5

int problem(int limit){
	int sum_of_multiples = 0;
	for(int i = 0; i < limit; i++){
		if(i % 3 == 0 || i % 5 == 0){
			sum_of_multiples += i;
		}
	}
	return sum_of_multiples;
}

int main(){
	std::cout << problem(1000) << std::endl;
}