#include <iostream>

double factorial(int n);

int main()
{
	int n = 0;
	
	std::cout << "Please enter a number" << std::endl;
	std::cin >> n;
	
	double sum = factorial(n);
	
	std::cout << sum << std::endl;
	return 0;
}

double factorial(int n)
{
	if(n==0)
	{
		return 1;
	}
	else
	{
		return n * factorial(n-1);
	}
}
