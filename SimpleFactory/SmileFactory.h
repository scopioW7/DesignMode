#pragma once
#include "SmileObject.h"
#include <iostream>
enum SmileType {
	Sheep,
	Lion,
	Bat
}; ;
class SmileFactory
{
public:
	virtual AbstractSmile* createSmile() = 0;
	virtual ~SmileFactory() = default;
};

class SheepSmileFactory : public SmileFactory
{
public:
	AbstractSmile* createSmile() override
	{
		return new SheepSmile();
	}
	~SheepSmileFactory() {
		std::cout << "SheepSmileFactory Destructor" << std::endl;
	}
};
class LionSmileFactory : public SmileFactory
{
public:
	AbstractSmile* createSmile() override
	{
		return new LionSmile();
	}
	~LionSmileFactory() {
		std::cout << "LionSmileFactory Destructor" << std::endl;
	}
};
class BatSmileFactory : public SmileFactory
{
public:
	AbstractSmile* createSmile() override
	{
		return new BatSmile();
	}
	~BatSmileFactory() {
		std::cout << "BatSmileFactory Destructor" << std::endl;
	}
};