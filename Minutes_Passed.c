 #include <stdio.h>

 void main()
 { int t;
   scanf("%d", &t);
   int l = t%100;
   int d = t/100;
   if( (l>0 && l<60) && (d>0 && d<=24))
  { int min = d*60 + l;
    printf("%d", min);
  }
   else
    printf("Invalid Input");
 }

