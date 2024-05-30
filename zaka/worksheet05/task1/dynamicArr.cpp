#include <iostream>
#include <thread>
#include <chrono>
#include <exception>
#include <limits>

using namespace std;

void getarray(double*& arr, int* arraySize);
void printArray(double* arr, int* arraySize);
void printWithPause(const string& str, int pauseDuration = 25);
bool getValidInput(int* input);

int main()
{
    int* arrSize = nullptr;
    double* arr = nullptr;

    try 
    {
        arrSize = new int;
    } 
    catch (const bad_alloc& e) 
    {
        cerr << "Memory allocation failed for arrSize: " << e.what() << endl;
        return 1;
    }

    printWithPause("How many numbers do you want to save: ");
    
    while (!getValidInput(arrSize) || *arrSize == 0) 
    {
        if (*arrSize == 0) 
        {
            printWithPause("You entered 0, no numbers to save.");
            delete arrSize;
            return 0;
        }
        printWithPause("Invalid input. Please enter a non-negative number: ");
    }

    try 
    {
        getarray(arr, arrSize);
    } 
    catch (const bad_alloc& e) 
    {
        cerr << "Memory allocation failed for arr: " << e.what() << endl;
        delete arrSize;
        return 1;
    }

    printArray(arr, arrSize);

    delete[] arr;

    printWithPause("How many numbers do you want to save this time: ");
    
    while (!getValidInput(arrSize) || *arrSize == 0) 
    {
        if (*arrSize == 0) 
        {
            printWithPause("You entered 0, no numbers to save.");
            delete arrSize;
            return 0;
        }
        printWithPause("Invalid input. Please enter a non-negative number: ");
    }

    try 
    {
        getarray(arr, arrSize);
    } 
    catch (const bad_alloc& e) 
    {
        cerr << "Memory allocation failed for arr: " << e.what() << endl;
        delete arrSize;
        return 1;
    }

    printArray(arr, arrSize);

    delete[] arr;
    delete arrSize;

    return 0;
}

bool getValidInput(int* input) 
{
    cin >> *input;
    if (cin.fail() || *input < 0) 
    {
        cin.clear(); // clear the error flag
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        return false;
    }
    return true;
}

void getarray(double*& arr, int* arraySize) 
{
    arr = new double[*arraySize];
    
    cout << "Enter " << *arraySize << " numbers:" << endl;
    
    for (int i = 0; i < *arraySize; i++) 
    {
        cin >> arr[i];
    }
}

void printArray(double* arr, int* arraySize) 
{
    printWithPause("The array contains the following numbers:");
    
    for (int i = 0; i < *arraySize; i++) 
    {
        printWithPause(to_string(arr[i]));
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
