#include <iostream>

int puts(const char *in);

int main()
{
	char str[] = "Hello World";
	int written;
	
	written = puts(str);
	
	std::cout << written;

	return 0;
}

int puts(const char *in)
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
