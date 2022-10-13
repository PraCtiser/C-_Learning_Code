#include<iostream>
int main()
{
    using namespace std;
    double total=0,i;
    cout<<"Please enter a number: ";
    cin>>i;
    while(i!=0)
    {
        total+=i;
        cout<<"Total: "<<total<<endl;
        cout<<"Please enter a number again: ";
        cin>>i;
    }
    return 0;
}