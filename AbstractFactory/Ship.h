#pragma once
class ShipBody {
public:
	virtual ~ShipBody() = default;
	virtual void getShipBody() = 0;
};
class WoodBody : public ShipBody {
public:
	void getShipBody() override;
};
class SteelBody : public ShipBody {
public:
	void getShipBody() override;
};
class MetalBody : public ShipBody {
public:
	void getShipBody() override;
};

class Engine {
public:
	virtual ~Engine() = default;
	virtual void getEngine() = 0;
};
class DieselEngine : public Engine {
public:
	void getEngine() override;
};
class HumanEngine : public Engine {
public:
	void getEngine() override;
};
class NuclearEngine : public Engine {
public:
	void getEngine() override;
};

class Weapon {
public:
	virtual ~Weapon() = default;
	virtual void getWeapon() = 0;
};
class Cannon : public Weapon {
public:
	void getWeapon() override;
};
class Missile : public Weapon {
public:
	void getWeapon() override;
};
class Laser : public Weapon {
public:
	void getWeapon() override;
};

class Ship
{
public:
	Ship(ShipBody* body, Engine* engine, Weapon* weapon)
		: m_body(body), m_engine(engine), m_weapon(weapon) {
	}
	~Ship()
	{
		delete m_body;
		delete m_engine;
		delete m_weapon;
	}
	void getShipInfo()
	{
		m_body->getShipBody();
		m_engine->getEngine();
		m_weapon->getWeapon();
	}
private:
	ShipBody* m_body;
	Engine* m_engine;
	Weapon* m_weapon;
};

