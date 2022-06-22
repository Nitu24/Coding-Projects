#include<iostream>
#include<windows.h>
using namespace std;
template<class a,class b>//->this is placeholder
double add(a first , b second){
	return first+second;
}
template<class a,class b>
double sub(a first , b second){
	return first-second;
}
template<class a,class b>
double mul(a first , b second){
	return first*second;
}
template<class a,class b>
double div(a first , b second){
	return first/second;
}
int main()
{
	double a,b;
	char op,c;
	system("color E4");
	label:
	cout<<"\t\t\tSimple calculator for Addition,Subtraction,Multiplication and Division\n"<<endl;
	cout<<"Enter The Value Of First Number"<<endl;
	cin>>a;
	cout<<"Enter The Operator +,-,*,/"<<endl;
	cin>>op;
	cout<<"Enter The Value Of Second Number"<<endl;
	cin>>b;
	switch(op)
	{
	case '+':
		
		system ("color A4");
		cout<<"Addition Of Two Digit Is "<<add(a,b)<<endl;
		
		cout<<"Do you want to continue (y/n)"<<endl;
		cin>>c;
		if(c=='y'|| c=='Y'){
				system("cls");
	
		goto label;
		}
		break;
	case '-':
		
		system("color B1");
		cout<<"Subtraction Of Two Digit Is "<<sub(a,b)<<endl;
		cout<<"Do you want to continue (y/n)"<<endl;
		cin>>c;
		if(c=='y'|| c== 'Y'){
				system("cls");
	
		goto label;
		}
		break;
	case '*':
		
			system ("color 90");
		cout<<"Multiplication Of Two Digit Is "<<mul(a,b)<<endl;
		cout<<"Do you want to continue (y/n)"<<endl;
		cin>>c;
		if(c=='y' || c=='Y'){
				system("cls");
	
		goto label;
		}
		break;
	case '/':
			
				system("color F2");
		cout<<"Division Of Two Digit Is "<<div(a,b)<<endl;
		cout<<"Do you want to continue (y/n)"<<endl;
		cin>>c;
		if(c=='y'){
	system("cls");
		goto label;
		}
		break;
	default :
		cout<<"Enter Valid Operator"<<endl;
		goto label;
		
	}
		
return 0;
}
