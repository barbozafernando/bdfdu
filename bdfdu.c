#include <stdio.h>
#include <ncurses.h>

int main() {
  initscr();
  printw("Press any key...");
  refresh();
  getch();
  endwin();
  return 0;
}
