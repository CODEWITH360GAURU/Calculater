#include <iostream>
#include <stdlib.h>
#include<conio.h>
using namespace std;
int main()
{
		float number1,number2,sum,a,answer ,choice;
	cout << "                                                             Welcome to Gaurav Calculator\n";
	cout << "Press 1 For Addition\n";
	cout << "Press 2 For Substraction\n";	
    cout << "Press 3 For Multiplication\n";
	cout << "Press 4 For Division\n";	
	cout << "Enter Your Choice:";
	
    cin >> answer;
   
	
	
	if(answer==1 ){
	
	   
	
		cout << "Enter numbers ";
		cin >> number1;
		cin  >> number2;
		
		sum=number1+number2;
		
		cout << "Your answer is " << sum << "\n";
		
		cout << "Press y For more other wise n :  ";
		
		if(choice!='y')
		  getch();
		  cout<<"\n\n\n\n\n\t\t\t\t\tThank You !!!";
		  getch();
		
	}
	
		if(answer==2){
	
	   
	
		cout << "Enter numbers ";
		cin >> number1;
		cin  >> number2;
		
		sum=number1-number2;
		
		cout << "Your answer is " << sum;
	}
	
		if(answer==3){
	
	   
	
		cout << "Enter numbers ";
		cin >> number1;
		cin  >> number2;
		
		sum=number1*number2;
		
		cout << "Your answer is " << sum;
	}
	
		if(answer==4){
	
	   
	
		cout << "Enter numbers ";
		cin >> number1;
		cin  >> number2;
		
		sum=number1/number2;
		
		cout << "Your answer is " << sum;
	}
	
}
