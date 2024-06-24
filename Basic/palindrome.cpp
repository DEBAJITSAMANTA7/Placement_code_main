#include <bits/stdc++.h>
using namespace std;
string palin(int n)
{
    int no=n;
    int init=0;
    while (no>0)
    {
        // data get
        int data;
        data=no%10;
        // data add
        init=init*10+data;
        //delete the data
        no=no/10;
    }
    cout<<init;
    if(init==n) return "True";
    else return "false";
    
}
int main(int argc, char const *argv[])
{
   int n;
   cin>>n;
   cout<<palin(n);
    return 0;
}
