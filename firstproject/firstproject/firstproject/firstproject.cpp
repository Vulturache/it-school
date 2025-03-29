#include <iostream>
using namespace std;
#include <string.h>
#include <math.h>
#include <vector>
#include <set>
#include <map>
#include <numeric>

// ex. 4

void swap_r(int& a, int& b)
{
	int temp = 0;
	temp = a;
	a = b;
	b = temp;

}

// ex. 5

void swap_p(int* a, int* b)
{
	int temp = 0;
	temp = *a;
	*a = *b;
	*b = temp;

}


//int main() 
//{
//
//	int a;
//	int b;
//	cout << "Primul numar= "; cin >> a;
//	cout << "Al doilea numar= "; cin >> b;
//
//	swap_r(a, b);
//	cout << "Rezultatul inversari prin referinta este= ";
//	cout << a << " ";
//	cout << b;}

//int main(){
//
//	int* a = new int;
//	int* b = new int;
//	cout << "Primul numar= "; cin >> *a;
//	cout << "Al doilea numar= "; cin >> *b;
//
//	swap_p(a, b);
//	cout << "Rezultatul inversari prin pointers este= ";
//	cout << *a << " ";
//	cout << *b;
//}

//ex. 2

struct Produs
{
	float pret;
	string produs;
	int nrdeproduse;
};

void afisareProd(const vector<Produs> v)
{
	for (auto el : v)
	{
		cout << el.produs << " " << el.pret << " " << el.nrdeproduse << " " << endl;
	}
}

int main()
{
	
	vector<Produs> v;
	int n;
	cout << "Introduceti numarul de produse in magazin= "; cin >> n;
	for (int i = 0; i < n; i++)
	{
		int temp;
		float temp2;
		string temp3;
		cout << "Introduceti numarul de produse in stoc= "; cin >> temp;
		cout << "Introduceti pretul produselor= "; cin >> temp2;
		cout << "Introduceti numele produsului= "; cin >> temp3;
		Produs p1;
		p1.nrdeproduse = temp;
		p1.pret = temp2;
		p1.produs = temp3;
		v.push_back(p1);

	}
	
	afisareProd(v);
	

}



