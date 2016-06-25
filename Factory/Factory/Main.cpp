#include "ConcreateFactory.h"
#include "Factory.h"
#include "Product.h"
#include <iostream>

int main()
{
	CFactory* fac = new ConcreateFactory();
	Product* pro = fac->CreateProduct();
	getchar();
	return 0;
}