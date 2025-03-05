#include <iostream>
using namespace std;
#include "string.h"

// ex.1 Scrieti o functie care citeste un numar intreg de la utilizator si calculeaza suma si produsul cifrelor numarului

//int main()
//{
//	int a, b, s = 0, p = 1;
//	cout << "numarul intreg= "; cin >> a;
//	while (a != 0)
//	{
//		b = a % 10;
//		s = s + b;
//		p = p * b;
//		a = a / 10;
//	}
//	cout << "Suma= " << s << endl;
//	cout << "Produs= " << p;
//
//}

//ex.2 scrie un program care citeste un numar intreg pozitiv de la utilizator si afiseaza numaratoare inversa de la acel numar pana la 1 folosind interactiunea do while

//int main()
//{
//	int a, inv = 0;
//	cin >> a;
//	do {
//		inv = (inv + a % 10) * 10;
//		cout << "inv= " << inv << endl;
//		a /= 10;
//	} while (a != 0);
//	
//	inv = inv / 10;
//	cout << inv;
//}

//ex.3 scrie un program care calculeaza puterea unui numar folosind multiplicatii succesive, citid baza si exponendul de la utilizator

//int main()
//
//{
//
//    int a, b, s = 1;
//    cout << "Baza= ";     cin >> a;
//    cout << "exponentul= ";   cin >> b;
//    while (b > 0)
//    {
//        s = s * a;
//        b--;
//    }
//
//    cout << "Rezultat=" << s << endl;
//
//    return 0;
//
//}

//ex.4 sa se scrie un algoritm care calculeaza produsul a n (citit de la tastatura) numere citite de la tastatura

//int main()
//{
//	int n, i = 1;
//	do {
//		cout << "Introduceti numarul: "; cin >> n;
//		n = n * i;
//		++i;
//		cout << "Produsul= " << n << endl;
//	} while (i != 0);
//}