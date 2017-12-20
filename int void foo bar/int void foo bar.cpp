// int void foo bar.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

int foo() {
	std::cout << 1;
	return 1;
}
void bar(int i = foo()) {}

int main()
{
	bar();
	bar();

    return 0;
}

