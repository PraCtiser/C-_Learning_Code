#include<iostream>
int main()
{
    using namespace std;
    const double deTomin=60;
    const double minTosec=60;
    int degrees,minutes,seconds;
    cout<<"Enter a latitude in degrees, minutes, and seconds:"<<endl;
    cout<<"First, enter the degrees: ";
    cin>>degrees;
    cout<<"Next, enter the minutes of arc: ";
    cin>>minutes;
    cout<<"Finally, enter the seconds of arc: ";
    cin>>seconds;
    cout<<degrees<<" degrees,"<<minutes<<" minutes,"<<seconds<<" seconds = "
    <<double(degrees)+double(minutes)/deTomin+(double(seconds)/minTosec)/deTomin<<" degrees"<<endl;
    return 0;
}