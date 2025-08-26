/*Write a program to read a charcter then invert is it's case and print it.*/
#include<iostream>
#include<string>
using namespace std;
char ReadText()
{
        char Ch1;
        cout<<"\nEnter a text:\n";
        cin>>Ch1;
        return Ch1;
}
char InvertCase(char char1)
{
        return isupper(char1)?tolower(char1):toupper(char1);
}
int main()
{
        char Ch1=ReadText();
        cout<<"\nCharcter after inverting:\n";
        Ch1=InvertCase(Ch1);
        cout<<Ch1<<endl;
}