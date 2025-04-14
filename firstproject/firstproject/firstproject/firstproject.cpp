#include <iostream>
using namespace std;
#include <string.h>
#include <math.h>
#include <vector>
#include <set>
#include <map>
#include <numeric>
#include <algorithm>

//Creează o clasă Rectangle care să aibă următoarele atribute :
//length(float),
//width(float).
//
//Implementează :
//	Constructor implicit care setează lungimea și lățimea la 0.
//	Constructor parametrizat care primește lungimea și lățimea ca parametri.
//	Destructor care va afișa un mesaj când obiectul este distrus.
//	Metodă area() care returnează aria dreptunghiului(length * width).
//	Metodă perimeter() care returnează perimetrul dreptunghiului(2 * (length + width)).

class Rectangle
{

private:
	float* lenght = new float;
	float* width = new float;
public:
	Rectangle()
	{
		*lenght = 0;
		*width = 0;
	}
	Rectangle(float l, float w)
	{
	
		*lenght = l;
		*width = w;

	}
	float area()
	{
		float a = 0;
		a = *lenght * *width;
		cout << a << endl;
		return a;
	}
	float perimeter()
	{
		float p;
		p = (2 * (*lenght + *width));
		cout << p << endl;
		return p;
	}
	~Rectangle()
	{
		delete lenght, width;
		cout << "Obiectul a fost distrus" << endl;
	}
};

typedef Rectangle R;

int main() 
{
	R n;
	n.area();
	n.perimeter();
	R n1(2.1, 2.2);
	n1.area();
	n1.perimeter();




}