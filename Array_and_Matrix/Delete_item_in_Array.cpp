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

void Delete_item_in_Array(float *a,int &n)
{
    int value_need_to_delete_in_array=0;
    cout<<"Enter value you want to delete: ";
    cin>>value_need_to_delete_in_array;
    for(int location=0;location<n;location++)
    {
        if(a[location]==value_need_to_delete_in_array)
        {
            for(int Swap_location=location;Swap_location<n-1;Swap_location++)
            {
                swap(a[Swap_location],a[Swap_location+1]);
            }
            n--;
            location--;
        }
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
    Delete_item_in_Array(a,n);
    Output_array(a,n);
}