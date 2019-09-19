#include <iostream>
#include<climits>

using namespace std;

int main()
{
    int a[7] ={1,2,-3,4,-5,0,-10};
    int sum=0, max=INT_MIN;
    for (int k=0;k<7;k++)
    {
        for(int i=k;i<7;i++)
        {   sum=0;
            for(int j=k;j<=i;j++)
            {
                // cout<<a[j]<<" ";
                sum= sum+a[j];
            }
            if(max<sum){
                max=sum;
            }
        }
    }
    cout<<max;
    return 0;
}