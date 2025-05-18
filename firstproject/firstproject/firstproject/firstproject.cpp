#include <iostream>
using namespace std;
#include <string.h>
#include <math.h>
#include <vector>
#include <set>
#include <map>
#include <numeric>
#include <algorithm>

int main()
{
	int a;
	cout << "Introduceti nota intre 0 si 10: "; cin >> a;
	try
	{
		if (a < 0 || a > 10)
		{
			throw runtime_error("Nota introdusa nu este valida\n");
		}
		else
		{
			cout << "Nota dumneavoastra este: " << a;
		}
	}
	catch (const runtime_error& e)
	{
		cout << e.what() << endl;
	}
}

