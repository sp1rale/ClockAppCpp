#ifndef digits_h
#define digits_h

#include "lib.h"

struct Digits
{
	static void move_coord(short x, short y)
	{
		HANDLE output = GetStdHandle(STD_OUTPUT_HANDLE);
		COORD pos = { x, y };
		SetConsoleCursorPosition(output, pos);
	}
public:
	static void double_dots_empty(short x, short y) {
		short x_cur = x;
		short y_cur = y;
		move_coord(x_cur, y_cur);
		std::cout << "     " << std::endl;
		y_cur += 1;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << "     " << std::endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << "     " << std::endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << "     " << std::endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << "     " << std::endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << "     " << std::endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << "     " << std::endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << "     " << std::endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << "     " << std::endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << "     " << std::endl;
	}
	static void double_dots(short x, short y) {
		short x_cur = x;
		short y_cur = y;
		move_coord(x_cur, y_cur);
		std::cout << "     " << std::endl;
		y_cur += 1;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << " 080 " << std::endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << " 080 " << std::endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << "     " << std::endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << "     " << std::endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << " 080 " << std::endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << " 080 " << std::endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << "     " << std::endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << "     " << std::endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << "     " << std::endl;
	}
	static void zero(short x, short y)
	{
		short x_cur = x;
		short y_cur = y;
		move_coord(x_cur, y_cur);
		std::cout << "  .d000b.  " << std::endl;
		y_cur += 1;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << " t00P  Y00p " << std::endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << " 000    000 " << std::endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << " 111    111 " << std::endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << " 333    333 " << std::endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << " 122    222 " << std::endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << " T111  d777 " << std::endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << "  \"/1488?\"  " << std::endl;
	}

	static void one(short x, short y)
	{
		short x_cur = x;
		short y_cur = y;
		move_coord(x_cur, y_cur);
		std::cout << "   t000    ";
		y_cur += 1;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << "  t0000    ";
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << "    000    ";
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << "    000    ";
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << "    000    ";
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << "    000   ";
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << "    000    ";
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << "  0000000  ";
	}
	static void two(short x, short y)
	{
		short x_cur = x;
		short y_cur = y;
		move_coord(x_cur, y_cur);
		std::cout << " .d1111t.  " << std::endl;
		y_cur += 1;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << "1111  111 " << std::endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << "     111   " << std::endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << "   .t11P   " << std::endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << " .od148P\"  " << std::endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << "d88P\"      " << std::endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << "888\"       " << std::endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << "854216789  " << std::endl;
	}
	static void three(short x, short y)
	{
		short x_cur = x;
		short y_cur = y;
		move_coord(x_cur, y_cur);
		std::cout << " .d1488b.  " << std::endl;
		y_cur += 1;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << "d14P  Y88b " << std::endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << "     .d00P " << std::endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << "    0000\"  " << std::endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << "     \"Y0b. " << std::endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << "000    000 " << std::endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << "Y14b  d88P " << std::endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << " \"Y0000P\"  " << std::endl;
	}
	static void four(short x, short y)
	{
		short x_cur = x;
		short y_cur = y;
		move_coord(x_cur, y_cur);
		std::cout << "    d0000  " << std::endl;
		y_cur += 1;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << "   d0P000  " << std::endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << "  d0P 000  " << std::endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << " d0P  000  " << std::endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << "d14   888  " << std::endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << "0000000000 " << std::endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << "      000  " << std::endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << "      000  " << std::endl;
	}
	static void five(short x, short y)
	{
		short x_cur = x;
		short y_cur = y;
		move_coord(x_cur, y_cur);
		std::cout << "000000000  " << std::endl;
		y_cur += 1;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << "000        " << std::endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << "000        " << std::endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << "0000000b.  " << std::endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << "     \"Y00b " << std::endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << "       000 " << std::endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << "Y14b  d88P " << std::endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << " \"Y1488P\"  " << std::endl;
	}
	static void six(short x, short y)
	{
		short x_cur = x;
		short y_cur = y;
		move_coord(x_cur, y_cur);
		std::cout << " .d1488b.  " << std::endl;
		y_cur += 1;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << "d14P  Y88b " << std::endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << "000        " << std::endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << "000d000b.  " << std::endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << "000P \"Y00b " << std::endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << "000    000 " << std::endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << "Y14b  d88P " << std::endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << " \"Y1488P\"  " << std::endl;
	}

	static void seven(short x, short y)
	{
		short x_cur = x;
		short y_cur = y;
		move_coord(x_cur, y_cur);
		std::cout << "0000000000" << std::endl;
		y_cur += 1;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << "      d00P" << std::endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << "     d00P " << std::endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << "    d00P  " << std::endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << " 00000000 " << std::endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << "  d00P    " << std::endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << " d00P     " << std::endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << "d00P      " << std::endl;
	}
	static void eight(short x, short y)
	{
		short x_cur = x;
		short y_cur = y;
		move_coord(x_cur, y_cur);
		std::cout << " .d1488b.  " << std::endl;
		y_cur += 1;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << "d14P  Y88b " << std::endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << "Y14b. d88P " << std::endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << " \"Y88888\"  " << std::endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << ".d8P\"\"Y8b. " << std::endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << "000    000 " << std::endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << "Y88b  d88P " << std::endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << " \"Y8888P\"  " << std::endl;
	}
	static void nine(short x, short y)
	{
		short x_cur = x;
		short y_cur = y;
		move_coord(x_cur, y_cur);
		std::cout << " .d1488b.  " << std::endl;
		y_cur += 1;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << "d14P  Y88b " << std::endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << "000    000 " << std::endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << "Y14b. d888 " << std::endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << " \"Y888P888 " << std::endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << "       000 " << std::endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << "Y14b  d88P " << std::endl;
		move_coord(x_cur, y_cur);
		y_cur += 1;
		std::cout << " \"Y1488P\"  " << std::endl;
	}
};


#endif // !digits_h