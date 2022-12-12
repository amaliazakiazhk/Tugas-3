#include <stdio.h>

int main() {
   int i,n,j;
   
   printf("Tugas 3 BPD || Amalia Zakia Zhk || 2211510488");
   printf("\nPastikan nilai baris yang diinput ganjil");
   printf("\nMasukan jumlah baris: ");
   scanf("%i", &n);
   
   if(n%2==1){
       for(i=1; i<=n; i++){
           for(j=1; j<=i; j++){
               printf("*");
           }
           printf("\n");
       }
       for(i=n; i>=1; i--){
           for(j=1; j<=i; j++){
               printf("*");
           }
           printf("\n");
       }
   }else{
       printf("Bukan bilangan ganjil");
   }

    return 0;
}