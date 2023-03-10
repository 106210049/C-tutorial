#include<iostream>
#include<vector>
#include<windows.h>
using namespace std;

int solution(std::vector<vector<int>> matrix)
{
    int sum=0;
    for(int i=0;i<matrix.size();i++)
    {
        for(int j=0;j<matrix[i].size();j++)
        {
            (matrix[i][j]==0 && i!=matrix.size()-1)? matrix[i+1][j]=0 : sum+=matrix[i][j];
        }
    }
    return sum;
}

int main()
{
    system("cls");
    vector<vector<int>> matrix
    {
      {1,0,2},
      {2,5,1},
      {3,3,3}
      
    }; 
    int sum=solution(matrix);
    cout<<sum<<endl;
}