#include<iostream>
using namespace std;
int main()
{
	int s1,s2,s3;
	cout<<"Enter marks of three subjects :"<<endl;
	cin>>s1>>s2>>s3;
	int total = s1+s2+s3;
	float percentage = (total / 300.0) * 100;
	string grade;
	if(percentage >= 90) grade = "A";
	else if(percentage >= 80) grade = "B";
	else if(percentage >= 70) grade = "C";
	else if(percentage >= 60) grade = "D";
	else grade = "F";
	if(grade == "F")
	{
	cout<<"Total :"<<total<<endl;
	cout<<"Percentage :"<<percentage<<"%"<<endl;;
	cout<<"Grade :"<<grade<<endl;
	if (s1 >= 90 && s2 >= 90 && s3 >= 90 && total >= 270)
	{
	cout<<"Eligible for Regular Scholarship"<<endl;
    }
    else{
   	cout<<"Not Eligible for Scholarship";
	} 
	return 0; 
	}
}