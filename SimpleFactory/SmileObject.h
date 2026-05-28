#pragma once

//实现多态，需要满足三个条件：
//类和类之间有继承关系。
//父类中有虚函数，并且在子类中需要重写这些虚函数。
//使用父类指针或引用指向子类对象。

class AbstractSmile
{
public:
	virtual ~AbstractSmile() = default;
	virtual void transform() = 0;
	virtual void ability() = 0;
};

class SheepSmile : public AbstractSmile
{
public:
	void transform() override;
	void ability() override;
};
class LionSmile : public AbstractSmile
{
public:
	void transform() override;
	void ability() override;
};
class BatSmile : public AbstractSmile
{
public:
	void transform() override;
	void ability() override;
};