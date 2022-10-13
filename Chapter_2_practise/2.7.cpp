#include<iostream>
void Time(int,int);
int main()
{
    using namespace std;
    int hours,minutes;
    cout<<"Enter the number of hours: ";
    cin>>hours;
    cout<<"Enter the number of minutes: ";
    cin>>minutes;
    Time(hours,minutes);

    return 0;
}
void Time(int hours,int minutes)
{
    using std::cout;
    using std::endl;
    cout<<"Time: "<<hours<<":"<<minutes<<endl;
}