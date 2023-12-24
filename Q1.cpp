//Calculate the product of all the elements in the given array.
#include<iostream>
using namespace std;
int main()
{
    int arr[5]={10,8,4,78,5};
    int product = 1;
    for(int i=0;i<5;i++)
    {
        product = product*arr[i];
    }
    cout<<product;
    return 0;
}