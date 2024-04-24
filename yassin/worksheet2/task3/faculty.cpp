#include <iostream>

using namespace std;

long fak(unsigned long n);
 
int main()
{
	int num;
	int result;
	
	cin >> num;
	
	result = fak(num);
	
	cout << num << "! = " << result << endl;
	return 0;
}

long fak(unsigned long n)
{
	if(n == 0)
		return 1;
	else
		return n = n * fak(n -1);
}
