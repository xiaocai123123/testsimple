#pragma once
//1������һ���ӿ���
class IAnimal
{
public:
	virtual void eat() = 0;
	virtual void sleep() = 0;
	virtual void releaseObj() = 0;
};

//2������һ����������
extern "C" _declspec(dllexport) IAnimal * GetCat();