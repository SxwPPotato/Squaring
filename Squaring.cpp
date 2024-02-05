#include <iostream>
#include <vector>
#include <algorithm>

template <class T>
T squaring(T el) {
	return el * el;
}

template <>
std::vector<int> squaring(std::vector<int> vec) {
	for (int i = 0; i < vec.size(); i++)
		vec[i] = vec[i] * vec[i];
	return vec;
	
}

int main()
{
	int elem = 7;
	std::vector<int> vec = { 1, 3, 9, -3, 12 };
	std::cout << squaring(elem) << "\n";
	vec = squaring(vec);
	for (int i = 0; i < vec.size(); i++)
		std::cout << vec[i] << ' ';
	
}
