#include "ShipBuilder.h"

SunnyBuilder::SunnyBuilder()
{
}

SunnyBuilder::~SunnyBuilder()
{
}

void SunnyBuilder::buildHull()
{
}

void SunnyBuilder::buildEngine()
{
}

void SunnyBuilder::buildWeapons()
{
}

void SunnyBuilder::buildInterior()
{
}

void SunnyBuilder::reset()
{
}

SunnyBuilder* SunnyBuilder::getSunny()
{
	return instance;
}

StormBuilder::StormBuilder()
{
}

StormBuilder::~StormBuilder()
{
}

void StormBuilder::buildHull()
{
}

void StormBuilder::buildEngine()
{
}

void StormBuilder::buildWeapons()
{
}

void StormBuilder::buildInterior()
{
}

void StormBuilder::reset()
{
}

StormBuilder* StormBuilder::getStorm()
{
	return instance;
}
