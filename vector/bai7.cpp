#include<iostream>
#include<vector>
#include<windows.h>
#include<algorithm>

using namespace std;

bool solution(vector<int> sequence) 
{
    int length=sequence.size();
    for(int p=0;p<=length;p++)
    {
        bool simp=false;
        length=sequence.size();
        int *a= new int[length];
        for(int k=0;k<length;k++)
        {
            a[k]=sequence[k];
        }
        for(int i=p;i<length-1;i++)
        {
            a[i]=a[i+1];
        }
        --length;
        for(int j=0;j<length-1;j++)
        {                                          
            if(a[j]<a[j+1])
            {
                simp=true;
            }
            else
            {
                simp=false;
                break;
            }
        }

        if(simp==true)
        {
            return true;
        }
    }
    return false;
}

// void Delete(int *a)
// {
//     delete [] a;
// }
// bool solution(std::vector<int> a) {
//     int n=a.size(), p=-1, c=0;
//     for (int i=1;i<n;i++)
//     {
//         if (a[i-1]>=a[i])
//         {
//             p=i;
//             c++;
//         }
//     }
//     if (c>1)
//     {
//         return 0;
//     } 
//     if(c==0)    
//     {
//         return 1;
//     }
//     if (p==n-1 || p==1)
//     {
//         return 1;
//     } 
    
//     if (a[p-1] < a[p+1])
//     {
//         return 1;
//     } 
//     if (a[p-2] < a[p]) 
//     return 1;

//     return 0;
// }

int main()
{
    system("cls");
    int *a;
    vector<int> sequence={1,2,5,3,5};
    // int length=sequence.size();
    cout<<solution(sequence);
    // Delete(a);

}