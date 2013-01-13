#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double przyprostokatna(double a, double b);

int main(){
  double p;
  p = przyprostokatna(3.0,4.0);
  printf("%lf\n", p);
  return 0;
}

double przyprostokatna(double a,double b){

  double p;
  p=sqrt((a*a)+(b*b));

  return p;
}
