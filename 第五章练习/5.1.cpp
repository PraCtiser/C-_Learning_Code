#include<iostream>
int main()
{
    using namespace std;
    int int_start,int_final;
    cout<<"Please enter two integers: ";
    cin>>int_start>>int_final;
    int total=0;
    for(int i=int_start;i<=int_final;i++)
        total+=i;
    cout<<"The total from "<<int_start<<" to "<<int_final<<" is "<<total<<endl;
    return 0;
}