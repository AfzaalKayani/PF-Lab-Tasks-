//1 Positive or Negative Number
//#include<iostream>
//using namespace std;
//int main()
//{
//	int num;
//	cout<<"Enter A Number: "<<endl;
//	cin>>num;
//	if(num > 0){
//		cout<<"Positive Number"<<endl;
//	}else if(num<0){
//		cout<<"Negative Number"<<endl;
//	}else
//	cout<<"Zero";
//	return 0;
//}

//2 Temperature
//#include<iostream>
//using namespace std;
//int main()
//{
//	int temperature;
//	cout<<"Enter Temperature in Celsius"<<endl;
//	cin>>temperature;
//	if(temperature >= 40){
//		cout<<"Stay at Home Because it's Extremely Hot "<<endl;
//	}else if(temperature>=30 && temperature<=39){
//		cout<<"Drink Plenty of Water To Stay Hydrated"<<endl;
//	}else if(temperature>=20 && temperature<=29){
//		cout<<"Weather is Pleasent & Suitable for Outdoor Activities"<<endl;
//	}else{
//		cout<<"Wearing Warm Clothes to Stay Comfortable"<<endl;
//	}
//	return 0;
//}

//3 login system
//#include<iostream>
//using namespace std;
//int main()
//{
//	string username;
//	string password;
//	cout<<"Enter User Name:"<<endl;
//	cin>>username;
//	cout<<"Enter Password:"<<endl;
//	cin>>password;
//	if(username == "admin" && password == "12345"){
//		cout<<"Access Granted"<<endl;
//	}else if(username == "admin"){
//		cout<<"Wrong Password"<<endl;
//	}else
//	cout<<"User Not Found"<<endl;
//	return 0;
//	
//}

//program 6 role based system
//#include<iostream>
//using namespace std;
//int main()
//{
//	string role;
//	string password;
//	string username;
//	cout<<"Enter Your Username: "<<endl;
//	cin>>username;
//	cout<<"Enter Your Password: "<<endl;
//	cin>>password;
//	if(username == "admin" && password == "password123"){
//	cout<<"Authentication Successfull. "<<endl;
//	}else
//	cout<<"Authentication Failed.Access Denied. "<<endl;
//	cout<<"Enter Your Role: "<<endl;
//	cin>>role;
//	if(role == "admin"){
//	cout<<"Full Access "<<endl;
//	}else if(role == "guest"){
//	cout<<"Limited Access "<<endl;
//    }else
//    	cout<<"No Access.";
//
//}

//program 5 Loan Eligibility....
#include<iostream>
using namespace std;
int main()
{
	int age ;
	double income;
	cout<<"Enter Your Age. "<<endl;
	cin>>age;
	cout<<"Enter Your Income. "<<endl;
	cin>>income;
	if(age >= 18){
		if(income >= 30000){
			cout<<"Congratulations You Are Eligible For Loan."<<endl;
		}else
		cout<<"You Meet The Age Requirements But Not Eligible Because Your Income is Below $30000."<<endl;
	}else
	cout<<"You Are Not Eligible BEcause You Are Under 18. "<<endl;
}


//program 4 University......
//#include<iostream>
//using namespace std;
//int main()
//{
//	int subject1,subject2,subject3,obtainedmarks,totalmarks=300;
//	float percentage;
//	char grade;
//	cout<<"Welcome to University Exam Result System and ScholarShip Eligiblity\n";
//	cout<<"Enter Marks of three Subject: ";cin>>subject1>>subject2>>subject3;
//	obtainedmarks=subject1+subject2+subject3;
//	percentage=obtainedmarks*100/totalmarks;
//	if(percentage>=90){
//	grade='A';}
//	else if(percentage>=80 && percentage<=89){
//	grade='B';}
//	else if(percentage>=70 && percentage<=79){
//	grade='C';}
//	else if(percentage>=60 && percentage<=69){
//	grade='D';}
//	else{
//	grade='F';}
//	cout<<"Total Marks:\t"<<totalmarks<<"\nObtained Marks:\t"<<obtainedmarks<<"\nPercentage:\t"<<percentage<<"\nGrade:\t\t"<<grade<<"\n";
//	if(grade=='F')
//	{
//		cout<<"Failed";
//		return 0;
//	}
//	if( grade=='A'  && obtainedmarks>=270 )
//	{
//		cout<<"Congratulations!You are eligible for a merit scolarship.";
//	}
//	else if ( grade=='B' && (obtainedmarks>=240 && obtainedmarks<=269))
//	{
//		cout<<"Congratulations!You are eligible for a regular scholarship.";
//	}
//	else
//	{
//		cout<<"You are not eligible for the scholarship.Improve and Better luck next time.";
//	}
//return 0;	
//}

