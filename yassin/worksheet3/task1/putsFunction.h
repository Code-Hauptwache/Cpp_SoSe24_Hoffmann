using namespace std;

namespace putsF
{
	int puts(const char *in)
	{
		
		int out = 0;
		while(*in != '\0')
		{
			cout.put(*in);
			++in;
			++out;
		}	
			
		return out;
	}
}
