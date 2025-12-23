#include<iostream>
using namespace std;
int main()
{
	int age;
	float income;
	cout<<"Enter your age :"<<endl;
	cin>>age;
	if(age >= 18)
	{
	cout<<"Enter your annual income :"<<endl;
	cin>>income;
	if(income >= 30000)
	{
	cout<<" Congratulations! You are eligible for a loan."<<endl;
}
    else{
    	cout<<"You meet the age requirement but are not eligible for a loan because your income is below $30,000."<<endl;
    }  
}
	else{
		cout<<"You are not eligible for a loan because you are under 18 years of age."<<endl;
	}	
	return 0;	
}