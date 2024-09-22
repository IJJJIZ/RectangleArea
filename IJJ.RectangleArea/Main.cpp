
#include <iostream>
#include <conio.h>


int GetLengthFromUser()
{
	int length;
	std::cout << "Give length pls: ";
	std::cin >> length;
	return length;
}

int GetWidthFromUser()
{
	int width;
	std::cout << "Give length pls: ";
	std::cin >> width;
	return width;
}

int CalcArea(int length, int width) { return length * width; }

void DisplayArea() { std::cout << "Area: " << CalcArea(GetLengthFromUser(), GetWidthFromUser()); }

int main()
{
	DisplayArea();
	(void)_getch;
	return 0;
}