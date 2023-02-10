#include<iostream>
#include<windows.h>
using namespace std;

void Enter_array(float *a,int &n)
{
    cout<<"Input array"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter a["<<i<<"]: ";
        cin>>a[i];
    }
}
void Output_array(float *a,int &n)
{
    for(int i=0;i<n;i++)
    {
        cout<<"a["<<i<<"]= "<<a[i]<<endl;
    }
    delete[]a;
}
void Reverse(float *a, int &n)
{
    int i=0;
    int j=n-1;
    while(i<j)
    {
        swap(a[i],a[j]);
        i++;
        j--;
    }
}
int main()
{
    system("cls");
    int n=0;
    cout<<"Enter the quantities: ";
    cin>>n;
    float *a=new float[n];
    Enter_array(a,n);
    Reverse(a,n);
    Output_array(a,n);
}