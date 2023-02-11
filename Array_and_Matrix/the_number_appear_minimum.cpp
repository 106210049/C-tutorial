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

int Find_the_number_in_Array(float *Array,int &Array_size, float &check)
{
    int count=0;
    for(int Index=0;Index<Array_size;Index++)
    {
        if(Array[Index]==check)
        {
            count++;
        }
    }
    return count;
}
int Find_min(int *count,int &Array_size)
{
    int min=count[0];
    int Index_of_value_min=0;
    for(int Index=0;Index<Array_size;Index++)
    {
        if(count[Index]<min)
        {
            min=count[Index];
            Index_of_value_min=Index;
        }
    }
    cout<<"the minimum Appeareance is: "<<min<<" times"<<endl;
    return Index_of_value_min;
}
void Find_the_number_appear_minimum(float *Array, int &Array_size)
{
    int *count=new int[Array_size];

    for(int Index=0;Index<Array_size;Index++)
    {
        count[Index]=Find_the_number_in_Array(Array,Array_size,Array[Index]);
    }
    int Index_of_value_min=Find_min(count,Array_size);
    cout<<"with minimum value is:"<<Array[Index_of_value_min]<<endl;
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
    Find_the_number_appear_minimum(Array,Array_size);
    Output_Array(Array,Array_size);
}