#pragma once
#include "AbstractBuilder.h"
#include <iostream>
using namespace std;

class ConcreateBuilderB :
	public AbstractBuilder
{
public:
	ConcreateBuilderB();
	~ConcreateBuilderB();

public:
	void CreateBuildFirst() { cout << "BuildB1!!" << endl; }
	void CreateBuildSecond() { cout << "BuildB2!!" << endl; }
};

