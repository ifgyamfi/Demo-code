/*A program that computes the commission earned by a sales person of a supermarket on monthly basis given that he or she is entitled to 15% of the total monthly sales. 
The program takes the total monthly sales and displays the commission earned */

#include <iostream>
using namespace std;

int main() {
	//variables
	float monthlySales = 0.0;  //monthly sales
	float commissionEarned = 0.0; //commision earned
	float commission = 0.15;  //commission

	//prompt user to enter monthly sale
	cout<<"Enter the monthly sale: ";
	cin>>monthlySales;

	//calculate commission earned
	commissionEarned = monthlySales * commission;
	cout<<"Your commission earned is "<<commissionEarned<<endl;
}

