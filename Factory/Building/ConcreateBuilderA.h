#pragma once
#include "AbstractBuilder.h"
#include <iostream>
using namespace std;

class ConcreateBuilderA :
	public AbstractBuilder
{
public:
	ConcreateBuilderA();
	~ConcreateBuilderA();

public:
	void CreateBuildFirst() override { cout << "BuildA1!!" << endl; }
	void CreateBuildSecond() override { cout << "BuildA2!!" << endl; }
};

