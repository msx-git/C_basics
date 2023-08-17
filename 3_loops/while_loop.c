#include<stdio.h>

int sumNviaWhile( int N );
int sumNviaWhile2( int N );

int main(void){

    int num = 100;
    int num2 = 215;
    
    int sum = sumNviaWhile(num);
    int sum2 = sumNviaWhile2(num2);

    printf("The sum of 1 to %d is: %d\n",num, sum);
    printf("The sum of 1 to %d is: %d",num2, sum2);
}


int sumNviaWhile( int N )  {
  int sum = 0;
  int num = 0;
  while( num < N )  { // num: 0..99 (100 is not less than 
                      // 100)
    sum += (num+1);   // Off-by-one: shift 0..99 to 1..100.
    num++;
  } 
  return sum;
}

int sumNviaWhile2( int N )  {
  int sum = 0;
  while( N>0 )  {      // N: N down to 1 (stops at 0).
    sum += N;
    N--;
  }
  return sum;
}


/*
The while()… statement has the following syntax:

while( continuation_expression ) statement_body

It consists of a continuation_expression and a loop body. 
At each iteration of the while loop, the continuation_expression is evaluated. 
If its result is true, statement_body is executed and continuation_expression is evaluated again. 
When the continuation_expression evaluates to false, the loop ends; the execution resumes after statement_body. 
If continuation_expression initially evaluates to false, the statement_body loop is never executed.

*/