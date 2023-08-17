#include <stdio.h>

double inchesToFeet(double);

int main( void )  {
  double inches = 1024.0;
  double feet = 0.0;
  feet = inchesToFeet( inches );
  printf( "%12.3g inches is equal to %12.3g feet\n" , inches , feet );
  return 0;
}
  // Given inches, convert this to feet
double inchesToFeet( double someInches )  {
  double someFeet = someInches / 12.0;
  return someFeet;
}

// Questions and Answers

// 1-Question: What are the three components of a variable?
// Answer: 1. A unique identifier or name. 2. A type. 3. A value

// 2-Question: What are the various types of constant values?
// Answer: 1. Integer constants, 
//         2. Double constants, 
//         3. Character constants

// 3-Question: Why do we initialize variables?
// Answer: The first value that's given to a variable is called initialization. 
//          Initialization can occur when the value is created or any time before we access the variable for use.
//          If we don't give the variable an initial value, 
//          we can never be sure what value it might have from one access to the next. 
//          When function blocks and programs are deallocated, 
//          the values that are occupied by their memory are left behind. 
//          So, it is up to us to ensure that we initialize the memory we use to known good values.

// 4-Question: How do we give a variable a value?
// Answer:  1. Explicit assignment using the "=" operator
//          2. Function parameter assignment
//          3. Function return assignment
//          4. Implicit assignment