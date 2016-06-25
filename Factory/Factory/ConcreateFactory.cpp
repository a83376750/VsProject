#include "ConcreateFactory.h"
#include "ConcreateProduct.h"
#include <iostream>

using namespace std;

ConcreateFactory::ConcreateFactory()
{
	cout << "ConcreateFactory!!!" << endl;
}


ConcreateFactory::~ConcreateFactory()
{
}

Product* ConcreateFactory::CreateProduct()
{
	return new ConcreateProduct();
}
