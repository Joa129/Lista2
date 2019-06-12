#include <stdio.h>

int main()
{
    int mat[7][7];

   for(int l = 0; l <= 7; l++){
         for(int c = 0; c <= 7; c++){
            if(c = 0){
            mat[l][c] = 1;
            }else if(l = c && c > 0){
                mat[l][c] = 1;
            }else{
                mat[l][c] = mat[l--][c] + mat[l--][c--];
            }
        }
   }    
        for(int l = 0; l <= 7; l++ ){
            for(int c = 0; c = l; c++ ){
        printf("%d-", mat[l][c]);
            }
       printf("\n");
        }
    
    
    return 0;
}
