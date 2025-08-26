/*Write a program to read a string then invert all letter's case and print it.*/
#include<iostream>
#include<string>
using namespace std;
string ReadText()
{
        string Text;
        cout<<"\nEnter text:\n";
        getline(cin,Text);
        return Text;
} 
char InvertLetterCase(char char1)
{
        return isupper(char1)?tolower(char1):toupper(char1);
}
string InvertAllStrings(string Text)
{
        for(size_t i=0;i<Text.length();i++)
        {
                Text[i]=InvertLetterCase(Text[i]);
        }
        return Text;
}
int main()
{
        string S1=ReadText();
        cout<<"\nString after inverting all letters case:\n";
        S1=InvertAllStrings(S1);
        cout<<S1<<endl;
}