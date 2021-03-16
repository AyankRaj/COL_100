 #include <stdio.h>
 #include <math.h>
 
  void main()
{ int a,b,c;
  scanf("%d%d%d", &a, &b, &c);
  if (a==0)
  printf(" Not a Quadratic Equation ");	  
  float D = b*b - 4*a*c;
  float r1 = (-b + sqrt(D))/(2*a);
  float r2 = (-b - sqrt(D))/(2*a);
  float r = -b/(2*a);
    if(a!=0,D>0)
     { printf("%.3f\t", r1);
       printf("%.3f\t", r2); }
    else
     if(a!=0,D==0)
      printf("%.3f", r);
     else
      if(a!=0,D<0)
       printf(" No Real Roots ");
}

