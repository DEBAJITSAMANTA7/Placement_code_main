// Problem Statement: Given a string, write a program to count the number of vowels, consonants, and spaces in that string.

// Examples:

// Example 1:
// Input: string str=”Take u forward is Awesome”
// Output:
// Vowels: 10
// Consonants: 11
// White spaces: 4

#include <bits/stdc++.h>
using namespace std;
void check(int n, string str)
{

    int count_vowel =0; int count_cons =0;
    int  space = 0;
    for (int i = 0; i < n; i++)
    {
        str[i] = tolower(str[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            count_vowel++;
        }
        else if (str[i] >= 'a' && str[i] <= 'z')
        {
            count_cons++;
        }
        else if(str[i]==' ')
        {
           space++;
        }
        else
        {
            continue;
        }
        
    }
    cout<<"Vowel "<<count_vowel<<endl;
    cout<<"Cons "<<count_cons<<endl;
    cout<<"Space "<<space<<endl;
    
}
int main(int argc, char const *argv[])
{
    /* code */
    string str = "Take u forward is Awesome";
    int n = str.length();
    check(n, str);
    // cout<<str;
    // Output:
    return 0;
}
