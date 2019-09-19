#include <iostream>

using namespace std;

int main()
{
    int arr[7] = {1, 2, -3, 4, -5, 0, -10};
    int max = arr[0], sum = 0;
    int start = 0, end = 0, s = 0;
    for(int i=0;i<7;i++){
        sum += arr[i];
        if(max<sum){
            max=sum;
            start = s;
            end = i;
        }
        else if(sum<0){
            sum = 0;
            s = i+1;
        }
    }
    cout<<"Start: "<<start<<" End: "<<end<<endl;
    cout<<max;

    return 0;
}
