#include<iostream>
int main()
{
    using namespace std;
    const int Conversion=12;
    int height,feet;
    cout<<"Enter your height : __ inches(integer)\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b\b";
    cin>>height;
    feet=int(height/Conversion);
    cout<<"Your height is "<<feet<<" feet "<<feet%Conversion<<" inches"<<endl;
    return 0;
}