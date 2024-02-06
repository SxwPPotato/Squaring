#include <iostream>
#include <vector>
#include <algorithm>

template <class T>
T squaring(T el) {
	return el * el;
}

template <class T>
std::vector<T> squaring(std::vector<T> vec) {
	for (int i = 0; i < vec.size(); i++)
		vec[i] = vec[i] * vec[i];
	return vec;
	
}

int main()
{
	int elem = 7;
	std::vector<double> vec = { 1.5, 3, 9, -3, 12 };
	std::cout << squaring(elem) << "\n";
	vec = squaring(vec);
	for (int i = 0; i < vec.size(); i++)
		std::cout << vec[i] << ' ';
	
}
