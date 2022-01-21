#pragma once
class IAnimal
{
public:
	virtual void eat() = 0;
	virtual void sleep() = 0;
	virtual void releaseObj() = 0;
};