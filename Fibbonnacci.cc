#include <iostream>
using namespace std; 
unsigned long long int Fibonacci(unsigned long long int x, unsigned long long int y){
  unsigned long long int temp = x+y; 
  return temp;
}

int main(){
  int  n, x;
  cout <<"Enter the amount of numbers in the Fibonacci sequence to be printed."<< endl;
  cin >> n;
  /* was unable to track odd number without x = n-1*/
  x = n-1;
  unsigned long long int sequence[x];
  sequence[0] = 0;
  sequence[1] = 1; 
  if (n==0){
    /* failsafe for 0*/
    cout <<"There is no number to be printed."<< endl;
  }else if(n<0){
    /*failsafe for negative numbers*/
    cout <<"Input a positive integer."<< endl;
  }else{
    for(int k=2;k<n;k++){
      sequence[k] = Fibonacci(sequence[k-2], sequence[k-1]); 
    }
    for(int j=0 ;j <= (n-2); j++){
      cout <<sequence[j] << "， ";
    }
    cout <<sequence[n-1]<<"."<< endl;
  }
}
