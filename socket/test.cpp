#include <iostream>
#include <string>

using namespace std;

enum Evaluation {LevelA, LevelB, LevelC, LevelD, LevelE};

struct Contact
{
    string telephone;   //�绰 
    string e_mail;    //���� 
       
};

struct Resume
{
    string userId;    //�û�ID
    string password;    //���� 
    string userName;    //���� 
    int userAge;     //���� 
    char userSex;    //�Ա� 
    float userBalance;   //��� 
    bool userPermit;    //Ȩ�� 
    Contact contact;        //��ϵ��ʽ 
    Evaluation evaluation;    //���� 
};

int main()
{
    cout<<"************************************************"<<endl;
    cout<<"��ͥ�˻�����ϵͳ"<<endl;
    cout<<"************************************************"<<endl;
    cout<<endl;
    
    Resume re;    //�û�
    re.userId = "lcr";    //�û�ID
    re.password = "000000";    //����
    re.userName = "���";    //����
    re.userAge = 23;    //����
    re.userSex = 'F';    //�Ա� 
    re.userBalance = 12.3f;    //��� 
    re.userPermit = true;    //Ȩ��
    re.contact.telephone = "13304521969";   //�绰
    re.contact.e_mail = "lcr@qqru.edu.cn";    //����
    re.evaluation = (Evaluation)3;    //����
    
    cout<<endl;
    cout<<"����: ";
    cout<<re.userName<<endl; 
    
    cout<<"����: ";
    cout<<re.userAge<<endl;
    
    cout<<"�Ա�:";
    if (re.userSex = 'M')
        cout<<"��"<<endl;
    else 
        cout<<"Ů"<<endl;
    
    cout<<"���: "<<endl;
    cout<<re.userBalance<<endl;
     
    cout<<"�Ƿ�����: "<<endl;
    cout<<re.userPermit<<endl;
    
    cout<<"�绰: "<<endl;
    cout<<re.contact.telephone<<endl;
    
    cout<<"����: "<<endl;
    cout<<re.contact.e_mail<<endl;
    
    cout<<"��������: "<<endl;
    switch(re.evaluation)
    {
        case LevelA: cout<<"LevelA"<<endl; break;  
        case LevelB: cout<<"LevelB"<<endl; break; 
        case LevelC: cout<<"LevelC"<<endl; break; 
        case LevelD: cout<<"LevelD"<<endl; break; 
        case LevelE: cout<<"LevelE"<<endl; break;   
    } 
    cout<<endl<<"�����������/����...";
    cin.get();
    
    return 0;
} 
