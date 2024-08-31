/*
Title: Chapter 2 Exercise 18
Programmer: Katlyn Winkelhake
File Name: Chapter2Ex18_Katlyn_Winkelhake
Date: Aug 21 2024
Requirements:
A soft drink company recently surveyed 16,500 of its customers and found that approximately 15 percent of those surveyed purchase one or more energy drinks per week. Of those customers who purchase energy drinks, approximately 58 percent of them prefer citrus-flavored energy drinks. Write a program that displays the following:

• The approximate number of customers in the survey who purchase one or more energy drinks per week.

• The approximate number of customers in the survey who prefer citrus-flavored energy drinks.

Once you have coded this and placed in your main branch in GitHub, create a second branch that revises your code so

that the user can enter the number of the number of customers that were surveyed
*/

#include <iostream>
using namespace std;

int main()
{

	double customers;
	cout << "Enter amount of surveyed customers: " << endl;
	cin >> customers;
	double purchaseDrinks = customers * .15;

	double citrusFlavor = purchaseDrinks * .58;

	cout << " The approximate number of customers in the survey who purchase one or more energy drinks per week is " << purchaseDrinks << endl;
	cout << "The approximate number of customers in the survey who prefer citrus-flavored energy drinks is " << citrusFlavor << endl;



	return 0;
}