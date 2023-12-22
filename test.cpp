#include <iostream>
#include <conio.h>

using namespace std;

int sum(int a, int b)
{
    return a+b;
}

int inc(int a)
{
    return ++a;
}

int main()
{
  cout << "Hello!!!" << endl;
  cout << sum(3,6) << endl;
  cout << inc(6) << endl;
  getch();
}