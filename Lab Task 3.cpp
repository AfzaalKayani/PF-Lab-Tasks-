//program 1
//#include<iostream>
//using namespace std;
//int main()
//{
//	int addition , subtraction , multiplication , modulus , number1 , number2;
//	float division;
//	cout<<"Enter Two Numbers: "<<endl;
//	cin>>number1>>number2;
//	addition = number1 + number2;
//	cout<<"Addition of Numbers = "<<addition<<endl;
//	subtraction = number1 + number2;
//	cout<<"Subtraction of Numbers = "<<subtraction<<endl;
//	multiplication = number1 * number2;
//	cout<<"Multiplication of Numbers = "<<multiplication<<endl;
//	division = number1 / number2;
//	cout<<"Division of Numbers = "<<division<<endl;
//	modulus = number1 % number2;
//	cout<<"Modulus of Numbers = "<<modulus<<endl;
//	return 0;
//}

//program 2
//#include<iostream>
//#include<cmath>
//#include<iomanip>
//using namespace std;
//int main()
//{
//	double height , weight , bmi;
//	cout<<"Enter Your Height In Meters:";
//	cin>>height;
//	cout<<"Enter Your Weight In Kilograms:";
//	cin>>weight;
//	bmi = weight/pow(height , 2);
//	cout<< fixed << setprecision(3)<<endl;
//	cout<<"Your BMI Is:"<<bmi<<endl;
//	return 0;
//}

//program 3
//#include<iostream>
//#include<iomanip>
//using namespace std;
//int main()
//{
//	double score1 = 85.5, score2 = 90.75, score3 = 88.25;
//	double average = (score1 + score2 + score3) / 3;
//	cout<< fixed << setprecision(2);
//	cout<<"The Average Of" <<score1<< "," <<score2<< "And" <<score3<< "is:"<<average;
//	return 0;
//}


//program 4
//#include<iostream>
//#include<cmath>
//using namespace std;
//int main()
//{
//	double x1=3.0 , y1=4.0;
//	double x2=7.0 , y2=1.0;
//	double squared_distance = pow(x2 - x1, 2) + pow(y2 - y1, 2);
//	cout<<"The Square Distance Between The Point("<<x1<<","<<y1<<") And ("<<x2<<","<<y2<<") is:"<<squared_distance; 
//}


//program 5
//#include<iostream>
//using namespace std;
//int main()
//{
//	float item1,item2,item3,item4,item5,sub_total,sales_tax,total;
//	item1=12.95;
//	item2=24.95;
//	item3=6.95;
//	item4=14.95;
//	item5=3.95;
//	cout<<"Price of Item 1:$"<<item1<<endl;
//	cout<<"Price of Item 2:$"<<item2<<endl;
//	cout<<"Price of Item 3:$"<<item3<<endl;
//	cout<<"Price of Item 4:$"<<item4<<endl;
//	cout<<"Price of Item 5:$"<<item5<<endl;
//	sub_total = item1 + item2 + item3 + item4 + item5;
//	cout<<"SubTotal:$"<<sub_total<<endl;
//	sales_tax = sub_total*0.06;
//	cout<<"Sales Tax(6%):$"<<sales_tax<<endl;
//	total=sub_total + sales_tax;
//	cout<<"Total:$"<<total;
//	return 0;
//}

//program 6
//#include<iostream>
//using namespace std;
//int main()
//{
//	int distance , fuel_efficiency , fuel_cost , total_cost;
//	cout<<"Enter Distance of Trip In Kilometers:"<<endl;
//	cin>>distance;
//	cout<<"Enter Vehicle's Fuel Efficiency (Km per Litre):"<<endl;
//	cin>>fuel_efficiency;
//	cout<<"Enter Fuel Cost Per Litre:"<<endl;
//	cin>>fuel_cost;
//	total_cost = (distance / fuel_efficiency) * fuel_cost;
//	cout<<"Total Trip Cost: Rs"<<total_cost;
//}
