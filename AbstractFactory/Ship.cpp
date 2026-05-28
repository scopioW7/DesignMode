#include "Ship.h"
#include <iostream>
void WoodBody::getShipBody()
{
	std::cout << "Wooden Ship Body" << std::endl;
}

void SteelBody::getShipBody()
{
	std::cout << "Steel Ship Body" << std::endl;
}

void MetalBody::getShipBody()
{
	std::cout << "Metal Ship Body" << std::endl;
}

void DieselEngine::getEngine()
{
	std::cout << "Diesel Engine" << std::endl;
}

void HumanEngine::getEngine()
{
	std::cout << "Human Engine" << std::endl;
}

void NuclearEngine::getEngine()
{
	std::cout << "Nuclear Engine" << std::endl;
}

void Cannon::getWeapon()
{
	std::cout << "Cannon Weapon" << std::endl;
}

void Missile::getWeapon()
{
	std::cout << "Missile Weapon" << std::endl;
}

void Laser::getWeapon()
{
	std::cout << "Laser Weapon" << std::endl;
}
