#pragma once
class engine
{
	
public:
	engine(float sizeInLiters, int numberOfCylinders);

	float sizeInLiters;
	int numberOfCylinders;

	void print();
	~engine();
};

