#include <stdio.h> 
int main() { 
 int branches, products, i, j; 
 printf("Enter number of branches: "); 
 scanf("%d", &branches); 
 printf("Enter number of products: "); 
 scanf("%d", &products); 
 int units[branches][products];
 int revenue[products]; 
 printf("\nEnter number of units shipped by each branch for each product:\n"); 
 for(i = 0; i < branches; i++) 
 { 
 printf("Branch %d:\n", i+1); 
 for(j = 0; j < products; j++)
 }
 printf(" Product %d units: ", j+1); 
 scanf("%d", &units[i][j]); 
 } 
 } 
 printf("\nEnter revenue per unit for each product:\n"); 
 for(j = 0; j < products; j++) 
 { 
 printf("Product %d revenue: ", j+1); 
 scanf("%d", &revenue[j]); 
 } 
 printf("Total revenue per branch:\n"); 
 for (i = 0; i < branches; i++) 
 { 
 int total = 0; 
 for (j = 0; j < products; j++) 
 { 
 total += units[i][j] * revenue[j]; 
 } 
 printf("Branch %d: %d\n", i + 1, total); 
 } 
 return 0; 
}
