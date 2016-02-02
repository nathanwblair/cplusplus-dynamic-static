#pragma once
#define StaticManager(classname) StaticManager<classname, "classname">

template <typename type>
class Static : StaticManager(Static)
{
private:
	static StaticCore core;

public:
	Static<mat4> neo;
	Static();
	~Static();
};

/*
Static<> creates a new instance of <type> on the heap and sends the pointer to 

*/