//program 1
//#include<iostream>
//using namespace std;
//int main()
//{
//	int number;
//	cout<<"Enter A Number."<<endl;
//	cin>>number;
//	if(number>0)
//	cout<<"Number is positive.";
//}

//program 2
//#include<iostream>
//using namespace std;
//int main()
//{
//	int number;
//	cout<<"Enter A Number."<<endl;
//	cin>>number;
//	if(number%2==0)
//	cout<<"The Number Is Even.";
//}

//program 3
//#include<iostream>
//using namespace std;
//int main()
//{
//	int a,b,c,largest;
//	cout<<"Enter Three Numbers."<<endl;
//	cin>>a>>b>>c;
//	if(a>b && a>c)
//	largest=a;
//	if(b>a && b>c)
//	largest=b;
//	if(c>a && c>b)
//	largest=c;
//	cout<<"The Largest Number is:"<<largest;
//	
//}

//program 4
#include<iostream>
using namespace std;
int main()
{
	int marks;
	cout<<"Enter Your Marks:"<<endl;
	cin>>marks;
	if(marks > 90)
	cout<<"A+ Grade"<<endl;
	if(marks >= 80 && marks <= 89)
	cout<<"A Grade"<<endl;
	if(marks >= 70 && marks <= 79)
	cout<<"B Grade"<<endl;
	if(marks >= 60 && marks <= 69)
	cout<<"C Grade"<<endl;
	if(marks < 60)
	cout<<"Fail";
}


//program 5
//#include<iostream>
//using namespace std;
//int main()
//{
//	char signal;
//	cout<<"Enter the Color of Signal R (RED) , G (GREEN) & Y(YELLOW)"<<endl;
//	cin>>signal;
//	if(signal == 'R')
//	cout<<"Red: Stop"<<endl;
//	if(signal == 'G')
//	cout<<"Green: Go"<<endl;
//	if(signal == 'Y')
//	cout<<"Yellow: Slow Down"<<endl;
//}

//program 7
//#include<iostream>
//using namespace std;
//int main()
//{
//	double balance;
//	double amount;
//	cout<<"Enter Your Account Balance:"<<endl;
//	cin>>balance;
//	cout<<"Enter The Amount You Want To Withdraw:"<<endl;
//	cin>>amount;
//	if(amount <= balance){
//		balance=balance-amount;
//		cout<<"Your Remaining Balance is"<<balance<<endl;
//	}else
//	cout<<"insufficient balance.";
//}

//program 8
//#include<iostream>
//using namespace std;
//int main()
//{
//	int yearsOfexperience;
//	double salary;
//	cout<<"Enter Your Years of Experience:"<<endl;
//	cin>>yearsOfexperience;
//	cout<<"Enter Your Annual Salary:"<<endl;
//	cin>>salary;
//	if(salary >= 25000){
//		cout<<"You Are Eligible For Loan."<<endl;
//	}else if(yearsOfexperience > 5 && salary > 20000){
//		cout<<"You Are Eligible For Loan."<<endl;
//	}else
//	cout<<"You Are Not Eligible For Loan.";
//}

//program 6  Employe Payroll management system
//#include<iostream>
//using namespace std;
//int main()
//{
//	int basic_salary = 0,net_salary = 0,gross_salary = 0;
//	char grade;
//	int yearofservice,bonus= 0,tax= 0;
//	cout<<" Enter Employee Grade (i.e. A,B,C): ";
//	cin>>grade;
//	cout<<" Enter the Years of Services: ";
//	cin>>yearofservice;
//	
//	if(grade == 'A')
//	{
//		basic_salary = 50000;
//	}
//	if(grade == 'B')
//	{
//		basic_salary = 30000;
//	}
//	if(grade == 'C')
//	{
//		basic_salary = 20000;
//	}
//	
//	
//	if(yearofservice >= 10)
//	{
//		bonus = basic_salary * 0.10;
//    }
//    if(yearofservice >=5 && yearofservice<=9)
//    {
//    	bonus = basic_salary * 0.05;
//	}
//	if(yearofservice<5)
//	{
//		bonus = 0;
//	}
//	gross_salary = basic_salary + bonus;
//	
//	if(gross_salary > 40000)
//	{
//		tax = gross_salary * 0.2;
//	}
//	if(gross_salary >= 30000 && gross_salary <= 40000)
//	{
//		tax = gross_salary * 0.1;
//	}
//	if(gross_salary < 30000)
//	{
//		tax = 0;
//	}
//	 net_salary = gross_salary - tax;
//	 
//	 cout<<"Basic Salary: "<<basic_salary;
//	 cout<<"\nBonus added to the Salary: "<<bonus;
//	 cout<<"\nGross Salary: "<<gross_salary;
//	 cout<<"\nTax: "<<tax;
//	 cout<<"\n Your Total Monthly Salary: "<<net_salary;
//		return 0;
//}
