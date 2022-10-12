//先输入数字按下的回车键会留在输入队列，使得字符串无法正常读取
//(为什么连续读取两个数字可以不用考虑换行符的问题？)
#include<iostream>
int main()
{
    using namespace std;
    cout<<"What year was your house built?\n";
    int year;
    cin>>year;   //可以改成(cin>>year).get()
    //Enter 1996
    cout<<"What is its street address?\n";
    char address[80];
    cin.getline(address,80);
    cout<<"Year built: "<<year<<endl;
    cout<<"Address: "<<address<<endl;
    cout<<"Done!\n";
    return 0;
}