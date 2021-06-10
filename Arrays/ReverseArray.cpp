#include <stdlib.h>
#include <conio.h>
#include <iostream>
using namespace std;

void reverseArray(int arr[],int s,int e){
    if(s>=e)
        return;
    else
    {
        int temp=arr[s];
        arr[s]=arr[e];
        arr[e]=temp;
        reverseArray(arr,s+1,e-1);
    }
}
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    cout << "\nArray before reverse: ";
    for(int i=0;i<10;i++)
    {
        cout << arr[i] << " ";
    }
    reverseArray(arr,0,9);
    cout << "\nArray after reverse: ";
    for(int i=0;i<10;i++)
    {
        cout << arr[i]<< " ";
    }
    cout << " ";
    return 0;
}