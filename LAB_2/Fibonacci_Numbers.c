 #include <stdio.h>
 
 void main()
 {
    int i, n, t1 = 0, t2 = 1, nTerm;
    scanf("%d", &n);
    for (i = 1; i <= n; ++i)  /* The recursive relation of fibonacci numbers */ 
    {   nTerm = t1 + t2;
        t1 = t2;
        t2 = nTerm;
    }
     printf("%d", t1);
 }
