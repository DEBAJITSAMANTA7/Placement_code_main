#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    string str = "Hello WOrld";
    reverse(str.begin(), str.end());
    cout << str<<endl;
    reverse(str.begin(), str.end());
    string str2=" New Data";
    
    str+=str2;
    cout<<str<<endl;
    string str3=" DEBAJIT";
    str.push_back('%');
    str.append(" DEBAJIT");
    cout<<str<<endl;
    str.pop_back();
    cout<<str<<endl;
    return 0;
}
