/* Person.h */

class Date
{
  public:
    Date(int d=1, int m=1, int y=1970) : day(d), month(m), year(y) { };
    void SetDate(int d, int m, int y) { day = d; month = m; year = y; };
    void GetDate() { std::cout << day << "." << month << "." << year << std::endl; }
  private:    
    int day;
    int month;
    int year;
};


class Person
{
  public:
    Person( const char* n="", const char* c="" ) : name(n), nat(c) { };
    void SetBirth( int d, int m, int y) { Birth.SetDate(d,m,y); }; // via Class Date
    
    void PrintName() { std::cout << name <<std::endl; }
    void PrintBirth() { Birth.GetDate(); } 
  protected:
    std::string name; 
    Date Birth;
    std::string nat;
};
