#include<iostream>
int main()
{
    using namespace std;
    const int dayTohour=24;
    const int hourTomin=60;
    const int minTosec=60;
    long long total_seconds;
    int days,hours,minutes,seconds;
    cout<<"Enter the number of seconds: ";
    cin>>total_seconds;
    days=((total_seconds/minTosec)/hourTomin)/dayTohour;
    hours=((total_seconds-(days*dayTohour*hourTomin*minTosec))/minTosec)/hourTomin;
    minutes=(total_seconds-(days*dayTohour*hourTomin*minTosec)-(hours*hourTomin*minTosec))/minTosec;
    seconds=total_seconds-(days*dayTohour*hourTomin*minTosec)-(hours*hourTomin*minTosec)-minutes*minTosec;
    cout<<total_seconds<<" seconds = "<<days<<" days, "<<minutes<<" minutes, "<<seconds<<" seconds"<<endl;
    return 0;
}