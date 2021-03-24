 #include <stdio.h>

 void main()
 
 {  char ch;
    scanf("%c", &ch);
 
    if ( ch=='C' )                        /* To calculate area of the circle */ 
    { int r;
      scanf("%d", &r);
      const float pi = 3.14159265;
      float a1 = pi*r*r;
      printf("%.2f", a1);
    }      
    else 
    if ( ch=='R')                         /* To calculate the area of rectangle */
    { int l,b;
      scanf("%d%d", &l, &b);
      float a2 = l*b;
      printf("%.2f", a2);
    }
    else
    if ( ch=='T')                         /* To calculate the area of the triangle */
    { int a,t;
      scanf("%d%d", &a, &t);
      float a3 = 0.5*a*t;
      printf("%.2f", a3);
    }
    else
      printf("Invalid Input");	          /* In case of any other input other than C, R, T */
 }
