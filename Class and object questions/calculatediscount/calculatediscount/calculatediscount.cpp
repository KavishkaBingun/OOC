#include<iostream>
using namespace std;
int main()
{

	float totPay, discount;

	for (int count = 1; count <= 3; count = count + 1)
	{
		cout << "Enter total payment : ";
		cin >> totPay;

		if (totPay > 10000)
		{
			discount = totPay * 25 / 100;
			cout << "Your Discount : " << discount << endl;
		}
		else
			if (totPay > 5000)
			{
				discount = totPay * 15 / 100;
				cout << "Your Discount : " << discount << endl;
			}
			else
				if (totPay > 3000)
				{
					discount = totPay * 10 / 100;
					cout << "Your Discount : " << discount << endl;
				}
		
				else
				{
					cout << "No Discounts" << endl;
				}

		
		
	}
	
	return 0;


}