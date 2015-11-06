#include <iostream>
#include <string> 
using namespace std; 

int main()
{
    cout<<"**************************************************"<<endl;
    cout<<"欢迎使用二氧化碳排放量计算器"<<endl;
    cout<<"二氧化碳排放量计算公式 ："<<endl;
    cout<<"家庭用电的二氧化碳排放量（千克）=耗电度数×0.785"<<endl;
    cout<<"食肉的二氧化碳排放量（千克）=食肉千克数×1.24"<<endl; 
    
    double eco2;    //家庭用电的二氧化碳排放量   
    double mco2;    //食肉的二氧化碳排放量   
    double electricity;    //耗电度数 
    double meat;    //食肉千克数 
    
    cout<<"请输入你的家庭用电耗电度数(度)： ";
    cin>>electricity;
    
    cout<<"请输入你的食肉千克数（千克）： ";
    cin>>meat;
    cout<<0<<endl;
    
    eco2 = electricity * 0.785;
    mco2 = meat * 1.24;
    
    cout<<1<<endl;
    cout<<"你的二氧化碳排放数据："<<endl;
    cout<<"家庭用电的二氧化碳排放量："<<eco2<<endl;
    
    cout<<"食肉的二氧化碳排放量："<<mco2<<endl;
    
    cout<<"按任意键继续...";
    system("Pause");
    return 0;
    
}
