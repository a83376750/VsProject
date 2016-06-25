#pragma once
#include "Factory.h"
class ConcreateFactory :
	public CFactory
{
public:
	ConcreateFactory();
	~ConcreateFactory();

	Product* CreateProduct();
};

