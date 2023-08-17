// Tub sonlar

#include<stdio.h>
#include<stdbool.h>

bool isPrime( int num );
int  sumPrimes(    int num );
int  sumNonPrimes( int num );

int main( void )  {
  for( int i = 1 ; i < 8 ; i++ )
    printf( "%d => %sprime\n", i , isPrime( i ) ? "" : 
          "not " );
  printf("\n");
  
  printf( "Sum of prime numbers 1..100     = %d\n" , 
           sumPrimes( 100 ) ); 
  printf( "Sum of non-prime numbers 1..100 = %d\n" , 
           sumNonPrimes( 100 ) ); 
  return 0;
}


bool isPrime(int num)  {
  if(num < 2)   return false;
  if(num == 2)  return true;
  bool isPrime = true;  
  for(int i = 2 ; i < num ; i++)  {
    if((num % i) == 0)  {  
      isPrime = false;
      break;                           
    }
  }
  return isPrime;
}

int  sumPrimes(int num)  {
  int sum = 0;
  for(int i = 1;i < (num+1) ; i++)  {
    if(!isPrime(i)) continue;
    printf("%d ", i);
    sum += i;
  } 
  printf("\n");
  return sum;
}

int  sumNonPrimes(int num)  {
  int sum = 0;
  for(int i = 1;i<(num+1); i++)  {
    if(isPrime(i)) continue;
    printf("%d ", i);
    sum += i;
  } 
  printf("\n");
  return sum;
}