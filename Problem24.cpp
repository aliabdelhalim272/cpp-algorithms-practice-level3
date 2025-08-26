/*ًWrite a program to read  string then uppercase the first letter of each word in that string.*/ 
#include<iostream>
#include<string>
using namespace std;
string ReadText()
{
        string S;
        cout<<"\nEnter the text you want to convert it:\n";
        getline(cin,S);
        return S;
}
string PrintConvertedText(string S)
{
        bool IsFirstLetter=true;
        for(size_t i=0;i<S.length();i++)
        {
                if(S[i]!=' '&&IsFirstLetter)
                {
                        S[i]=toupper(S[i]);
                }
                IsFirstLetter=(S[i]==' '?true:false);
        }
        return S;
}
int main()
{
        string S=ReadText();
        cout<<"\nThe text after converting:\n";
       S=PrintConvertedText(S);
       cout<<S<<endl;
}