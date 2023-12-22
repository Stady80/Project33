#include <iostream>
#include <ncurses\ncurses.h>

using namespace std;

int main()
{
  initscr();
  mvaddch(5,5,81);
  refresh();
  getch();
  endwin();
}