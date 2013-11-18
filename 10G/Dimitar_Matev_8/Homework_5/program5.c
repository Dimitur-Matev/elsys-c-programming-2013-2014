#include <stdio.h>

 int n_fact(int n)
 {
     int n_fact =1,c;
     for (c = 1; c <= n; c++)
     n_fact = n_fact * c;

     return n_fact;
 }

 int main()
 {
     int n,a;
     scanf("%d",&n);
     if(!(n>=0 && n<=20)){
         printf("error");
         return 0;
     }

     float s=0,z;

     for(a=1; a<=n; a++)
     {
         z = (float)1/n_fact(a);
         s=z+s;
     }

     printf("%f",s);

     return 0;
 }
