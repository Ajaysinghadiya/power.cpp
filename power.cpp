// this recursion is for the understanding of power functions

#include<iostream>
using namespace std;

int  power(int m,int n)
{
    if(n==0)
    return 1;
    else
    return power(m,n-1)*m;
}

int main()
{
    int m,n;
    cin>>m>>n;
    cout<< power(m,n);
    return 0;
}
