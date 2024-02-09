#include <iostream>

template <typename T>
void swap(T& a, T& b)
{
	T temp;

	temp = a;
	a = b;
	b = temp;
}

template <typename T>
T max(T& a, T& b)
{
	return a < b ? b : a;
}

#include <vector>
int main()
{
	int i1 = 1;
	int i2 = 2;
	float f1 = 1.5;
	float f2 = 2.5;
	std::vector<int> v;

	v.push_back(i1);
	v.push_back(i2);
	std::cout << i1 << " " << i2 << std::endl;
	swap(i1, i2);
	std::cout << i1 << " " << i2 << std::endl;

	std::cout << f1 << " " << f2 << std::endl;
	swap(f1, f2);
	std::cout << f1 << " " << f2 << std::endl;


	return 0;
}