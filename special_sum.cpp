//question 1 :special sum
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