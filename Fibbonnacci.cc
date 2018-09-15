#include <iostream>
using namespace std; 
/* I tried to find the way to store longer variable, but this only work up to 98*/
unsigned long long int Fibonacci(unsigned long long int x, unsigned long long int y){
  unsigned long long int temp = x+y; 
  return temp;
}

int main(){
  int  n;
  cout <<"Enter the amount of numbers in the Fibonacci sequence to be printed."<< endl;
  cin >> n;
  unsigned long long int sequence[n-1];
  sequence[0] = 0;
  sequence[1] = 1; 
  if (n<=0){
    /* :> 0 and less will not be printed*/
    cout <<"There is no number to be printed."<< endl;
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
