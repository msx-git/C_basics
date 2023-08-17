#include<stdio.h>

int sumNviaFor( int N );
int sumNviaFor2( int N );

int main(void){

    int num = 100;
    int num2 = 215;
    
    int sum = sumNviaFor(num);
    int sum2 = sumNviaFor2(num2);

    printf("The sum of 1 to %d is: %d\n",num, sum);
    printf("The sum of 1 to %d is: %d",num2, sum2);
}


int sumNviaFor( int N )  {
  int sum = 0;
  for( int num = 0 ; num < N ; num++ ) { 
                             // num: 0..99 (it's a C thing)
    sum += (num+1);          // Off-by-one: shift 0..99 to 
                             // 1..100.
  }
  return sum;
}

int sumNviaFor2( int N )  {
  int sum = 0;

  for( int i = N; i > 0; i--)  {
    sum += i;
  }

  return sum;
}


/*

The for()… statement has the following syntax:

for( counter_initialization ; continuation_expression ; counter_increment ) statement_body

The for()… statement consists of a three-part control expression and a statement body. 
The control expression is made up of a counter_initialization expression, continuation_expression, 
and a counter_increment expression, where a semicolon separates each part of an expression. 
Each one has a well-defined purpose. Their positions cannot be interchanged.

Upon executing the for()… statement, the counter_initialization expression is evaluated. 
This is performed only once. Then, continuation_expression is evaluated. 
If its result is true, the statement_body is executed. 
At the end of statement_body, the counter_increment expression is evaluated. 
Then, the process repeats, with the evaluation of continuation_expression. 
When continuation_expression evaluates to false, the loop ends; the execution resumes after statement_body. 
If the continuation_expression initially evaluates to false, the statement_body loop is never executed.

*/