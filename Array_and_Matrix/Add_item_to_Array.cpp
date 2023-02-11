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

void Add_item_to_Array(float *a,int &n)
{
    int value_need_to_add_to_array=0;
    cout<<"Enter value you want to add: ";
    cin>>value_need_to_add_to_array;
    int location=0;
    cout<<"Enter location in array you want to add:";
    cin>>location;
    n++;
    for(int i=n-1;i>location;i--)
    {
        swap(a[i],a[i-1]);
    }
    a[location]=value_need_to_add_to_array;
}

int main()
{
    system("cls");
    int n=0;
    cout<<"Enter the quantities: ";
    cin>>n;
    float *a=new float[n];
    Enter_array(a,n);
    Add_item_to_Array(a,n);
    Output_array(a,n);
}