 #include <stdio.h>

 void main()
{ float l,w,h1,h2,r1,r2;
  float v1,v2,v3;
  const float pi = 3.14159265;
  scanf("%f%f%f", &l, &w, &h1);
  scanf("%f%f", &r1, &h2);
  scanf("%f",&r2);
  v1 = l*w*h1 ;
  v2 = pi*r1*r1*h2;
  v3 = (1.33333333)*pi*r2*r2*r2;
  printf("%.2f\n", v1);
  printf("%.2f\n", v2);
  printf("%.2f\n", v3);
}  

    
