#include <iostream>
#include <string>

using namespace std;

struct Resume
{
    string userName;    //���� 
    string birthday;    //���� 
    char userSex;    //�Ա� 
    float hight;   //��� 
    string country;    //����
    string cause;    //ԭ��
};

int main()
{
    cout<<"************************************************"<<endl;
    cout<<"�����ݵ�����"<<endl;
    cout<<"************************************************"<<endl;
    cout<<endl;
    
    Resume re;    //�û�
    re.userName = "Bjarne Stroustrup";    //����
    re.birthday = "1950";    //���� 
    re.userSex = 'm';    //�Ա� 
    re.hight = 180;    //��� 
    re.country = "����";    //���� 
    re.cause = "C++����֮�� ";   //ԭ��
   
   
    cout<<endl;
    cout<<"����: ";
    cout<<re.userName<<endl; 
    
    cout<<"��������: ";
    cout<<re.birthday<<endl;
    
    cout<<"�Ա�:";
    if (re.userSex = 'm')
        cout<<"��"<<endl;
    else 
        cout<<"Ů"<<endl;
    
    cout<<"���: "<<endl;
    cout<<re.hight<<endl;
     
    cout<<"����: "<<endl;
    cout<<re.country<<endl;
    
    cout<<"ԭ��: "<<endl;
    cout<<re.cause<<endl;
    
    cout<<endl<<"�����������/����...";
    cin.get();
    
    return 0;
} 
