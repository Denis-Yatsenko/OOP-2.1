//////////////////////////////////////////////////////////////////////////////
// Goods.cpp

#include "Goods.h"
#include <iostream>
#include <sstream>

using namespace std;

double Goods::GetFirst() const
{
	return first;
}

int Goods::GetSecond() const
{
	return second;
}

bool Goods::SetFirst(double value)
{
	if (value >= 0)
	{
		first = value;
		return true;
	}
	else
	{
		first = 0;
		return false;
	}
}

bool Goods::SetSecond(int value)
{
	if (value >= 0)
	{
		second = value;
		return true;
	}
	else
	{
		second = 0;
		return false;
	}
}

bool Goods::Init(double f, int s)
{


	if (SetFirst(f) && SetSecond(s))
	{
		return true;
	}
	else
	{
		return false;
	}
}

void Goods::Read()
{
	double f;
	int s;

	do
	{
		cout << "first  = ? "; cin >> f;
		cout << "second = ? "; cin >> s;
	} while (!Init(f, s));

}

void Goods::Display()
{
	cout << "first  = " << first << endl;
	cout << "second = " << second << endl;
}

double Goods::cost()
{
	return first * second;
}



Goods& Goods::operator --() 
{
	--first; 
	return *this; 
}
Goods& Goods::operator ++()
{
	++first; 
	return *this; 
}
Goods Goods::operator --(int) 
{
	Goods a(*this); 
	second--; 
	return a; 
}

Goods Goods::operator ++(int) 
{
	Goods a(*this); 
	second++; 
	return a; 
}

ostream& operator <<(ostream& out, const Goods& g)
{
	return out << "	First : " << g.GetFirst() << endl
		<< "	Second : " << g.GetSecond() << endl;
}

istream& operator >>(istream& in, Goods& g)
{
	double f;
	int s;
	cout << ".first = "; in >> f;
	g.SetFirst(f);
	cout << ".second = "; in >> s;
	g.SetSecond(s);
	cout << endl;
	return in;
}

Goods& Goods::operator =(const Goods& g)
{
	first = g.first; 
	second = g.second; 
	return *this; 
}


Goods::operator string() const
{
	stringstream sout;
	sout << "	First : " << GetFirst() << endl
		<< "	Second : " << GetSecond()
		;
	return sout.str();
}

string Goods::toString() const
{
	stringstream sout;
	sout << "	First : " << GetFirst() << endl
		<< "	Second : " << GetSecond()
		;
	return sout.str();
}

