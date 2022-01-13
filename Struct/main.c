#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float fact(float num1) {
    float f = 1;
      for (float c = 1; c <= num1; c++) {
        f = f * c;
        }
        return f;

}

int main() {
  float n;
  float x, result;
  printf("Skriv din værdin: \n");
  scanf("%f", &x);
  n = x * x;
  for (float i = 0; i < n; i++) {
    result += (pow(x, i)/fact(i));
  }
  printf("%f \n", result);
  return 0;
}
