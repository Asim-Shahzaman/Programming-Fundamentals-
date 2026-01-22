#include <iostream>
using namespace std;
int main(){
	
	int age1;
	int age2;
	int age3;
	
	cout<<"Enter the age : "<<endl;
	cin>>age1;
	cout<<"Enter the age : "<<endl;
	cin>>age2;
	cout<<"Enter the age : "<<endl;
	cin>>age3;
	
	string result1= (age1<13)?"child":(age1<=19)?"teenager":"adult";
	cout<<"Age "<<age1<<" falls under the category : "<<result1<<endl;
	
	string result2= (age2<13)?"child":(age2<=19)?"teenager":"adult";
	cout<<"Age "<<age2<<" falls under the category : "<<result2<<endl;
	
	string result3= (age3<13)?"child":(age3<=19)?"teenager":"adult";
	cout<<"Age "<<age3<<" falls under the category : "<<result3<<endl;
	
	return 0;	
}
