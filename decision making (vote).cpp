#include<iostream>
using namespace std;
int main()
{
	int age;
	int choice;
	cout<< "please enter your age \n";
	cin>> age;
	if (age<=17)
	{
		cout<< "you are not eligible for voting. minimum age for voting is 18";
	}
	else
	{
		cout<< "you are eligible to get a voter id card \n kindly select any one of the following documents in order to register\n 1. Aadhar card \n 2. Passport\n 3. Domicile certificate \n";
		cout<< "please enter your choice: ";
		cin>> choice;
		switch (choice)
		{
			case 1: cout<< "\nyou chose aadhar card... please upload scanned copy of your aadhar card not exceeding 500 kb";
			          break;
			case 2: cout<< "\nyou chose passport... please upload scanned copy of your passport not exceeding 500 kb";
			          break;
			case 3: cout<< "\nyou chose domicile certificate... please upload scanned copy of your domicile certificate not exceeding 500 kb";
			          break;
			default: cout<< "\nplease chose a number amongst the 3 given options only";			
		}
	}
    return 0;
}
