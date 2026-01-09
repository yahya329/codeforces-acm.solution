
/*
this acm.fcis <2023> level 1 quistions
you can find their CodeForce account on this repo :)
*/

#include<iostream>

using namespace std;

void WaterMelon()
{
	int w;
	cin >> w;


	if (w>2 && w % 2 == 0)
		cout << "YES";
	else
		cout << "NO";
}

void MoneyMoneyMoney()
{
	long long n, x, y;

	cin >> n >> x >> y;
	
	cout << n * (y - x);
}

int main()
{
	//WaterMelon();
	//MoneyMoneyMoney();

}

