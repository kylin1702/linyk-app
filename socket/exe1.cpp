#include <iostream>
#include <string> 
using namespace std; 

int main()
{
    cout<<"**************************************************"<<endl;
    cout<<"��ӭʹ�ö�����̼�ŷ���������"<<endl;
    cout<<"������̼�ŷ������㹫ʽ ��"<<endl;
    cout<<"��ͥ�õ�Ķ�����̼�ŷ�����ǧ�ˣ�=�ĵ������0.785"<<endl;
    cout<<"ʳ��Ķ�����̼�ŷ�����ǧ�ˣ�=ʳ��ǧ������1.24"<<endl; 
    
    double eco2;    //��ͥ�õ�Ķ�����̼�ŷ���   
    double mco2;    //ʳ��Ķ�����̼�ŷ���   
    double electricity;    //�ĵ���� 
    double meat;    //ʳ��ǧ���� 
    
    cout<<"��������ļ�ͥ�õ�ĵ����(��)�� ";
    cin>>electricity;
    
    cout<<"���������ʳ��ǧ������ǧ�ˣ��� ";
    cin>>meat;
    cout<<0<<endl;
    
    eco2 = electricity * 0.785;
    mco2 = meat * 1.24;
    
    cout<<1<<endl;
    cout<<"��Ķ�����̼�ŷ����ݣ�"<<endl;
    cout<<"��ͥ�õ�Ķ�����̼�ŷ�����"<<eco2<<endl;
    
    cout<<"ʳ��Ķ�����̼�ŷ�����"<<mco2<<endl;
    
    cout<<"�����������...";
    system("Pause");
    return 0;
    
}
