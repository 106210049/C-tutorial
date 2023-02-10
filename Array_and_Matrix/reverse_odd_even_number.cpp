#include<iostream>
#include<windows.h>
using namespace std;

void Enter_array(int *a,int &n)
{
    cout<<"Input array"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter a["<<i<<"]: ";
        cin>>a[i];
    }
}
void Output_array(int *a,int &n)
{
    cout<<"Output Array"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"a["<<i<<"]= "<<a[i]<<endl;
    }
    delete[]a;
}
void Reverse(int *a, int &n)
{
    int i=0;
    int j=n-1;
    while(i<j)
    {
        if(a[i]%2==0){i++;}
        if(a[j]%2!=0){j--;}
        if(i<j)
        {
            if(a[i]%2!=0&&a[j]%2==0)
            {
                swap(a[i],a[j]);
                i++;
                j--;
            }
        }
    }
}
int main()
{
    system("cls");
    int n=0;
    cout<<"Enter the quantities: ";
    cin>>n;
    int *a=new int[n];
    Enter_array(a,n);
    Reverse(a,n);
    Output_array(a,n);
}