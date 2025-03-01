#include <iostream>
using namespace std;
#include "string.h"

//problema 2 barista robot

//int main()
//{
//
//	string s1 = "Cafea";
//	string s2 = "Ceai";
//	string s3 = "Suc";
//	string s4;
//	string s5;
//	cout << s1 << endl;
//	cout << s2 << endl;
//	cout << s3 << endl;
//	cout << "Scrieti bautura dorita: "; cin >> s4;
//
//	if (s4 == s1)
//	{
//		cout << "Doriti si tort?" << endl;
//		cin >> s5; cout << (s5 == "Da" ? "Va aducem imd" : "Poftim Cafeaua") << endl;
//	}
//	else if (s4 == s2)
//	{
//		cout << "Doriti si biscuiti?" << endl;
//		cin >> s5; cout << (s5 == "Da" ? "Va aducem imd" : "Poftim Ceaiul") << endl;
//	}
//	else if (s4 == s3)
//	{
//		cout << "Doriti si un corn?" << endl;
//		cin >> s5; cout << (s5 == "Da" ? "Va aducem imd" : "Poftim Sucul") << endl;
//	}
//	else
//	{
//		cout << "Nu avem produsul dorit" << endl;
//	}
// return 0;
//}

// ex.1 switch operator

//int main()
//{
//	int a, b;
//	cout << "Primul Numar: "; cin >> a;
//	cout << "Al doilea numar: "; cin >> b;
//
//	string s1 = "+";
//	string s2 = "-";
//	string s3 = "*";
//	string s4 = "/";
//	char c;
//	cout << "Introduceti operatiunea dorita(+,-,*,/): "; cin >> c;
//	switch (c)
//	{
//	case '+':
//		cout << "Rezultatul adunari este: " << a + b << endl;
//		break;
//	case '-':
//		cout << "Rezultatul scaderi este: " << a - b << endl;
//		break;
//	case '*':
//		cout << "Rezultatul inmultiri este: " << a * b << endl;
//		break;
//	case '/':
//		cout << "Rezultatul impartiri este: " << a / b << endl;
//		break;
//	default:
//		cout << "Eroare: Operatiune Invalida" << endl;
//	}
//
//		return 0;
//}

//ex 2 Celsius in Kelvin/Fahrenheit

//int main()
//{
//	float f, k, c;
//	char a;
//	cout << "Temperatura in Celsius: "; cin >> c;
//	cout << "Alege temperatura dorita F(Fahrenheit) or K(Kelvin): "; cin >> a;
//	f = c * 9 / 5 + 32;
//	k = c + 273.15;
//	switch (a)
//	{
//	case 'F':
//		cout << "Temperatura in Fahrenheit: " << f;
//		break;
//	case 'K':
//		cout << "Temperatura in Kelvin: " << k;
//		break;
//	default:
//		cout << "error" << endl;
//
//	}
//}