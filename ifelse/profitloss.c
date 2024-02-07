#include<stdio.h>
int main(){
     int sp,cp;
    
     printf ("the value of sp is:");
     scanf("%d",&sp);
      printf ("the value of cp is :");
     scanf("%d",&cp);
     if (sp ==cp)
     printf (" no loss no profit");
     if ( sp>cp){
        printf( " profit"); }
         else
     printf( " loss");
     return 0;
}