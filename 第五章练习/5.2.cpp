#include<iostream>
#include<array>
const int Arsize=100;
int main()
{
    using namespace std;
    array<long double,Arsize> factorials;
    factorials[1]=factorials[0]=1.0L;
    for (int i=2;i<=Arsize;i++)
        factorials[i]=factorials[i-1]*i;
    for (int i=0;i<=Arsize;i++)
        cout<<i<<"! = "<<factorials[i]<<endl;

    return 0;
}