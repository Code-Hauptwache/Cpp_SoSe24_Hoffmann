#include <iostream>
#include <memory>

using namespace std;

class Human
{
    public:
        typedef struct
        {
            int day;
            int month;
            int year;
        } bday;
        
    private:
        bday Birthday;
        string Name = "";
        string Father = "";
        string Mother = "";
        shared_ptr<Human> mom;
        shared_ptr<Human> dad;

    public:
        Human(string name, bday birthday = {00, 00, 0000}) : Name(name), Birthday(birthday) {}

        void showAllInfos()
        {
            cout << "Name: "; Name == "" ? cout << "N/A" << endl : cout << Name << endl;
            cout << "Birthday: "; Birthday.day == 0 && Birthday.month == 0 && Birthday.year == 0 ? cout << "N/A" << endl : cout << Birthday.day << "." << Birthday.month << "." << Birthday.year << endl;
            cout << "Father: "; Father == "" ? cout << "N/A" << endl : cout << Father << endl;
            cout << "Mother: "; Mother == "" ? cout << "N/A" << endl : cout << Mother << endl;
        }

        void showName() { cout << "Name: "; Name == "" ? cout << "N/A" << endl : cout << Name << endl; }
        void showBirthDate() { cout << "Birthday: "; Birthday.day == 0 && Birthday.month == 0 && Birthday.year == 0 ? cout << "N/A" << endl : cout << Birthday.day << "." << Birthday.month << "." << Birthday.year << endl; }
        void showParents() 
        {
            cout << "Father: "; Father == "" ? cout << "N/A" << endl : cout << Father << endl;
            cout << "Mother: "; Mother == "" ? cout << "N/A" << endl : cout << Mother << endl;
        }

        void setMother(shared_ptr<Human> ptr, string m) { mom = ptr; Mother = m; }
        void setFather(shared_ptr<Human> ptr, string f) { dad = ptr; Father = f; }

        shared_ptr<Human> showMother() { cout << "Mother: "; Mother == "" ? cout << "N/A" << endl : cout << Mother << endl; return mom; }
        shared_ptr<Human> showFather() { cout << "Father: "; Father == "" ? cout << "N/A" << endl : cout << Father << endl; return dad; }

        ~Human() { cout << Name << " ist gestorben " << endl; }    
};

int main()
{
    auto adam = make_shared<Human>("Adam", Human::bday{2, 2, 1111});
    adam->showName();
    adam->showBirthDate();
    adam->setFather(0, "God");
    adam->setMother(0, "God");

    auto eva = make_shared<Human>("Eva", Human::bday{3, 2, 1111});
    eva->showName();
    eva->showBirthDate();
    eva->setFather(0, "God");
    eva->setMother(0, "God");
    
    auto kain = make_shared<Human>("Kain", Human::bday{3, 6, 1111});
    kain->showName();
    kain->showBirthDate();
    kain->setFather(adam, "Adam");
    kain->setMother(eva, "Eve");

    kain->showAllInfos();
    kain->showParents();
    kain->showFather();
    kain->showMother();

    return 0;
}
