#include<iostream>
#include<windows.h>
#define MAX_SIZE 100
using namespace std;
void Enter_Array(float *Array,int &Array_size)
{
    cout<<"Input Array"<<endl;
    for(int Index=0;Index<Array_size;Index++)
    {
        cout<<"Enter a["<<Index<<"]: ";
        cin>>Array[Index];
    }
}
void Output_Array(float *Array,int &Array_size)
{
    for(int Index=0;Index<Array_size;Index++)
    {
        cout<<"a["<<Index<<"]= "<<Array[Index]<<endl;
    }
    delete[]Array;
}

void Delete_Duplicate_Number(float *Array, int &Array_size)
{
    for(int index=0;index<Array_size;index++)
    {
        for(int location=index+1;location<Array_size-1;location++)
        {
            if(Array[index]==Array[location])
            {
                int Swap_location;
                for(Swap_location=location;Swap_location<Array_size;Swap_location++)
                {
                    swap(Array[Swap_location],Array[Swap_location+1]);
                }
                Array_size--;
                location--;
            }
        }
    }
}
int main()
{
    system("cls");
    static int Array_size=0;
    do
    {
        cout<<"Enter the Array size: ";
        cin>>Array_size;
    } while (Array_size>MAX_SIZE);
    
    float *Array=new float[Array_size];
    Enter_Array(Array,Array_size);
    Delete_Duplicate_Number(Array,Array_size);
    Output_Array(Array,Array_size);
}