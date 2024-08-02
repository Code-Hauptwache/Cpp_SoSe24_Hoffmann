#include <iostream>
#include <vector>

using namespace std;

template <typename T>
class Container
{
    private:
        vector<T> container;
    public:
        void add(const T &element)
        {
            container.push_back(element);
        }

        void remove(const T &element)
        {
            for (size_t i = 0; i < container.size(); i++)
            {
                if (container[i] == element)
                {
                    container.erase(container.begin() + i);
                    return;
                }
            }

            cout << element << " is not in container." << endl;
        }
        
        void display() const
        {
            for (int i = 0; i < container.size(); i++)
            {
                cout << i << ". " << container[i] << endl;
            }
        }
};

int main()
{
    Container<int> myElements;
    int numberOfElements;

    cout << "How many element do you want to enter: ";
    cin >> numberOfElements;

    for (int i = 0; i < numberOfElements; i++)
    {
        int input;

        cin >> input;
        myElements.add(input);
    }
    
    myElements.remove(20);

    myElements.add(25);

    myElements.display();
    
    return 0;
}

