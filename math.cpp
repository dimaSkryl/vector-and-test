#include "math.h"
#include <vector>
using namespace std;
/*
int factorial(int n) {
	int res = 1;
	for (int i = 1; i <= n; ++i) {
		res *= i;
	}

	return res;
}

float divAtoB(float a, float b) {
	try {
		return a / b;
	}
	catch (...) {
		std::cout << "Error" << std::endl;
	}
}

bool isPositiv(int n) {
	return (n > 0);
}

std::string reverseStr(std::string str) {
	std::reverse(str.begin(), str.end());
	return str;
}
*/

std::vector<int> increase_vector(std::vector<int> vector, int n) {
	for (int i = 0; i < vector.size(); i++) {
		vector[i] += n;
	}
	return vector;
}

