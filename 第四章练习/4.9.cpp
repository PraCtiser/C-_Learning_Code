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
    CandyBar *pt=new CandyBar [3];
    pt[0].brand="Mocha Munch";
    pt[0].weight=2.3;
    pt[0].calorie=350;
    pt[1].brand="Xiang Piaopiao";
    pt[1].weight=0.5;
    pt[1].calorie=300;
    pt[2].brand="Yanjin Puzi";
    pt[2].weight=3;
    pt[2].calorie=500;
    for(int i=0;i<3;i++)
        cout<<pt[i].brand<<"  "<<pt[i].weight<<"  "<<pt[i].calorie<<endl;
    delete [] pt;
    return 0;
}