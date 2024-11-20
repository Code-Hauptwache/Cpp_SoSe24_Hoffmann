#include <iostream>
#include <array>
#include <algorithm>

using namespace std;


int main()
{	
	array <int, 5> situ{5,-2,9,1,0};
	array <int , 5> arrC = situ;
	sort(arrC.begin(), arrC.end());
	
	int a = arrC.size();
	
	for(int i = 0; i < a;i++)
	{
		cout << "Inhalt:" << arrC.at(i) << endl;
	}
	return 0;
}

