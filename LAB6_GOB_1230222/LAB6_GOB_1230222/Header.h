#pragma once
using namespace System;

ref class Pokemon
{
private:
	int num;
	String^ nombre;
	int gen;

public:
	int getNum();
	String^ getName();
	int getGen();

	Void setNum(int _num);
	Void setName(String^ _nom);
	Void setGenn(int _gen);

};