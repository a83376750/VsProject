#include "Director.h"



Director::Director()
{
}


Director::~Director()
{
}

void Director::build(AbstractBuilder *builder)
{
	builder->CreateBuildFirst();
	builder->CreateBuildSecond();
}
