#include <iostream>

using namespace std;

namespace getPuts
{	
	static int puts(const char *in)
	{
		int out = 0;

		while (*in != '\0')
		{
			std::cout.put(*in);
			out++;
			in++;
		}
		
		std::cout.put('\n');
		out++;
		
		return out;
	}    
}

int main()
{
	char str[] = "Hello World";
	int written;
	
	written = getPuts::puts(str);
	
	cout << written << endl;

	return 0;
}

