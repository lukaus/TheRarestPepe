#include <ncurses.h>

void keyUp();
void keyDown();
void updateMenu();

int selectedItem;
int totalItems;
int inputChar;

void space(int num)
{
	int i = num;
	while(i > 0)
	{
		printw(" ");
		i--;
	}
}

void green(int num)
{
		attron(COLOR_PAIR(1));
		space(num);
		attroff(COLOR_PAIR(1));
}

void black(int num)
{
		attron(COLOR_PAIR(2));
		space(num);
		attroff(COLOR_PAIR(2));

}

void white(int num)
{
		attron(COLOR_PAIR(3));
		space(num);
		attroff(COLOR_PAIR(3));
		
}

void brown(int num)
{
		attron(COLOR_PAIR(4));
		space(num);
		attroff(COLOR_PAIR(4));
		
}


void pepe()
{
	green(27);black(9);green(1);black(2);green(20);black(2);white(19);printw("\n");
	green(9);black(24);green(2);black(5);green(10);black(13);white(17);printw("\n");
	green(7);black(2);green(1);black(5);green(11);black(4);green(2);black(3);green(3);black(3);green(8);black(13);green(1);black(3);white(14);printw("\n");
	green(5);black(2);green(2);black(2);green(19);black(8);green(3);black(1);green(4);black(3);green(1);black(4);green(7);black(2);green(2);black(2);white(13);printw("\n");
	green(4);black(2);green(1);black(2);green(13);black(15);green(1);black(2);green(1);black(2);green(3);black(1);green(1);black(3);green(12);black(3); white(14);printw("\n");
	green(5);black(7);white(6);black(11);white(8);black(1);green(1);black(2);green(1);black(1);green(4);black(11);white(2);black(6);white(14);printw("\n");
	green(13);black(3);white(1);black(8);white(2);black(3);white(8);black(1);green(1);black(2);green(3);black(2);white(1);black(2);white(1);black(7);white(7);black(2);white(13);printw("\n");
	green(12);black(1);green(3);black(9);white(1);black(4);white(8);black(2);green(1);black(1);green(2);black(2);white(1);black(8);white(2);black(1);white(6);black(3);white(13);printw("\n");
	green(13);black(2);green(6);black(8);white(10);black(2);green(3);black(1);white(2);black(11);white(4);black(2);green(1);black(2);white(13);printw("\n");
	green(15);black(3);green(7);black(5);white(6);black(3);green(2);black(1);green(5);black(14);green(3);black(1);white(15);printw("\n");
	green(18);black(7);green(13);black(4);green(2);black(2);green(15);black(3);white(16);printw("\n");
	green(28);black(1);green(5);black(4);green(8);black(5);green(7);black(7);white(15);printw("\n");
	green(4);black(2);green(27);black(3);green(14);black(3);green(11);black(2);white(14);printw("\n");
	green(31);black(3);green(18);black(2);green(12);black(1);white(13);printw("\n");
	green(3);black(5);green(19);black(4);green(23);black(1);green(11);black(2);white(12);printw("\n");
	green(1);black(8);green(14);black(4);green(38);black(1);brown(2);black(1);white(11);printw("\n");
	green(3);black(1);brown(8);black(4);green(48);black(2);brown(1);black(1);white(12);printw("\n");
	green(3);black(2);brown(5);black(1);brown(8);black(6);green(38);black(2);brown(1);black(1);white(13);printw("\n");
	green(6);black(2);brown(4);black(3);brown(12);black(8);green(25);black(2);brown(2);black(2);white(14);printw("\n");
	green(8);black(3);brown(7);black(2);brown(43);black(2);white(15);printw("\n");
	green(12);black(3);brown(46);black(1);brown(3);black(1);white(14);printw("\n");
	green(17);black(2);brown(45);black(1);white(15);printw("\n");
	green(20);black(4);brown(38);black(2);white(16);printw("\n");
	green(24);black(8);brown(28);black(3);white(17);printw("\n");
	green(34);black(25);green(3);black(1);white(17);printw("\n");
	
	

}

int main()
{
	// l = 80
	// h = 25
	initscr();
	raw();
	keypad(stdscr, TRUE);
	noecho();
	char block = 35;
	start_color();
	init_pair(1, COLOR_WHITE, COLOR_GREEN);
	init_pair(2, COLOR_WHITE, COLOR_MAGENTA);
	init_color(COLOR_MAGENTA, 0, 0, 0);
	init_pair(3, COLOR_WHITE, COLOR_WHITE); // grey
	init_color(COLOR_RED, 750, 350, 250);
	init_pair(4, COLOR_WHITE, COLOR_RED); // brown
	
	pepe();
   	getch();
	endwin();

	return 0;
}
