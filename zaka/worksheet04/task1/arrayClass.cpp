#include <algorithm>
#include <array>
#include <iostream>

using namespace std;

int main()
{
	const array<float, 7> situ{5.6, 3.2, -1, -4.3, 7.8, 370.99, 69.88};
	
	int situSize = situ.size();
		
	cout << "Original array: ";
	for (int count = 0; const float& value : situ)
	{
		cout << value;
		count++;
		
		if (count < situSize)
		{
			cout << ", ";
		}
	}
	cout << endl;
	
	array<float, 7> situSorted = situ;
	
	sort(situSorted.begin(), situSorted.end());
	
	cout << "Sorted array: ";
	for (int count = 0; const float& value : situSorted)
	{
		cout << value;
		count++;
		
		if (count < situSize)
		{
			cout << ", ";
		}
	}
	cout << endl;
	
	return 0;
}
