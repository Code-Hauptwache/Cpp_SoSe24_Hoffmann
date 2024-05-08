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
