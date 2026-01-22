#include<iostream>
using namespace std;
int main(){
	
	string username, password, role;
	
	//ask user for username and password
	
	cout<<"Enter the username:";
	cin>>username;
	
	cout<< "Enter the password:";
	cin>>password;
	
	//authentication check
	
	if(username =="Admin" && password=="password 123"){
		
	cout<< "Authentication Successful!"<<endl;
	
	//ask for role only if authenticated 
	
	cout<<"Enter your (Admin /Guest /other):";
	cin>>role;
	
	//role Based access 
	
	if (role=="Admin")
{
		cout<<"Full access"<<endl;
	}
	else if (role=="guest"){
		
		cout<<"Limited access"<<endl;
	}
}
else{
	
	cout<<"Authentication failed. Access Denied."<<endl;
}
return 0;
}
