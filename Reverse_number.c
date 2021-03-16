 #include <stdio.h>
 
 void main()
{ long int n, revnum = 0, rem; 
  printf(" Enter an integer:");
  scanf("%d", &n);
  int a = n;
  while (a!=0)
  { rem = a % 10;
    revnum = revnum * 10 + rem;
    a/= 10;
  }
  printf(" Reversed number = %d\n", revnum);
  int t = n%10 ;
  if(t!=0) 
   printf(" Valid ");
  else 
   printf(" Invalid ");
}    

    
