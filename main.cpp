#include "main.hpp"

void gotoxy(int x, int y);

ControlGoStone::ControlGoStone()
{
	locationOfX = locationOfY = 0;
	printBord();
	// imformation.printInfo();
}

ControlGoStone::~ControlGoStone()
{
}

void ControlGoStone::printBord()
{
	int i, j;
	printf("┌");
	for (i = 0; i < SIZE - 2; i++) printf("─┬");
	printf("─┐\r\n");

	for (i = 0; i < SIZE - 2; i++)
	{
		printf("├");
		for (j = 0; j < SIZE - 2; j++)
			printf("─┼");
		printf("─┤\r\n");
	}

	printf("└");
	for (i = 0; i < SIZE - 2; i++) printf("─┴");
	printf("─┘\r\n");

	printf("print Board\r\n");
}

// void ControlGoStone::movingStone() 
// {
// 	gotoxy(0, 0);
// 	bool put = false;

// 	while(1) {
// 		if (concave.getColor())
// 			imformation.printMessage("흑돌의 순서입니다.", concave.getY() * 2, concave.getX());
// 	}
// }


int main(void)
{
	ControlGoStone tmp;
	int a;

	cin >> a;
	return 0;
}


