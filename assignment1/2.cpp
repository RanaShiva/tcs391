//Palindrome
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    cout<<"Enter the string: ";
    char word[50];
    cin.get(word, 50);
    int i = strlen(word)-1;
    for(int j=0; i>j; j++)
    {
        if(word[j] != word[i])
        {
            cout<<"Not palindrome\n";
            return 0;
        }  
        i--;
    }
    cout<<"Palindrome\n";
    return 0;
}