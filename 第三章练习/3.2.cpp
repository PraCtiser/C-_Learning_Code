#include<iostream>
int main()
{
    using namespace std;
    const int Conversion(12);
    int h_feet,h_inches,pound;
    double BMI,kg;
    cout<<"Please enter your height in feet and inches and weight in pound): ";
    cin>>h_feet>>h_inches>>pound;
    h_inches=h_feet*Conversion+h_inches;
    cout<<"Your height is "<<h_inches<<" inches."<<endl;
    kg=double(pound)/2.2;
    BMI=kg/((double(h_inches)*0.0254)*(double(h_inches)*0.0254));
    cout<<"BMI : "<<BMI<<endl;
    return 0;
}