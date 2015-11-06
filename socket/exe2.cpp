#include <iostream>
#include <string>
using namespace std;

int main()
{
	int BMI;
	double x, y;
	string name;

	cout<<"        Comeon! Count your BMI!\n"
	"\nFirst:\n   ³ÉÄêÈËµÄBMIÖµ the BMI of an adult:"
	"\nunderweight¹ýÇá:less than 18.5;"
	"\nthe fit oneÊÊÖÐ£º 18.5~24;"
	"\noverweight¹ýÖØ: 24~28;"
	"\nobesity·ÊÅÖ:higher than 28;"<<endl;

	cout<<endl;
	cout<<"\nSecond:\n   please input your name:";
	cin>>name;
	
	cout<<"\nyour weight(kg): ";
	cin>>x;
	while(x>80)
	{
		cout<<"ÄãÊäÈëµÄÌåÖØ²»¶Ô£¬×¢Òâµ¥Î»ÊÇÇ§¿ËÅ¶";
		cout<<"\nyour weight(kg): ";
		cin>>x;
	}

	cout<<"\nyour height(m)‰: ";
	cin>>y;
	while(y>3.00)
	{
		cout<<"ÄãÊäÈëµÄÉí¸ß²»¶Ô£¬×¢Òâµ¥Î»ÊÇÃ×Å¶";
		cout<<"\nyour heightÉí¸ß‰: ";
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
		cout<<"ÄãÊäÈëÁË·Ç·¨×Ö·û£¬ÇëÖØÐÂÊäÈë"<<endl;
	else if (BMI >=99)
		cout<<"ÄãÊäÈëÁË·Ç·¨×Ö·û£¬ÇëÖØÐÂÊäÈë"<<endl;
 system("pause");	
 return 0; 
}   

