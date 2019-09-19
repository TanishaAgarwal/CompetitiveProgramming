#include <iostream>

using namespace std;

int main()
{
    int arr[7] = {1, 2, -3, 4, -5, 0, -10};
    int max = arr[0], sum = 0;
    for(int i=0;i<7;i++){
        sum += arr[i];
        if(max<sum) max=sum;
        else if(sum<0) sum = 0;
    }
    
    cout<<max;

    return 0;
}
