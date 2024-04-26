include <iostream>

using namespace std;

void swap(int& i, int& j)
{
  int h = i;
  i = j;
  j = h;
}

int main()
{
  int a = 3;
  int b = 42;

  cout << "a = " << a << " ," << " b = " << b << endl;

  Swap (a,b);

  cout << "a = " << a << " ," << " b = " << b << endl;

  return 0;
}
