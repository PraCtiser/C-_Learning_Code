#include<iostream>
#include<cstring>
int main()
{
    using namespace std;
    cout<<"Enter words (to stop, type the word done):"<<endl;
    char word[20];
    int count=0;
    (cin>>word).get();
    while(strncmp("done",word,20))
    {
        (cin>>word).get();
        count++;
    }
    cout<<"You entered a total of "<<count<<" words.";
}