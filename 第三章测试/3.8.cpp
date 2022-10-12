#include<iostream>
int main()
{
    using namespace std;
    cout.setf(ios_base::fixed,ios_base::floatfield);
    float tub=1.0/3.0;
    double mint=1.0/3.0;
    const float million=1.0e6;

    cout<<"tub="<<tub;
    cout<<", a million tubs ="<<million*tub;
    cout<<",\nand ten million tubs = ";
    cout<<10*million*tub<<endl;

    cout<<"mint = "<<mint<<" and a million mints = ";
    cout<<million*mint<<endl;
    return 0;
}
//cout只打印六位小数，在放大后float出现误差而double依然精准，可以看出float与double的精度差别