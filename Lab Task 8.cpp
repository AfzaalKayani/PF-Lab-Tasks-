//program 1
//#include<iostream>
//using namespace std;
//int main()
//{
//	char op;
//	int num1,num2;
//	cout<<"Enter two numbers to Perform operation:";
//	cin>>num1>>num2;
//	cout<<">..Calculator..<\n";
//	cout<<"Enter Operator:";
//	cin>>op;
//	switch(op){
//	case '+' :
//		cout<<"Addition:"<< num1+num2 ;break;
//	case '-' :
//		cout<<"Substraction:"<< num1-num2 ;break;
//	case '*' :
//		cout<<"Multiplication:"<< num1*num2 ;break;
//	case '/' :
//		cout<<"Division:"<< num1/num2 ;break;
//	case '%' :
//		cout<<"Remaider:"<< num1%num2 ;break;
//	default:
//		cout<<"You entered an invalid operator";
//	}
//	return 0;
//}



//program 2
//#include<iostream>
//using namespace std;
//int main()
//{
//	int day;
//	cout<<"Enter the day (1-7)e.g.(1.Monday) :";
//	cin>>day;
//	switch(day){
//		case 1:
//			cout<<"Monday";break;
//		case 2:
//			cout<<"Tuesday";break;
//		case 3:
//			cout<<"Wednesday";break;
//		case 4:
//			cout<<"Thursday";break;
//		case 5:
//			cout<<"Friday";break;
//		case 6:
//		cout<<"Saturday";break;
//		case 7:
//		cout<<"Sunday";break;
//		default:
//		cout<<"Error you entered incorrect number.";
//	}
//	return 0;
//}



//program 3
//#include<iostream>
//using namespace std;
//int main()
//{
//	int shape;
//	double area;
//	cout<<"Enter the shape you want to calculate area(e.g.1,2,3)\n 1.Circle\n 2.Rectangle\n 3.Triangle\n";
//	cin>>shape;
//	switch(shape)
//	{
//		case 1:
//		double radius;
//		cout<<"Enter the radius of the Circle: ";
//		cin>>radius;
//		area=3.14*(radius*radius); 
//		cout<<"Area of the Circle: "<<area<<endl;break;
//		case 2:
//		double length,width;
//		cout<<"Enter the Length of Rectangle: ";   cin>>length;
//		cout<<"Enter the Width of Rectangle: ";   cin>>width;
//		area=length*width;
//		cout<<"Area of Rectangle: "<<area<<endl;break;
//		case 3:
//		double base,height;
//		cout<<"Enter the base of Triangle: ";
//		cin>>base;
//		cout<<"Enter the height of Triangle: ";
//		cin>>height;
//		area=0.5*base*height;
//		cout<<"Area of Triangle: "<<area<<endl;break;
//		default:
//			cout<<"Error! Only select the option from choice."<<endl;
//	}
//	return 0;
//}




//program 4
//#include<iostream>
//using namespace std;
//
//int main()
//{ int amount,currency,usd=1,pkr,inr,euro;
//cout<<"......Welcome to my Currency Calculator......\n";
//cout<<"Enter the Amount you want to convert (in USD): $";
//cin>>amount;
//cout<<"Enter the currency you want to convert\n 1.PKR\n 2.INR\n 3.EURO\n";
//cin>>currency;
//switch(int(currency))
//{	case 1 :
//		pkr = amount * 277;
//		cout<<"YOUR AMOUNT IN PKR:"<< pkr <<"PKR";break;
//	case 2 :
//		inr = amount * 85;
//		cout<<"YOUR AMOUNT IN INR:"<< inr <<"INR";break;
//	case 3 :
//		euro = amount * 0.95;
//		cout<<"YOUR AMOUNT IN EURO:"<< euro <<"EURO";break;
//	default :
//		cout<<Error;
//		}
//return 0;
//	
//}

#include<iostream>
using namespace std;
int main()
{
	int category,item,quantity ;
	double price = 0,total = 0,discount = 0, grandtotal ;
	cout << "-----Welcome to the Shopping System-----\n";
	cout << "Select Category(i.e. 1/2/3): \n" ;
	cout << "1. Electronics \n2. Clothing \n3. Groceries\n" ;
	cin >> category ;
	 switch ( category )
	 {
	 	case 1 :
	 		cout << "You selected Electronics.\n";
	 		cout << "Select Item: \n" ;
	 		cout << "1. Laptop (1000$)\n2. Smartphone (700$)\n3. Headphone (150$)\n" ;
	 		cin >> item ;
	 		switch ( item )
	 		{
	 			case 1 :   price = 1000 ; break ;
	 			case 2 :   price = 700 ; break ;
	 			case 3 :   price = 150 ; break ;
	 			default :  cout << "Invalid Item.\n" ;
			 }
			 break;
		case 2 :
	 		cout << "You selected Clothing.\n";
	 		cout << "Select Item: \n" ;
	 		cout << "1. Jacket ($120)\n2. T-Shirts ($40)\n3. Jeans ($60)\n" ;
	 		cin >> item ;
	 		switch ( item )
	 		{
	 			case 1 :   price = 120 ; break ;
	 			case 2 :   price = 40 ; break ;
	 			case 3 :   price = 60 ; break ;
	 			default :  cout << "Invalid Item.\n" ;
			 }
			 break;
		case 3 :
	 		cout << "You selected Groceries.\n";
	 		cout << "Select Item: \n" ;
	 		cout << "1. Milk (1 Liter - $2)\n2. Bread (1 Loaf - $3)\n3. Eggs (1 Dozen - $5)\n" ;
	 		cin >> item ;
	 		switch ( item )
	 		{
	 			case 1 :   price = 2 ; break ;
	 			case 2 :   price = 3 ; break ;
	 			case 3 :   price = 5 ; break ;
	 			default :  cout << "Invalid Item.\n" ;
			 }
			 break;
			 default:
			cout << "Invalid Caregory.\n";
	 }
	 cout << "Enter Quantity: ";
	 cin >>  quantity ;
	 total = quantity * price ;
	 if ( total > 500 )
	 {
	 	discount = total * 0.2 ;
	 }
	 else if ( total >= 100 && total <=500)
	 {
	 	discount = total * 0.1 ;
	 }
	 else
	 { 
	 	discount = 0 ;
	 }
	 grandtotal = total - discount ;
	 cout << "Bill Invoice : \n";
	 cout << "Total : $" << total << endl ;
	 cout << "Discount : $" << discount << endl ;
	 cout << "Grand Total : $" << grandtotal << endl ;
	 cout << "Thank you for Shopping here!\n" << endl ;
	 return 0;
}








