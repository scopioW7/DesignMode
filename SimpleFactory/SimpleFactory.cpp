// SimpleFactory.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include "SmileObject.h"
#include "SmileFactory.h"


int main()
{
	SmileFactory* smileFactory1 = new SheepSmileFactory();
	smileFactory1->createSmile()->transform();
	smileFactory1->createSmile()->ability();
	
	SmileFactory* smileFactory2 = new LionSmileFactory();
	smileFactory2->createSmile()->transform();
	smileFactory2->createSmile()->ability();

	SmileFactory* smileFactory3 = new BatSmileFactory();
	smileFactory3->createSmile()->transform();
	smileFactory3->createSmile()->ability();

    std::cout << "Hello World!\n";
}
