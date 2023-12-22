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

void drawWall()
{
  for(int y=1;y<20;y++)
  {
    mvaddch(y,1,219);
    mvaddch(y,40,219);
  }
  for(int x=1;x<41;x++)
  {
        mvaddch(1,x,219);
    mvaddch(20,x,219);
  }
}

int main()
{
  initscr();
  setlocale(LC_CTYPE, ".866");
  drawWall();
  refresh();
  getch();
}