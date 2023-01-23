#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=0,d=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            c++;
        }
        else if(arr[i]==1)
        {
            d++;
        }
    }
    if(n==(c+d))
    {
        cout<<"True";
    }
    else
    {
        cout<<"False";
    }
}