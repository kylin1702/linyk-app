#include <iostream>
#include <string>
using namespace std;

int main()
{
	int BMI;
	double x, y;
	string name;

	cout<<"        Comeon! Count your BMI!\n"
	"\nFirst:\n   �����˵�BMIֵ the BMI of an adult:"
	"\nunderweight����:less than 18.5;"
	"\nthe fit one���У� 18.5~24;"
	"\noverweight����: 24~28;"
	"\nobesity����:higher than 28;"<<endl;

	cout<<endl;
	cout<<"\nSecond:\n   please input your name:";
	cin>>name;
	
	cout<<"\nyour weight(kg): ";
	cin>>x;
	while(x>80)
	{
		cout<<"����������ز��ԣ�ע�ⵥλ��ǧ��Ŷ";
		cout<<"\nyour weight(kg): ";
		cin>>x;
	}

	cout<<"\nyour height(m)�: ";
	cin>>y;
	while(y>3.00)
	{
		cout<<"���������߲��ԣ�ע�ⵥλ����Ŷ";
		cout<<"\nyour height��߉: ";
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
		cout<<"�������˷Ƿ��ַ�������������"<<endl;
	else if (BMI >=99)
		cout<<"�������˷Ƿ��ַ�������������"<<endl;
 system("pause");	
 return 0; 
}   

