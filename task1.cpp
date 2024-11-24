#include<iostream>
using namespace std;
bool bubblesort(int n[],int l);
main()
{
    int l,j;
    cout<<"Enter array length:";
    cin>>l;
    int n[l];
    for(int j=0;j<l;j++)
    {
        cout<<"Enter number:";
        cin>>n[j];
    }
    bool result=bubblesort(n,l);
    cout<<result;
}
bool bubblesort(int n[],int l)
{
    int max=0,temp;
    for(int i=0;i<l-1;i++)
    {
    for(int j=0;j<l-i-1;j++)
    {
        if(n[j]>n[j+1])
        {
            temp=n[j];
            n[j]=n[j+1];
            n[j+1]=temp;
        }
    }
    }
    for(int k=0;k<l-1;k++)
    {
        int x=n[k];
        int y=n[k+1];
        if((x+1)!=y)
        {
            return false;
        }
    }
    return true;
}