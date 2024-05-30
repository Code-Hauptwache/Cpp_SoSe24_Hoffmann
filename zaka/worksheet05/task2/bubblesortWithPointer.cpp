#include <iostream>
#include <thread>
#include <chrono>

#define MAX_ARRAY_SIZE 6

using namespace std;

void sort(float** f_ptr, int n);
void printArray(float** arr, int arraySize);
void printWithPause(const string& str, int pauseDuration = 25);

int main()
{
	float* f_ptr[MAX_ARRAY_SIZE];
	int actualArraySize;
	
	f_ptr[0] = new float(2.718281828); 		// e
	f_ptr[1] = new float(1.414213562); 		// sqrt(2)
	f_ptr[2] = new float(3.141592653);		// pi
	f_ptr[3] = new float(1.732050808); 		// sqrt(3)
	f_ptr[4] = new float(-3.141592653);		// -pi
	
	actualArraySize = 5;
	
	sort(f_ptr, actualArraySize);
	
	return 0;
}

void sort(float** f_ptr, int n)
{
	float tmp;
	bool swapped;
	
	printWithPause("The array contains the following numbers:");
	printArray(f_ptr, n);
	
	for (int i = 0; i < n - 1; i++)
	{
		swapped = false;
		
		for(int j = 0; j < n - 1; j++)
		{
			if (*f_ptr[j] > *f_ptr[j + 1])
			{
				tmp = *f_ptr[j];
				*f_ptr[j] = *f_ptr[j + 1]; 
				*f_ptr[j + 1] = tmp;
				
				swapped = true;
			}
		}
		
		if (swapped == false) break;
	}

	printWithPause("\nArray after sorting:");
	printArray(f_ptr, n);
}

void printArray(float** arr, int arraySize) 
{    
    for (int i = 0; i < arraySize; i++) 
    {
        printWithPause(to_string(*arr[i]));
    }
}

void printWithPause(const string& str, int pauseDuration)
{
    for (char c : str) 
    {
        cout << c << flush;
        this_thread::sleep_for(chrono::milliseconds(pauseDuration));
    }
    cout << endl;
}
