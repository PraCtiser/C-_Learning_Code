#include<iostream>
#include<string>
#include<cstring>
int main()
{
    using namespace std;
    char charr[20];
    string str;

    cout<<"Length of string in charr before input: "
    <<strlen(charr)<<endl;
    cout<<"Length of string in str before input: "
    <<str.size()<<endl;  //str是对象，使用类方法来计算长度，注意与C风格的区别
    cout<<"Enter a line of text:\n";
    cin.getline(charr,20);  //indicate maximum length
    //Enter peanut butter
    cout<<"Your entered: "<<charr<<endl;
    cout<<"Enter another line of text:\n";
    getline(cin,str);
    //Enter blueberry jam
    cout<<"You entered: "<<str<<endl;
    cout<<"Length of string in charr after input: "
    <<strlen(charr)<<endl;
    cout<<"Length of string in str after input: "
    <<str.size()<<endl;
    return 0;
}