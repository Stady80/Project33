#include <iostream>
#include <ncurses\ncurses.h>
#include <locale.h>

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
  setlocale(LC_CTYPE, ".866");
  for(int i=1;i<5;i++)
  {
    mvaddch(5,i,219);
  }
  refresh();
  getch();
}