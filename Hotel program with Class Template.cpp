#include<iostream>
#include<windows.h>
using namespace std;
template<class hotel>//placeholder
class h{
	public:
		hotel a,b;
		char c;
		hotel getdata(){
			label:
			cout<<"\t\t\t\t\t\twelcome to our hotel"<<endl;
			cout<<"press 1 for vadapav Rs 30"<<endl;
			cout<<"press 2 for bhajipav Rs 40"<<endl;
			cout<<"press 3 for ice cream Rs 25"<<endl;
			cout<<"What you want to order"<<endl;
			cin>>a;
			if(a==1){
				cout<<"your order is vadapav"<<endl;
			}
			else if(a==2){
				cout<<"your order is Bhajipav"<<endl;
			}
			else if(a==3){
				cout<<"your order is ice cream"<<endl;
			}
			else{
				cout<<"choose your order between in 1 to 3"<<endl;
				goto label;
				system ("cls");
			}
			cout<<"how many quantity you want"<<endl;
			cin>>b;
			if(a==1){
				cout<<"your order bill is "<<b*30<<endl;
				cout<<"do you want to place another order(y/n)"<<endl;
				cin>>c;
				if(c=='y'){
				system("cls");
				goto label;
				}
			}
			else if(a==2){
				cout<<"your order bill is "<<b*40<<endl;
				cout<<"do you want to place another order(y/n)"<<endl;
				cin>>c;
				if(c=='y'){
				system("cls");
				goto label;
				}
			}
			else if(a==3){
				cout<<"your order bill is "<<b*25<<endl;
				cout<<"do you want to place another order(y/n)"<<endl;
				cin>>c;
				if(c=='y'){
				system("cls");
				goto label;
				}
			}
		
		}
};
int main(){
	h<int> ho;
	system("Color E4");
	ho.getdata(); 
	return 0;
}
