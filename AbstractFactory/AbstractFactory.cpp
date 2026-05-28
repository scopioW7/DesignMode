// AbstractFactory.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
// 工厂模式：实现类与类之间的解耦合，将对象的创建交给工厂类完成
// 工厂模式有三个种：简单工厂模式、工厂方法模式、抽象工厂模式
// 简单工厂模式：一个工厂类负责创建所有类的实例，在工厂类中通过条件判断来决定创建哪一个类的实例，违反了开闭原则
// 工厂方法模式：定义一个创建对象的接口，但由子类决定要实例化的类是哪一个，工厂方法使得一个类的实例化延迟到其子类
// 抽象工厂模式：提供一个创建一系列相关或相互依赖对象的接口，而无需指定它们具体的类

#include <iostream>
#include "Ship.h"
class AbstractFactory
{
public:
	virtual Ship* createShip() = 0;
	virtual ~AbstractFactory() = default;
};
class WoodShipFactory : public AbstractFactory
{
public:
	Ship* createShip() override
	{
		return new Ship(new WoodBody(), new HumanEngine(), new Cannon());
	}
};
class SteelShipFactory : public AbstractFactory
{
public:
	Ship* createShip() override
	{
		return new Ship(new SteelBody(), new DieselEngine(), new Missile());
	}
};
class MetalShipFactory : public AbstractFactory
{
public:
	Ship* createShip() override
	{
		return new Ship(new MetalBody(), new NuclearEngine(), new Laser());
	}
};


int main()
{
	AbstractFactory* ship = new SteelShipFactory();
	ship->createShip()->getShipInfo();

	AbstractFactory* ship2 = new WoodShipFactory();
	ship2->createShip()->getShipInfo();

	AbstractFactory* ship3 = new MetalShipFactory();
	ship3->createShip()->getShipInfo();
	return 0;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
