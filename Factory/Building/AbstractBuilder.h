#pragma once
class AbstractBuilder
{
public:
	AbstractBuilder();
	~AbstractBuilder();

public:
	virtual void CreateBuildFirst() = 0;
	virtual void CreateBuildSecond() = 0;

};

