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
    int sale[3][12];
    cout<<"Enter sales for 12 months: "<<endl;
    for(int year=0;year<3;year++)
    {
        cout<<"Year "<<year+1<<": "<<endl;
        for(int month=0;month<12;month++)
        {
            cout<<months[month]<<": ";
            cin>>sale[year][month];
        }
    }
    int total=0;
    int sale_year[3];
    for(int year=0;year<3;year++)
        for(int month=0;month<12;month++)
        {
            total+=sale[year][month];
            sale_year[year]=total;
        }
    for(int year=0;year<3;year++)
        cout<<"This book was sold "<<sale_year[year]<<" copies in year"<<year<<"!"<<endl;
    cout<<"This book was sold "<<sale_year[0]+sale_year[1]+sale_year[2]<<" copies in 3 years!"<<endl;
    return 0;
}