#include <iostream>
#include <vector>
#include <numeric>

int main()
{
	std::vector<int> valuesVector(10);
	std::iota(valuesVector.begin(), valuesVector.end(), 0);
	for(int value : valuesVector)
	{
		std::cout << value << " ";
	}
	std::cout << "\n";


	return 0;
}