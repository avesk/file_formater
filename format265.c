#include <stdio.h>
#include <string.h>
        
int main(){

        char input[512];

        char strFile[512][512];

        int count=0;

        int i;

        //char *lw = ".LW", *lm = ".LM", *ls = ".LS", *ft = ".FT";

        //int lwFlg = 0, lmFlg = 0, lsFlg = 0, ftFlg = 0;

        FILE *pToFile = fopen("badformat.txt","r");

        while(fgets(input, 512, pToFile)){
              
               strFile[count]= input;

               count++;
        }


        for(i=0; i<4; i++){
      
        printf("%s", strFile[i]);
                
        }

                        
   /** Test the substrs and the flags**/ 
        

        // printf("LW: %s and flag is: %d \n", lw, lwFlg );

        // printf("LM: %s and flag is: %d \n", lm, lmFlg );

        // printf("LS: %s and flag is: %d \n", ls, lsFlg );

        // printf("FT: %s and flag is: %d \n", ft, ftFlg );
        
      /**  switch(){

        case 


        } **/

        fclose(pToFile);        

        return 0;
}
