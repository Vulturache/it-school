#include <iostream>
using namespace std;
#include <string.h>
#include <math.h>
#include <vector>
#include <set>
#include <map>
#include <numeric>

void afisare(vector<int>& v) {

	for (int el : v) {
		cout << el << " ";
	}
	cout << endl;
}

//ex.7

//int main() 
//{
//	vector<int> v = { 2,4,6,8,10 };
//
//	int suma = accumulate(v.begin(), v.end(), 0);
//	cout << "Suma numerelor este= " << suma;
//	
//	//int suma = 0;
//	//for (vector<int>::iterator i = v.begin(); i != v.end(); i++)
//	//{
//	//	suma = suma + *i;
//	//}
//	//cout << "Suma numerelor este= " << suma;
//	
//
//	
//
//}


//ex.8

//int main() 
//{
//	vector<int> v = { 1,2,3,4,5 };
//
//	for (auto i = v.rbegin(); i != v.rend(); i++)
//	{
//		cout << " " << *i;
//	}
//	
//
//}

//ex.9

//int main()
//{
//	vector<int> v = { 1,2,2,3,4,4,5 };
//	afisare(v);
//	v.erase(v.begin() + 1);
//	v.erase(v.begin() + 4);
//	afisare(v);
//
//
//
//}
