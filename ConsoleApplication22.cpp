
#include "pch.h"
#include <iostream>
#include <vector>
using namespace std;
void wypisz(int a)
{
	cout << a << "\n";
}
void wypisz2(vector<int>tab)
{
	for (int i = 0; i < tab.size(); i++)
	{
		cout << tab[i] << ", ";
	}
}
bool czynalezy(vector<int>tab, int a)
{
	for (int i = 0; i < tab.size(); i++)
	{
		if (tab[i] == a)
		{
			return true;
		}
	}
	return false;
}
bool czyzawiera(vector<int>tab, vector<int>tab2)
{
	for (int i = 0; i < tab2.size(); i++)
	{
		if (!czynalezy(tab, tab2[i]))
		{
			return false;
		}
	}
	return true;
}
vector<int>unikalnosc(vector<int>tab)
{
	vector<int>unikalny;
	for (int i = 0; i < tab.size();i++)
	{
		if (!czynalezy(unikalny, tab[i]))
		{
			unikalny.push_back(tab[i]);
		}
	}
	return unikalny;
}
int max(vector<int>tab)
{
	int m = tab[0];
	for (int i = 0; i < tab.size(); i++)
	{
		if (tab[i] > m)
		{
			m = tab[i];
		}
	}
	return m;
}
int min(vector<int>tab)
{
	int m = tab[0];
	for (int i = 0; i < tab.size(); i++)
	{
		if (tab[i] < m)
		{
			m = tab[i];
		}
	}
	return m;
}
vector<vector<int>tab>czestosc(vector<int>tab)
{

	vector<vector<int>>wynik;
	vector<int>u = unikalnosc(tab);
	vector<int>c;
	int l;
	for (int i = 0; i < u.size(); i++)
	{
		l = 0;
		for (int j = 0; j < tab.size(); j++)
		{
			if (tab[j] = u[i])
			{
				licznik++;
			}
		}
		c.pushback(l);
	}
	wynik.push_back(u);
	wynik.push_back(c);
	return wynik;

}
int main()
{
	int a = 5;
	vector<int>tab = { 8,3,1,8,2,5,3,1,8 };
	vector<int>tab2 = { 1,2,3 };
	wypisz2(tab);
	cout << "\n";
	wypisz2(unikalnosc(tab));
	cout << "\n";
	cout << "Najwiekszy element wektora: "; wypisz(max(tab));
	cout << "Najmniejszy element wektora: "; wypisz(min(tab));
	wypisz2(czestosc(tab));

}
