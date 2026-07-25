#include<iostream>

using namespace std;

int fact(int n)
{
	if (n == 1 ||n==0)
		return 1;

	else
		return n* fact(n - 1);
}

int sum(int n) {
	if (n == 1)
		return 1;
	else
		return n + sum(n - 1);

}

int pow(int x, int y)
{
	if (y == 1)
		return x;
	else
		return x * pow(x,y - 1);
}

void toZero(int n) {
	if (n == 1) {
		cout << 1;
		return;
	}

	cout << n << " , ";

	toZero(n - 1);
}

int main()
{
	//cout <<fact(5);

	//cout << sum(5);

	//cout << pow(2, rand());

	toZero(5);

	return 0;
}

