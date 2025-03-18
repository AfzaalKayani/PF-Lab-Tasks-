//PROGRAM 1

//#include<iostream>
//using namespace std;
//int main()
//{
//	int a = 10;
//	int *ptr;
//	ptr = &a;
//	cout<<*ptr<<endl;
//}

//PROGRAM 2

//#include<iostream>
//using namespace std;
//int main()
//{
//	int x = 15;
//	int *ptr;
//	ptr = &x;
//    cout<<"Initial value of the variable x is: "<<x<<endl;
//	*ptr = 23;
//	cout<<"Modified value of Variable x is:  "<<x<<endl;	
//}
//Program 3
//#include<iostream>
//using namespace std;
//int main()
//{
// int marks[3],*ptr;
// int i;
// cout<<"Enter 3 integers"<<endl;
// for(i=0; i<3; i++){
// 	cin>>marks[i];
// }	
// ptr = &marks[0];
// cout<<"Values in Array Are \n";
// for(i=0; i<3; i++){
// 	cout<<*ptr++<<" ";
// }
//}

//Swaping Two Numbers using Function and Pointers
#include<iostream>
using namespace std;
void swaptwonumbers(int*a, int*b){
	int c = *a;
	*a = *b;
	*b = c;
}
int main()
{
	int x, y;
	cout<<"Enter Two Numbers \n";
	cin>>x>>y;
	cout<<"Numbers Before Swaping \n"<<x<<" "<<y<<endl;
	swaptwonumbers(&x, &y);
	cout<<"Numbers After Swaping \n"<<x<<" "<<y;
}
//
//#include<iostream>
//using namespace std;
//int main()
//{
//	int *ptr = NULL;
//	if(ptr == NULL){
//		cout<<"Error \n";
//	}
//}
//program 6 Void pointers
//#include<iostream>
//using namespace std;
//int main()
//{
//	int num = 23;
//	void *ptr = &num;
//	cout<<"Value of integer Using Void Pointer: "<<*((int*)ptr)<<endl;
//}









































