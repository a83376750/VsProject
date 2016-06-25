#pragma once
#include "AbstractBuilder.h"
class Director
{
public:
	Director();
	~Director();

public:
	void build(AbstractBuilder *builder);
};

