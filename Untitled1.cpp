#include<iostream>
using namespace std;
class factory{
	int car_name;
	int car_model;
	int year;
	public:
	factory(){
		cout<<"enter the car name";
		cin>>car_name;
		cout<<"enter car model";
		cin>>car_model;
		cout<<"car year";
		cin>>year;
		}
		void display(){
		cout<<" name"<<car_name<<endl;
		cout<<"model"<<car_model<<endl;
		cout<<2012;
		}
};
int main(){
factory s;
s.display();
return 0;
}
