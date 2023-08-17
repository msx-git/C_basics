#include<stdio.h>

int sumNviaDoWhile( int N );
int sumNviaDoWhile2( int N );

int main(void){

    int num = 100;
    int num2 = 215;
    
    int sum =  sumNviaDoWhile(num);
    int sum2 = sumNviaDoWhile2(num2);

    printf("The sum of 1 to %d is: %d\n",num, sum);
    printf("The sum of 1 to %d is: %d",num2, sum2);
}



int sumNviaDoWhile( int N )  {
  int sum = 0;
  int num = 0;
  do {
    sum += (num+1);      // Off-by-one: shift 0..99 to 
                         // 1..100.
    num++;
  } while ( num < N );   // num: 0..99 (100 is not less 
                         // than 100).
  return sum;
}

int sumNviaDoWhile2( int N )  {
  int sum = 0;
  do {
    sum += N;
    N--;
  } while ( N );    // range: N down to 1 (stops at 0).
  return sum;
}

/*
The do…while() statement has the following syntax:

do statement_body while( continuation_expression );

The only difference between this statement and the while()_ statement is that in the do…while() statement, 
statement_body is executed before continuation_expression is evaluated. 
If the continuation_expression result is true, the loop repeats. 
When continuation_expression evaluates to false, the loop ends. 
Note also the terminating semicolon. If continuation_expression initially evaluates to false, 
the statement_body loop is executed once and only once.
*/