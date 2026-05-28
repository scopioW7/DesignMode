#pragma once
class ShipBuilder
{
public:
	virtual ~ShipBuilder() {}
	virtual void buildHull() = 0;
	virtual void buildEngine() = 0;
	virtual void buildWeapons() = 0;
	virtual void buildInterior() = 0;
	virtual void reset() = 0;
};

class SunnyBuilder : public ShipBuilder
{
public:
	SunnyBuilder();
	~SunnyBuilder();
	void buildHull() override;
	void buildEngine() override;
	void buildWeapons() override;
	void buildInterior() override;
	void reset() override;
	SunnyBuilder* getSunny();
private:
	SunnyBuilder* instance;
};

class StormBuilder : public ShipBuilder
{
public:
	StormBuilder();
	~StormBuilder();
	void buildHull() override;
	void buildEngine() override;
	void buildWeapons() override;
	void buildInterior() override;
	void reset() override;
	StormBuilder* getStorm();
private:
	StormBuilder* instance;
};

