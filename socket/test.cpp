#include <iostream>
#include <string>

using namespace std;

enum Evaluation {LevelA, LevelB, LevelC, LevelD, LevelE};

struct Contact
{
    string telephone;   //电话 
    string e_mail;    //邮箱 
       
};

struct Resume
{
    string userId;    //用户ID
    string password;    //密码 
    string userName;    //姓名 
    int userAge;     //年龄 
    char userSex;    //性别 
    float userBalance;   //余额 
    bool userPermit;    //权限 
    Contact contact;        //联系方式 
    Evaluation evaluation;    //评价 
};

int main()
{
    cout<<"************************************************"<<endl;
    cout<<"家庭账户管理系统"<<endl;
    cout<<"************************************************"<<endl;
    cout<<endl;
    
    Resume re;    //用户
    re.userId = "lcr";    //用户ID
    re.password = "000000";    //密码
    re.userName = "李长荣";    //姓名
    re.userAge = 23;    //年龄
    re.userSex = 'F';    //性别 
    re.userBalance = 12.3f;    //余额 
    re.userPermit = true;    //权限
    re.contact.telephone = "13304521969";   //电话
    re.contact.e_mail = "lcr@qqru.edu.cn";    //邮箱
    re.evaluation = (Evaluation)3;    //评价
    
    cout<<endl;
    cout<<"姓名: ";
    cout<<re.userName<<endl; 
    
    cout<<"年龄: ";
    cout<<re.userAge<<endl;
    
    cout<<"性别:";
    if (re.userSex = 'M')
        cout<<"男"<<endl;
    else 
        cout<<"女"<<endl;
    
    cout<<"余额: "<<endl;
    cout<<re.userBalance<<endl;
     
    cout<<"是否允许: "<<endl;
    cout<<re.userPermit<<endl;
    
    cout<<"电话: "<<endl;
    cout<<re.contact.telephone<<endl;
    
    cout<<"邮箱: "<<endl;
    cout<<re.contact.e_mail<<endl;
    
    cout<<"个人评价: "<<endl;
    switch(re.evaluation)
    {
        case LevelA: cout<<"LevelA"<<endl; break;  
        case LevelB: cout<<"LevelB"<<endl; break; 
        case LevelC: cout<<"LevelC"<<endl; break; 
        case LevelD: cout<<"LevelD"<<endl; break; 
        case LevelE: cout<<"LevelE"<<endl; break;   
    } 
    cout<<endl<<"按任意键继续/结束...";
    cin.get();
    
    return 0;
} 
