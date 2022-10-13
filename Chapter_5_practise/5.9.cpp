#include<iostream>
#include<string>
int main()
{
    using namespace std;
    cout<<"Enter words (to stop, type the word done):"<<endl;
    string word;
    int count=0;
    (cin>>word).get();
    while(word != "done")
    {
        (cin>>word).get();
        count++;
    }
    cout<<"You entered a total of "<<count<<" words.";
}
