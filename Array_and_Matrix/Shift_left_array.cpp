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
void Shift_left(int *a, int &n,int &k)
{
    cout<<"Shifting..."<<endl;
    while(k>0)
    {
        int temp=a[0];
        for(int i=0;i<n-1;i++)
        {
            swap(a[i],a[i+1]);
        }
        a[n-1]=temp;
        k--;
    }
}
int main()
{
    system("cls");
    int n=0,k=0;
    cout<<"Enter the quantities: ";
    cin>>n;
    cout<<"Enter the number of shift left:";
    cin>>k;
    int *a=new int[n];
    Enter_array(a,n);
    Shift_left(a,n,k);
    Output_array(a,n);
}