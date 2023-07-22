// Function to calculate the absolute value

#include <stdio.h>

// Declare functions
float absoluteValue (float);

int main(void) {

  // Define and declare input
  float f1 = -15.5, f2 = 20.0, f3 = -5.0;
  int i1 = -716;
  float result;

  // Use functions
  result = absoluteValue (f1);
  printf ("Result = %.2f\n", result);
  printf ("f1 = %.2f\n", f1);

  result = absoluteValue (f2) + absoluteValue (f3);
  printf ("Result = %.2f\n", result);

  result = absoluteValue ((float) i1);
  printf ("Result = %.2f\n", result);

  result = absoluteValue (i1);
  printf ("Result = %.2f\n", result);

  printf ("%.2f\n", absoluteValue (-6.0) / 4);
  
  
  return 0;
}

// Define functions
float absoluteValue (float input) {
  if (input < 0)
    input *= -1;

  return input;
}