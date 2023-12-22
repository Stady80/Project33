#include <iostream>
#include <ncurses\ncurses.h>
#include <locale.h>

using namespace std;

const int heigh=20;
const int weidth=40;
const int wSymbol=219;

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
  for(int y=1;y<heigh;y++)
  {
    mvaddch(y,1,wSymbol);
    mvaddch(y,weidth,wSymbol);
  }
  for(int x=1;x<=weidth;x++)
  {
    mvaddch(1,x,wSymbol);
    mvaddch(heigh,x,wSymbol);
  }
  mvaddch(5,5,219);
  mvaddch(5,6,219);
  mvaddch(5,7,219);
}

int main()
{
  initscr();
  setlocale(LC_CTYPE, ".866");
  drawWall();
  refresh();
  getch();
}