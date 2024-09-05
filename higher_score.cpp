#include<iostream>
using namespace std;
class Student{
  int score[5];
  public:
  void input(int n){
    cout<<"Enter the marks of five exams :";
    for(int i=0;i<n;i++){
      cin>>score[i];
    }
  }
  int calculate_totalscore(int n){
    int total=0;
    for(int i=0;i<5;i++){
      total+=score[n];
    }
    return total;
  }
};
int main(){
  int n;
  cout << "Enter the number of students: ";
  cin >> n;
  Student s[n];
  for(int i=0;i<n;i++){
    cout<<"Enter scores for student "<<i+1<<":"<<endl;
    s->input(n);
  }
  int annaScore = s[0].calculate_totalscore(n);
  int count = 0;
  for (int i = 1; i < n; i++) {
    if (s[i].calculate_totalscore(n) > annaScore) {
      count++;
    }
  }
  cout << "Number of students who scored higher than Anna: " << count << endl;
  return 0;
}