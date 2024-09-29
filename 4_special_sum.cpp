/*
Practical No. 4

You are given an array of elements. Now you need to choose the best index of this array.
An index of the array is called best if the special sum of this index is maximum across 
the special sum of all the other indices. To calculate the special sum for any index you
pick the first element that is and add it to your sum. Now you pick next two elements 
i.e., and and add both of them to your sum. Now you will pick the next elements, and this
continues till the index for which it is possible to pick the elements. Find the best 
index and in the output print its corresponding special sum. Note that there may be more 
than one best index, but you need to only print the maximum special sum.

Source Code:

*/
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array :";
    for(int i=0;i<n;++i){
      cin>>arr[i];
    }    
   int max=0;
   for(int i=0;i<n;++i){
        int sum=0;
        int g=1;
        int index=i;
        while(index<n){
            if(g+index>n){
                break;
            }
            int s=0;
            for(int j=0;j<g && index<n;++j){
                s=s+arr[index];
                index++;
            }
            sum=sum+s;
            g++;
        }
       
           if(max<sum){
            max=sum;
           }
  }
  printf("max=%d",max);
}