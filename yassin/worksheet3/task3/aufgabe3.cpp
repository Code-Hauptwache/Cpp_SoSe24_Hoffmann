#include <iostream>

using namespace std;

namespace MySwap 
{
	void swap(int& num, int& num2, bool checkSign = true) 
	{
		if(checkSign)
		{
			if((num >= 0 && num2 >= 0)||( num < 0 && num2 < 0))
			{
				int temp = num;
				num = num2;
				num2 = temp;		
			}
		}
		else
		{
			int temp = num;
				num = num2;
				num2 = temp;
		}
	}	
}
int main() {
    int zahl1, zahl2;
    

	cout << "Gebe 2 Zahlen ein: " << endl;
	cin >> zahl1 >> zahl2;
    
    
    cout << "Eingangswerte: " << zahl1 << " " << zahl2 << endl;
    
     MySwap::swap(zahl1,zahl2);
        cout << "Ausgangswerte: " << zahl1 << " " << zahl2 << endl;
    
     MySwap::swap(zahl1,zahl2,false);
		cout << "Ausgangswerte: " << zahl1 << " " << zahl2  << endl;

    return 0;
}

