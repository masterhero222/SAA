#include<stdio.h>
int main() {

   int a[10][10], i, j, num;
   int sm, p, large, f = 1;

   printf("Enter size of matrix:");
   scanf("%d", & num);

   printf("Enter 2D array elements:");
   //Inputing every array value a number
   for (i = 0; i < num; i++) {
       for (j = 0; j < num; j++) {
           scanf("%d", & a[i][j]);
       }
   }

   printf("Elements of the 2D array is:");
   //Here we are printing the numbers of that array
   for (i = 0; i < num; i++) {
       printf("\n");
       for (j = 0; j < num; j++) {
           printf("%d ", a[i][j]);
       }
   }

   //Logic start here
   for (i = 0; i < num; i++) {
       p = 0; //The index of the largest element of the first array
       sm = a[i][0]; //Setting the first element of every colum
       for (j = 0; j < num; j++) {
           if (sm > a[i][j]) {
               sm = a[i][j];
               p = j;
           }
       }


       large = 0;
       for (j = 0; j < num; j++) {
           if (large < a[j][p]) {
               large = a[j][p];
           }
       }
       if (sm == large) {
           printf("\nValue of saddle point:%d", sm);
           f = 0;
       }
   }

   if (f > 0)
       printf("\nNo saddle point");

   return 0;
}
