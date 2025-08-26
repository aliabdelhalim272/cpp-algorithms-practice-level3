/*Write a program to read string and print the first letter of each word in the string.*/
#include<iostream>
#include<string>
using namespace std;
string ReadString()
{
        string UserInput;
        cout<<"Enter String:\n";
        getline(cin,UserInput);
        return UserInput;
}
void PrintString(string UserInput)
{
        bool IsFirstNumber=true;
        for(size_t i=0;i<UserInput.length();i++)
        {
                if(UserInput[i]!=' '&&IsFirstNumber)
                {
                        cout<<UserInput[i]<<"   ";
                }
                IsFirstNumber=(UserInput[i]==' '?true:false);
        }
}
int main()
{
        PrintString(ReadString());
}