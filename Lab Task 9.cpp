//Program 1
//#include<iostream>
//using namespace std;
//int main()
//{
//	int num = 1;
//	int N;
//	cout<<"Enter a Number \n";
//	cin>>N;
//	while(num <= N)
//	{
//		cout<<num<<endl;
//		num++;
//	}
//}

//Program 2
//#include<iostream>
//using namespace std;
//int main()
//{
//	int i=1;
//	int N;
//	cout<<"Enter a Number of the Table \n";
//	cin>>N;
//	while(i <= 10)
//	{
//		cout<<N<<" x "<<i<<" = "<<N*i<<endl;
//		i++;
//	}
//}

//Program 3
//#include<iostream>
//using namespace std;
//int main()
//{
//	int num;
//	cout<<"Enter a Positive Number \n";
//	cin>>num;
//	while(num <= 0)
//	{
//		cout<<"Error: You Entered Negative Number plz Enter a Positive Number \n";
//		cin>>num;
//	}
//	cout<<"You Entered: "<<num<<endl;
//}

//Program 4
//#include<iostream>
//using namespace std;
//int main()
//{
//	int sum = 0;
//	int num = 1;
//	while(num <= 5)
//	{
//		sum += num;
//		num++;
//	}
//	cout<<"Sum of first 5 Natural numbers : "<<sum<<endl;
//}


//Program 5
//#include<iostream>
//using namespace std;
//int main()
//{
//	double balance = 1000.0;
//	int choice = 0;
//	double amount;
//	while(choice!=4){
//		cout<<"Menu:"<<endl;
//		cout<<"1.Deposit Money"<<endl;
//		cout<<"2.Withdraw Money"<<endl;
//		cout<<"3.Check Balance"<<endl;
//		cout<<"4.Exit"<<endl;
//		cout<<"Enter Your Choice"<<endl;
//		cin>>choice;
//		if(choice == 1){
//			cout<<"Enter the Amount to Deposit:"<<endl;
//			cin>>amount;
//			balance = balance + amount;
//			cout<<"Your Current Balance is: $"<<balance<<endl;
//			
//		}else if(choice == 2){
//			cout<<"Enter The Amount You Want to Withdraw:"<<endl;
//			cin>>amount;
//			balance = balance - amount;
//			if(amount>balance){
//				cout<<"insufficient Balance"<<endl;
//			}
//			cout<<"Your Current Balance is: $"<<balance<<endl;
//		}else if(choice == 3){
//			cout<<"Your Current Balance is: $"<<balance<<endl;
//		}else if(choice ==4)
//			cout<<"Exiting The Program. Thank You For Using the Service"<<endl;
//			return 0;
//		
//		}
//	}
//
//#include<iostream>
//using namespace std;
//int main(){
//	
//	int password;
//	int actualpassword=12345;
//	do{
//		cout<<"enter password:";
//		cin>>password;
//	}
//	while(password!=actualpassword);
//	
//}

#include<iostream>
using namespace std;
int main()
{
	int submenu,total,noofquantity,subtotal=0;
	char mainmenu;
	cout<<"\t\tb.Breakfast\tl.Lunch\td.Dinner\n";
	cin>>mainmenu;
	if(mainmenu=='b'){do{

		cout<<"\n1.Anda paratha(40)\t2.Nan channy(60)\t3.Siri Paye(150)\t4.Tea(15)\n";
		cin>>submenu;
		if(submenu==1){
			cout<<"no of quantity:";
			cin>>noofquantity;
			total=40*noofquantity;
		}else if(submenu==2){
			cout<<"no of quantity:";
			cin>>noofquantity;
			total=60*noofquantity;
		}else if(submenu==3){
			cout<<"no of quantity:";
			cin>>noofquantity;
			total=150*noofquantity;
		}else if(submenu==4){
			cout<<"no of quantity:";
			cin>>noofquantity;
			total=15*noofquantity;
		}else{
			cout<<"the program is terminated\n";
			total=0;}
		subtotal=total+subtotal;
		cout<<subtotal;	
		}while(submenu!=0);
		}
		else if(mainmenu=='l'){do{
		cout<<"\n1.Chicken karahi(1050)\t2.Mutton Karahi(1800)\t3.Egg Fried Rice(450)\t4.BBQ(1050)\n";
		cin>>submenu;
		if(submenu==1){
			cout<<"no of quantity:";
			cin>>noofquantity;
			total=1050*noofquantity;
		}else if(submenu==2){
			cout<<"no of quantity:";
			cin>>noofquantity;
			total=1800*noofquantity;
		}else if(submenu==3){
			cout<<"no of quantity:";
			cin>>noofquantity;
			total=450*noofquantity;
		}else if(submenu==4){
			cout<<"no of quantity:";
			cin>>noofquantity;
			total=1050*noofquantity;
		}else{
			cout<<"the program is terminated\n";
			total=0;
		}
		subtotal=total+subtotal;
		cout<<subtotal;	
		}while(submenu!=0);
	}else if(mainmenu=='d'){do{
		cout<<"\n1.Chicken karahi(1050)\t2.Mutton Karahi(1800)\t3.Egg Fried Rice(450)\t4.BBQ(1050)\n5.Saji(800)\n";
		cin>>submenu;
		if(submenu==1){
			cout<<"no of quantity:";
			cin>>noofquantity;
			total=1050*noofquantity;
		}else if(submenu==2){
			cout<<"no of quantity:";
			cin>>noofquantity;
			total=1800*noofquantity;
		}else if(submenu==3){
			cout<<"no of quantity:";
			cin>>noofquantity;
			total=450*noofquantity;
		}else if(submenu==4){
			cout<<"no of quantity:";
			cin>>noofquantity;
			total=1050*noofquantity;
		}else if(submenu==5){
			cout<<"no of quantity:";
			cin>>noofquantity;
			total=800*noofquantity;
		}else{
			cout<<"the program is terminated\n";
			total=0;
		}
		subtotal=total+subtotal;
		cout<<"subtotal"<<subtotal;	
	}while(submenu!=0);
	}
	
	

}



























































