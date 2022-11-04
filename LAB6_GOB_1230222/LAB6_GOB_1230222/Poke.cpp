#include "Header.h"


	int Pokemon::getNum()
	{
		return num;
	}
	String^ Pokemon::getName()
	{
		return nombre;
	}
	int Pokemon::getGen()
	{
		return gen;
	}

	void Pokemon::setNum(int _num)
	{
		this->num = _num;
	}
	void Pokemon::setName(String^ _nom)
	{
		this->nombre = _nom;
	}
	void Pokemon::setGenn(int _gen)
	{
		this->gen = _gen;
	}




