#pragma once
//1、创建一个接口类
class IAnimal
{
public:
	virtual void eat() = 0;
	virtual void sleep() = 0;
	virtual void releaseObj() = 0;
};

//2、创建一个导出函数
extern "C" _declspec(dllexport) IAnimal * GetCat();