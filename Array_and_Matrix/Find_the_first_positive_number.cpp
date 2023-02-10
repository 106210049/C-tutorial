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
        cout<<"a["<<i<<"]= "<<a[i];
        cout<<" with address: "<<&a[i]<<endl;
    }
    delete[]a;
}
int Find_the_first_Positive_Number(float *a,int &n)
{
    for(int location=0;location<n;location++)
    {
        if(a[location]>0)
        {
            cout<<&a[location]<<endl;
            return location;
        }
    }
    return NULL;
}
int main()
{
    system("cls");
    int n=0;
    cout<<"Enter the quantities: ";
    cin>>n;
    float *a=new float[n];
    Enter_array(a,n);
    cout<<"The location memory of the first positive number is: "<<Find_the_first_Positive_Number(a,n)<<endl;
    Output_array(a,n);
}