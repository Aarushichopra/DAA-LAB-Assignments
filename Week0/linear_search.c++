#include<iostream>
using namespace std;
int linearSearch(int a[],int n,int k)
{
    for(int i=0;i<n;i++)
    {
        if(*(a+i)==k)
        {
            cout<<i+1<<endl;
            return 1;
        }
    }
    return 0;
}
int main()
{
    int n,k,i;
    cin>>n>>k;
    int *a=new int[n];
    for(i=0;i<n;i++)
    {
        cin>>*(a+i);
    }
    int x=linearSearch(a,n,k);
    if(x==1)
        cout<<"Found";
    else
        cout<<"Not Found";

    return 0;
}