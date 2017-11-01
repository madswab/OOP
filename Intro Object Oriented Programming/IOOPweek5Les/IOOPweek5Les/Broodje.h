#pragma once
#include<string>;
#include<iostream>;

class Broodje
{
public:
	Broodje(std::string type);
	Broodje();
	virtual ~Broodje();
	std::string _type = "onbekend";
};

