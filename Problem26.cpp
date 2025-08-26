/*Write a program to read a string then upper all letters,then lower all letters amd print them.*/
#include<iostream>
#include<string>
using namespace std;
string ReadText()
{
        string S;
        cout<<"Enter the text:\n";
        getline(cin,S);
        return S;
}
string ConvertToLower(string S)
{
        for(size_t i=0;i<S.length();i++)
        {
                S[i]=tolower(S[i]);
        }
        return S;
}
string ConvertToUpper(string S)
{
        for(size_t i=0;i<S.length();i++)
        {
                S[i]=toupper(S[i]);
        }
        return S;
}
int main()
{
        string S=ReadText();
        cout<<"\nString after upper:\n";
        S=ConvertToUpper(S);
        cout<<S<<endl;
        cout<<"\nString after lower:\n";
        S=ConvertToLower(S);
        cout<<S<<endl;
}