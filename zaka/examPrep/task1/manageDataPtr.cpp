/*
 * manageDataPtr.cpp
 * 
 * This version of task 1 from the Exam Preparation Worksheet (Probeklausur SS 24 by Erwin Hoffman) uses a vector of string pointers (std::vector<std::string*>).
 * Each element in the vector is a pointer to a dynamically allocated string.
 * Memory management must be handled manually, including deleting strings when they are no longer needed.
 * 
 */

#include <algorithm>
#include <iostream>
#include <vector>
#include <limits>
#include <cstring>

using namespace std;

void addDataPtr(vector<string*>& vec, bool &sorted);
void deleteDataPtr(vector<string*>& vec);
void showDataPtr(vector<string*>& vec, bool &sorted);

int main()
{
    bool sortState = false;
    int choice;
    vector<string*> vec;    // Vector for saving string pointers
    
    // Option to choose to add data, show data, or end program
    while (true)
    {
        // Print Options
        cout << "Pick an option" << endl;
        cout << "1. Add data" << endl;
        cout << "2. Delete data" << endl;
        cout << "3. Show Data" << endl;
        cout << "4. End program" << endl;
        
        // Read in choice
        cin >> choice;
        
        switch (choice)
        {
            case 1:
                addDataPtr(vec, sortState);
                break;
            case 2:
                deleteDataPtr(vec);
                break;
            case 3:
                showDataPtr(vec, sortState);
                break;
            case 4:
                // Clean up allocated memory
                for (string* str : vec) {
                    delete str;
                }
                return 0;
            default:
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cerr << "Invalid input, please try again." << endl;
        }
    }
    
    return 0;
}

void addDataPtr(vector<string*>& vec, bool &sorted)
{
    string* temp = new string;
    cout << "Please enter your data: ";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    getline(cin, *temp);
    
    vec.push_back(temp);
    sorted = false;
}

void deleteDataPtr(vector<string*>& vec)
{
    if (vec.size() == 0)
    {
        cout << "There is nothing to be deleted." << endl;
        return;
    }
    
    size_t choice;
    
    do
    {
        cout << "Which data set do you want to delete (1 to " << vec.size() << ", 0 to cancel): ";
        cin >> choice;
        
        if (cin.fail() || choice > vec.size())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please enter a valid index.\n" << endl;
        }
    } while (cin.fail() || choice > vec.size());
    
    if (choice == 0)
        return;
    
    // Subtract 1 to convert to zero-based index
    cout << "Deleting data set at index " << choice << ": " << *vec[choice - 1] << endl;
    delete vec[choice - 1]; // Free memory
    vec.erase(vec.begin() + choice - 1);
}

void showDataPtr(vector<string*>& vec, bool &sorted)
{
    if (!sorted)
    {
        sort(vec.begin(), vec.end(), [](string* a, string* b){
            return *a < *b;
        });
        sorted = true;
    }
    
    cout << "\nNumber of data sets: " << vec.size() << endl;
    for (size_t i = 0; i < vec.size(); ++i)
    {
        cout << i + 1 << ". " << *vec[i] << endl;
    }
    cout << endl;
}
