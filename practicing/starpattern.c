#include <stdio.h>

int main(){

    int i,j,k; //defining integer variablef or loops 
    int num_of_rows = 10; // defining number of lines the star must be printed

    //outer loop this define how much rows it should be run based on input 

    // this upcoming loop is used to print
    /*
             *
            ***
           *****
          *******
         *********

    */
    for(i = 1; i <= num_of_rows; i++){
        // this loop is used to space the gaps in stars
        for (j =1; j <= (num_of_rows - i); j++){
            printf(" ");
        }
        
        // this loop is used to print the stars ( 2 * i -1) defining this prints only in odd number of stars
        for (k= 1; k <=( 2 * i -1) ; k++)
        {
            printf("*");
        }

        printf("\n");

    }

    // this upcoming loop is used to print
    /*

    *
    **
    ***
    ****
    ***** 

    */

    printf("\n");
    for( i = 1; i<= num_of_rows; i++){
        for(j = 1; j<= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    // this upcoming loop is used to print
    /*
    
    *
    **
    ***
    ****
    ***** 
    ****
    ***
    **
    *

    */

    printf("\n");
    for( i = 1; i<= num_of_rows; i++){
        for(j = 1; j<= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for( i = num_of_rows - 1 ; i >= 1; i--){
        for(j = 1 ; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    // this program is used to print
    /*     
    *
   **
  ***
 ****
*****
 ****
  ***
   **
    *
    * 
*/

    printf("\n");
    for( i = 1; i<= num_of_rows; i++){

        for( j= 1; j<= num_of_rows-i; j++){
            printf(" ");

        }

        for(j = 1; j<= i; j++)
        {
            printf("*");
        }
        printf("\n");


    }
    for( i = num_of_rows - 1 ; i >= 1; i--){

        for( j = 1; j<=num_of_rows - i; j++)
        
        {
            printf(" ");

        }

        for(j = 1 ; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    // this code is used to print
    /*

    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *
    

    */

    printf("\n");
    for(i = 1; i <= num_of_rows; i++){

        // this loop is used to space the gaps in stars

        for (j =1; j <= (num_of_rows - i); j++){
            printf(" ");
        }
        
        // this loop is used to print the stars ( 2 * i -1) defining this prints only in odd number of stars
        for (j= 1; j <=( 2 * i -1) ; j++)
        {
            printf("*");
        }
        printf("\n");

    }

    for(i= num_of_rows-1; i >= 1; i-- ){

        for( j = 1; j <= num_of_rows-i; j++)
        {
            printf(" ");
        }

        for( j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }
        printf("\n");

    }

    return 0;
}
