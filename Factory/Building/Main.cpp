#include <iostream>
#include "AbstractBuilder.h"
#include "Director.h"
#include "ConcreateBuilderA.h"
#include "ConcreateBuilderB.h"

int main()
{
	Director dir;
	dir.build(new ConcreateBuilderA());
	dir.build(new ConcreateBuilderB());
	getchar();
	return 0;
}