#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"ENTER THE ARRAY SIZE : ";
  cin>>n;
  char arr[n];
  cin>>arr;
  int len=sizeof(arr);
  int check=1;
  for(int i=0;i<n;i++){
    if(arr[i]==arr[len-1]){
      len--;
    }
    else{
      check=0;
      break;
    }
  }
  if (check==1) cout<<"IT IS A PALINDROME..."<<endl;
  else  cout<<"IT IS NOT A PALINDROME....";
  return 0;
}