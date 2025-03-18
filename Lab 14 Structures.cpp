//Program 1
#include<iostream>
#include<string>
using namespace std;
struct student
{
string firstName;
string lastName;
int rollNumber;
float marks;

void displayStudentinfo (student s1)
{

	cout<<"Full Name: "<<s1.firstName<<" "<<s1.lastName<<endl;
	cout<<"Marks: "<<s1.marks<<endl;

}

};
int main()
{
	student s1;
	s1.firstName = "Afzaal";
	s1.lastName = "Ahmed";
	s1.rollNumber = 40;
	s1.marks = 100;
	s1.displayStudentinfo(s1);
	return 0;
}

//Program 3
//#include<iostream>
//using namespace std;
//struct Student
//{
//	string first_name;
//	string last_name;
//	int roll_number;
//	float marks;
//	void displaystudentinfo()
//	{
//		cout << "Student Full Name: " << first_name << " " << last_name << endl;
//		cout << "Student Roll Number: " << roll_number;
//	}
//};
//int main()
//{
//	int number;
//	cout << "Enter Number of Students: "<<endl;
//	cin >> number;
//	Student *ptr = new Student[number];
//	for ( int x = 0 ; x < number ; x++ )
//	{
//		cout << "Enter Student " << x + 1 << " Details:"<<endl;
//		cout << "First Name: ";
//		cin >> (ptr + x)->first_name;
//		cout << "Last Name: ";
//		cin >> (ptr + x)->last_name;
//		cout << "Roll No: ";
//		cin >> (ptr + x)->roll_number;
//		cout << "Marks: ";
//		cin >> (ptr+ x)->marks;
//	}
//	for ( int x = 0 ; x < number ; x++ )
//	{
//		(ptr + x)->displaystudentinfo();
//	}
//}
//#include<iostream>
//using namespace std;
//struct Student
//{
//	string firstname;
//	string lastname;
//	int rollnumber;
//	float marks;
//	void displaystudentinfo()
//	{
//		cout << "Student Full Name: " << firstname << " " << lastname << endl;
//		cout << "Student Roll Number: " << rollnumber;
//	}
//};
//int main()
//{
//	int n;
//	cout << "Enter the Number of Student: ";
//	cin >> n;
//	Student student[n];
//	for ( int i = 0 ; i < n ; i++ )
//	{
//		cout << "Enter Student " << i + 1 << " Details:\n";
//		cout << "First Name: ";
//		cin >> student[i].firstname;
//		cout << "Last Name: ";
//		cin >> student[i].lastname;
//		cout << "Roll Number: ";
//		cin >> student[i].rollnumber;
//		cout << "Marks: ";
//		cin >> student[i].marks;
//	}
//	for ( int i = 0 ; i < n ; i++ )
//	{
//		student[i].displaystudentinfo();
//		cout << "\n----------------------------------\n";
//	}
//	return 0;














