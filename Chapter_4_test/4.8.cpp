#include<iostream>
#include<string>
struct Pizza
{
    std::string brand;
    float diameter;
    float weight;
};
int main()
{
    using namespace std;
    Pizza *pt=new Pizza;
    cout<<"Please enter the diameter: ";
    cin>>pt->diameter;
    cin.get();   //注意留在缓冲区的换行符
    cout<<"Please Enter brand: ";
    getline(cin,pt->brand);
    cout<<"Enter the weight: ";
    cin>>pt->weight;
    cout<<"Brand: "<<pt->brand<<endl;
    cout<<"Diameter: "<<pt->diameter<<endl;
    cout<<"Weight: "<<pt->weight<<endl;
    delete pt;

    return 0;
}