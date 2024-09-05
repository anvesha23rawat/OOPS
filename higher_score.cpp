#include<iostream>
using namespace std;
class Student{
  int score[5];
  public:
  void input(){
    cout<<"Enter the marks of five subject :";
    for(int i=0;i<5;i++){
      cin>>score[i];
    }
  }
  int calculate_totalscore(){
    int calculate=0;
    int total=0;
    for(int i=0;i<5;i++){
      total+=score[i];
    }
    return total;
  }
  int compare(){
    
  }
};
int main(){
  int total[5];
  Student s[5];
  for(int i=0;i<5;i++){
    s->input();
  }
  for(int i=0;i<5;i++){
    total[i]=s->calculate_totalscore();
  }
  for(int i=0;i<5;i++){
    s->compare();
  }
  return 0;
}