// cube.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"

int main(int argc, char* argv[])
{
	for (auto i = -15; i <= 15; i++)
		for (auto j = -15; j <= 15; j++)
			std::cout << (i / 10.0) << ' ' << (j / 10.0) << std::endl;

	return 0;
}
