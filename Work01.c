#include <stdio.h>
#include <stdlib.h>
//Problem 1
int three_five(){
  int sum=0;
  for(int i=0;i<1000;i++){
    if(i%3==0||i%5==0){
      sum+=i;
    }
  }
  return sum;
}
//Problem 5
int divisible(int num){
  for(int i=10;i<=20;i++){

    if(num%i!=0){
      return 0;
    }
  }
  return 1;
}

int smallest_mult(){
  int mult=2520;
  for(;divisible(mult)==0;mult++){

  }
  return mult;
}
//Problem 6
int sum_squares(/*int limit*/){
  int sum=0;
  for(int i=1;i<101/*limit*/;i++){
    sum+=(i*i);
  }
  return sum;
}
int squared_sum(/*limit*/){
  int sum=0;
  for(int i=1;i<101/*limit*/;i++){
    sum+=i;
  }
  sum*=sum;
  return sum;
}

int main(){
  printf("Problem 1\n%d\n",three_five());
  printf("Problem 5\n%d\n",smallest_mult());
  printf("Problem 6\n%d\n%d\n",sum_squares(),squared_sum());
  return 0;
}
