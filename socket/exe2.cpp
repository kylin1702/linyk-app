#include <iostream>
#include <string>
using namespace std;

int main()
{
	int BMI;
	double x, y;
	string name;

	cout<<"        Comeon! Count your BMI!\n"
	"\nFirst:\n   成年人的BMI值 the BMI of an adult:"
	"\nunderweight过轻:less than 18.5;"
	"\nthe fit one适中： 18.5~24;"
	"\noverweight过重: 24~28;"
	"\nobesity肥胖:higher than 28;"<<endl;

	cout<<endl;
	cout<<"\nSecond:\n   please input your name:";
	cin>>name;
	
	cout<<"\nyour weight(kg): ";
	cin>>x;
	while(x>80)
	{
		cout<<"你输入的体重不对，注意单位是千克哦";
		cout<<"\nyour weight(kg): ";
		cin>>x;
	}

	cout<<"\nyour height(m)�: ";
	cin>>y;
	while(y>3.00)
	{
		cout<<"你输入的身高不对，注意单位是米哦";
		cout<<"\nyour height身高�: ";
		cin>>y;
	}

	BMI =  x / (y * y);

	cout<<name<<",your BMI is: "<<BMI<<",you are ";

	if (BMI >0 && BMI < 18.5)
		cout<<"underweight"<<endl;
	else if (BMI >= 18.5 && BMI < 24)
		cout<<"the fit one"<<endl;
	else if (BMI >= 24 && BMI < 28) 
		cout<<"overweight"<<endl;
	else if (BMI >= 28 && BMI <99)
		cout<<"obesity"<<endl;
	else if (BMI <=0)
		cout<<"你输入了非法字符，请重新输入"<<endl;
	else if (BMI >=99)
		cout<<"你输入了非法字符，请重新输入"<<endl;
 system("pause");	
 return 0; 
}   

