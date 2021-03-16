 #include <stdio.h>
 
 void main()
 { float m;
   scanf("%f", &m);
    if(m>=0 && m<=100)
  {   if(m>=0 && m<26)
       printf(" F ");
      else 
       if(m>=0 && m<41)
        printf(" C ");
       else
        if(m>=41 && m<56)
         printf(" B- ");
        else
         if(m>=56 && m<71)
          printf(" B+ ");
         else 
          if(m>=71 && m<86)
           printf(" A- ");
          else 
           if(m>=86 && m<=100)
            printf(" A+ ");		
  }
   else
    printf(" Invalid ");	   
 } 
