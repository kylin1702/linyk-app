#include <iostream>
#include <string>

using namespace std;

struct Resume
{
    string userName;    //姓名 
    string birthday;    //生日 
    char userSex;    //性别 
    float hight;   //身高 
    string country;    //丹麦
    string cause;    //原因
};

int main()
{
    cout<<"************************************************"<<endl;
    cout<<"我最崇拜的名人"<<endl;
    cout<<"************************************************"<<endl;
    cout<<endl;
    
    Resume re;    //用户
    re.userName = "Bjarne Stroustrup";    //姓名
    re.birthday = "1950";    //生日 
    re.userSex = 'm';    //性别 
    re.hight = 180;    //身高 
    re.country = "丹麦";    //国籍 
    re.cause = "C++语言之父 ";   //原因
   
   
    cout<<endl;
    cout<<"姓名: ";
    cout<<re.userName<<endl; 
    
    cout<<"出生日期: ";
    cout<<re.birthday<<endl;
    
    cout<<"性别:";
    if (re.userSex = 'm')
        cout<<"男"<<endl;
    else 
        cout<<"女"<<endl;
    
    cout<<"身高: "<<endl;
    cout<<re.hight<<endl;
     
    cout<<"国籍: "<<endl;
    cout<<re.country<<endl;
    
    cout<<"原因: "<<endl;
    cout<<re.cause<<endl;
    
    cout<<endl<<"按任意键继续/结束...";
    cin.get();
    
    return 0;
} 
