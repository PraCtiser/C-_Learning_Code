#include<iostream>
int main()
{
    using namespace std;
    cout<<"Enter number of rows: ";
    int rows;
    cin>>rows;
    for(int i=1;i<=rows;i++)
    {
        for(int j=0;j<rows-i;j++)
            cout<<".";
        for(int j=0;j<i;j++)
            cout<<"*";
        cout<<endl;
    }
    return 0;
}