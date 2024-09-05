#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"ENTER THE SIZE OF THE ARRAY : ";
  cin>>n;
  int arr[n];
  cout<<"ENTER ELEMENTS OF ARRAY :";
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  int i=0,j=n-1;
  while(i<j){
    if(arr[i]==1){
      swap(arr[i],arr[j]);
      j--;
    }
    else{
      i++;
    }
  }
  cout<<"PRINT THE RESULT....";
  for(int i=0;i<n;i++){
    cout<<arr[i];
  }
  return 0;
}