#include<iostream>
#include<string>
int main()
{
    using namespace std;
    string months[12]=
    {
        "January",
        "February",
        "March",
        "April",
        "May",
        "June",
        "July",
        "August",
        "September",
        "October",
        "November",
        "December"
    };
    int sale[12];
    cout<<"Enter sales for 12 months: ";
    for(int i=0;i<12;i++)
    {
        cout<<months[i]<<": ";
        cin>>sale[i];
    }
    int total=0;
    for(int i=0;i<12;i++)
        total+=sale[i];
    cout<<"This book was sold "<<total<<" copies in this year!"<<endl;
    return 0;
}