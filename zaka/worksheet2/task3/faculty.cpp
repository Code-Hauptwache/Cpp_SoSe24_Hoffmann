#include <iostream>

using namespace std;

long fak(unsigned long n);

int main()
{
	long n;
	long result;
		
	cin >> n;
	
	result = fak(n);
	
	cout << n << "! entspricht " << result << endl;
	
	cout.put('\n');
	cout << "Achtung: Dieser Code könnte für n >= 13 ungenau werden, da die Fakultätswerte den Wertebereich eines 32-Bit 'long' überschreiten können." << endl;
	
	return 0;
}

long fak(unsigned long n)
{
	if (n == 0)
		return 1;

	return n *= fak(n -1);
}
