#include<iostream>

using namespace std;

void sort(int arr[],int size)
{
    int exchange,boand,i,temp;
    exchange=size-1;
    while(!exchange!=0)
    {
        boand=exchange;
        exchange=0;
        for(i=0;i<exchange;i++)
        {
            if(arr[i]>arr[i+1])
            {
                swap(arr[i],arr[i+1]);
                exchange=i;
            }
        }
    }
}

int main()
{
    int arr[]={12,4,89,43,21,78};
    int size=sizeof(arr)/sizeof(arr[0]);
    sort(arr,size);
    return 0;
}
