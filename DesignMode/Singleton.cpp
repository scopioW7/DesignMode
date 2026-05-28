
#include <iostream>
// 结构型，单例模式
// 饿汉式单例模式
class TaskEHSingleton
{
public:
    TaskEHSingleton(const TaskEHSingleton& obj) = delete;
	TaskEHSingleton& operator=(const TaskEHSingleton& obj) = delete;
    static TaskEHSingleton* getInstance()
    {
		return m_instance;
    }
	void someMethod()
	{
		std::cout << num++ << std::endl;
	}
private:
    TaskEHSingleton() = default;
private:
	static TaskEHSingleton* m_instance;
	int num = 0;
};
//静态成员变量初始化，类外初始化
TaskEHSingleton* TaskEHSingleton::m_instance = new TaskEHSingleton();

// 懒汉式单例模式
class TaskLHSingleton
{
public:
	TaskLHSingleton(const TaskLHSingleton& obj) = delete;
	TaskLHSingleton& operator=(const TaskLHSingleton& obj) = delete;
	static TaskLHSingleton* getInstance()
	{
		//C++11规定：如果指令逻辑进入一个未被初始化的声明变量，所有并发执行应当等待该变量完成初始化。所以这里是线程安全的
		//若是不使用局部静态变量，则需要加锁来保证线程安全
		static TaskLHSingleton instance;
		return &instance;
	}
	void someMethod()
	{
		std::cout << num++ << std::endl;
	}
private:
	TaskLHSingleton() = default;
	int num = 0;
};



int main()
{
	TaskEHSingleton::getInstance()->someMethod();
	TaskEHSingleton::getInstance()->someMethod();
	TaskEHSingleton::getInstance()->someMethod();

	TaskLHSingleton::getInstance()->someMethod();
	TaskLHSingleton::getInstance()->someMethod();
	TaskLHSingleton::getInstance()->someMethod();
    std::cout << "Hello World!\n";
}

