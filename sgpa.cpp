#include<iostream>
using namespace std;

void SGPA(int sum,int totalcredit)
{
	float sgpa=0;
	sgpa=(float)sum/totalcredit;
	cout<<"Your Semester grade point Average is "<<sgpa;
}

int subjectpointfun(char grade,int credit)
{
	int subjectpoint=0;

	if('O'==(char)toupper(grade))
		subjectpoint=10*credit;

	else if('E'==(char)toupper(grade))
		subjectpoint=9*credit;

	else if('A'==(char)toupper(grade))
		subjectpoint=8*credit;

	else if('B'==(char)toupper(grade))
		subjectpoint=7*credit;

	else if('C'==(char)toupper(grade))
		subjectpoint=6*credit;

	else if('D'==(char)toupper(grade))
		subjectpoint=5*credit;

	else if('F'==(char)toupper(grade))
		subjectpoint=2*credit;

	else
		cout<<"invalid grade\n";
	
	return subjectpoint;
}

int main()
{
	cout<<"Semester grade point Average"<<endl;
	int choice,sum=0,credit,totalcredit;
	char grade;
	int result;
	cout<<"Total credit:-";
	cin>>totalcredit;
	while(1)
	{
		cout<<"1.NEXT\n2.SGPA\n3.EXIT\n";
		cout<<"Enter your choice:-";
		cin>>choice;
		result=0;
		switch(choice)
		{
			case 1: cout<<"Enter your grade in a particular subject:-";
					cin>>grade;
					cout<<"Enter the credit of your subject:-";
					cin>>credit;
					result=subjectpointfun(grade,credit);
					sum+=result;
					cout<<sum<<endl;
					break;
			case 2:
					SGPA(sum,totalcredit);
			case 3:
				exit(0);
				break;
			default:cout<<"invalid choice\n";
			break;
		}
	}
	return 0;
}
