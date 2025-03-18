//#include<iostream>
//#include<cmath>
//using namespace std;
//int main()
//{
//	double num;
//	cout<<"Enter a Number \n";
//	cin>>num;
//	cout<<"Square Root of a Number "<<sqrt(num)<<endl;
//	cout<<"Absolute of a Number "<<fabs(num)<<endl;
//	cout<<"Sine of a Number "<<sin(num)<<endl;
//	cout<<"Cos of a Number "<<cos(num)<<endl;
//	cout<<"Power Of a Number "<<pow(num,3);
//}

//program 2

//#include<iostream>
//using namespace std;
//void wellcomeNote()
//{
//	cout<<"Hello! Wellcome to C++ Functions!\n";
//}
//int main()
//{
//    wellcomeNote();
//    return 0;
//}

//program 3

//#include<iostream>
//using namespace std;
//void checkEvenOdd(int num){
//if(num%2==0){
//	cout<<"Even Number.\n";
//}else{
//    cout<<"Odd Number.\n";
//	}
//}
//int main()
//{
//	int num;
//	cout<<"Enter a Number.\n";
//	cin>>num;
//	checkEvenOdd(num);
//	return 0;
//}



//#include<iostream>
//using namespace std;
//double factorial(int n)
//{
//	int factorial = 1;
//	for(int i=1; i<=n; i++){
//	factorial = factorial * i;
//	}
//	return factorial;
//}
//int main()
//{
//	int num;
//	cout<<"Enter a Number \n";
//	cin>>num;
//	if(num<0){
//		cout<<"Factorial of Negative Number is Not Possible \n";
//	}else
//	cout<<"Factorial of "<<num<<" is "<<factorial(num)<<endl;
//	return 0;
//}

#include<iostream>
using namespace std;
int sum(int x, int y){
	return  x+y;
}
int subtract(int x, int y){
	return  x-y;
}
int multiply(int x, int y){
	return  x*y;
}
int divide(int x, int y){
	return  x/y;
}
int main()
{
	int choice,num1,num2,result;
	do{
		cout<<"Menu Driven Calculator"<<endl;
		cout<<" 1.Addition\n 2.Subtraction\n 3.Multiplication\n 4.Division\n 5.Exit\n ";
		cout<<"Enter Your Choice \n";
		cin>>choice;
		if(choice == 5){
			cout<<"Exiting The Program. \n";
			break;
		}
		cout<<"Enter First Number \n";
		cin>>num1;
		cout<<"Enter Second Number \n";
		cin>>num2;
		switch(choice){
			case 1:
				result = sum(num1, num2);
				cout<<"Result "<<result<<endl;
				break;
			case 2:
				result = subtract(num1, num2);
				cout<<"result "<<result<<endl;
				break;
			case 3:
				result = multiply(num1, num2);
				cout<<"Result "<<result<<endl;
				break;
			case 4:
				result = divide(num1, num2);
				cout<<"Result "<<result<<endl;
				break;
			default:
				cout<<"Invalid Choice "<<endl;
				break;
		}
	}while(true);
	return 0;
}

//Menu Driven Program_Restraunt Bill
//#include<iostream>6

//#include<iomanip>
//using namespace std;
//void displayMenu(){
//	cout<<"----Restraunt Menu---- \n";
//	cout<<"1.Burger \t $5.00 \n";
//	cout<<"2.Pizza \t $8.00 \n";
//	cout<<"3.Pasta \t $7.00 \n";
//	cout<<"4.Salad \t $4.00 \n";
//	cout<<"0.Exit \n";
//	cout<<"-------------------------- \n";
//}
//double itemCost(double price, int quantity){
//	return price*quantity;
//}
//double finalbill(double total){
//	double tax = total*0.10;
//	return total+tax;
//}
//int main()
//{
//	int choice, quantity;
//	double totalBill = 0.0;
//	double finalAmount;
//	double price = 0.0;
//	do{
//		displayMenu();
//		cout<<"Enter item Number to Order(0 to exit) \n";
//		cin>>choice;
//		if(choice == 0){
//		break;
//		}
//		cout<<"Entr Quantity: "<<endl;
//		cin>>quantity;
//		switch(choice){
//			case 1:
//				price = 5.00;
//				break;
//			case 2:
//				price = 8.00;
//				break;
//			case 3:
//				price = 7.00;
//				break;
//			case 4:
//				price = 4.00;
//				break;
//			default:
//				cout<<"Invalid Choice. Try Again \n";
//				break;
//		}
//		cout<<"Item Added to the Bill \n";
//		totalBill = itemCost(price, quantity);
//		cout<<"Total: "<<totalBill<<endl;
//	}while(false);
//	finalAmount = finalbill(totalBill);
//	cout<<"Final Bill Including 10% tax: $"<<finalAmount<<endl;
//	cout<<"Thank You For Dining With Us!";
//}






















