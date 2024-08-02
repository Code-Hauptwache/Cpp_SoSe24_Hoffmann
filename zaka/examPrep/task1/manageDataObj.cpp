/*
 * manageDataObj.cpp
 * 
 * This version of task 1 from the Exam Preparation Worksheet (Probeklausur SS 24 by Erwin Hoffman) uses a vector of string objects (std::vector<std::string>).
 * Each element in the vector is a string object, managed automatically by the standard library.
 * Memory management is handled automatically, and there is no need to manually delete the strings.
 * This approach reduces the risk of memory leaks and simplifies the code.
 * 
 */

#include <algorithm>
#include <iostream>
#include <cstring>
#include <limits>
#include <sstream>
#include <vector>

using namespace std;


void addDataObj(vector<string> &vector);
void deleteDataObj(vector<string> &vector);
template <typename T>
void showDataObjs(vector<T> &vector, bool &sorted);

int main()
{
    int choice = 1;
    bool sortState = false;
    vector<string> vec;

    while (1)
    {
        cout << "Pick a option" << endl;
        cout << "1. Add  data set" << endl;
        cout << "2. Delete data set" << endl;
        cout << "3. Show data sets" << endl;
        cout << "4. End program" << endl;

        do
        {
            if (choice < 1 || choice > 4 || cin.fail())
            {
                cerr << "Invalide iput. Please try again." << endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }

            cout << "Option: ";
            cin >> choice;
        } while (choice < 1 || choice > 4 || cin.fail());
        
        switch (choice)
        {
            case (1):
                addDataObj(vec);
                break;
            case (2):
                deleteDataObj(vec);
                break;
            case (3):
                showDataObjs(vec, sortState);
                break;
            case (4):
                return 0;
            default:
                break;
        }
    }

    return 0;
}

void addDataObj(vector<string> &vector)
{
    string temp;

    cout << "Enter content for new data set: ";

    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    getline(cin, temp);
    vector.push_back(temp);
}

void deleteDataObj(vector<string> &vector)
{
    if (vector.size() == 0)
    {
        cout << "There is nothing to be done." << endl;
        return;
    }
    else
    {
        int choice;
        size_t vectorSize = vector.size();

        do
        {
            if (choice < 0 || choice > vectorSize || cin.fail())
            {
                cerr << "\nInvalide input. Please try again." << endl;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }

            cout<< "Enter data set to be deletet (1 to " << vectorSize << ", 0 to cancel)";
            cin >> choice;   
        } while (choice < 0 || (size_t)choice > vectorSize || cin.fail());

        if (choice == 0) return;

        cout << "Deleting data set at index " << choice << ": " << vector[(size_t)choice - 1] << endl;
        vector.erase(vector.begin() + (size_t)choice - 1);
    }
}

template <typename T>
void showDataObjs(vector<T> &vector, bool &sorted)
{
    size_t vectorSize = vector.size();
    
    if (vectorSize == 0)
    {
        cout << "There is not data set to show." << endl;
        return;
    }

    if (!sorted) sort(vector.begin(), vector.end());

    for (size_t i = 0; i < vectorSize; i++)
    {
        cout << i + 1 << ". " << vector[i] << endl;
    }
}