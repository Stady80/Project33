#include <iostream>
#include <ncurses\ncurses.h>

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
  initscr();
  mvaddch(5,5,81);
  refresh();
  getch();

  cout << "getch is pressed!!!" << endl;
  getch();




}