#include <iostream>
#include <vector>

using namespace std;

class Student
{
    private:
        string name;
        int id
    public:
        Student(string &name; int &id) : name(name), id(id) {}

        void display() const {
        std::cout << "Name: " << name << ", ID: " << id << std::endl;
    }

    int getId() const {
        return id;
    }
};

int main()
{
    int count;

    cin >> count;

    for (size_t i = 0; i < (size_t)count; i++)
    {
        
    }

    return 0;
}