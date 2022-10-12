#include<iostream>
#include<string>
struct CandyBar
{
    std::string brand;
    float weight;
    int calorie;
};
int main()
{
    using namespace std;
    CandyBar ar[3]=
    {
        {"Mocha Munch",2.3,350},
        {"Xiang Piaopiao",0.5,300},
        {"Yanjin Puzi",3,500}
    };
    for(int i=0;i<3;i++)
        cout<<ar[i].brand<<"  "<<ar[i].weight<<"  "<<ar[i].calorie<<endl;
    return 0;
}