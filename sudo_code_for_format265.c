#include <stdio.h>
#include <string.h>

      int main(int argc, char *argv[]){

        int ch, num_char;

        char formatted_str[512];

        char unformatted_str[512];

        if(argc < 2){

                fprintf(stderr, "Please provide a file name\n");
                exit(1);

        }


        FILE *file = fopen(argv[1], "r");

        if(file == NULL){

        fprintf(stderr, "unable  to open %s\n", argv[1]);
        exit(1);

        }

        is_format_cmd(); /** Turns on formating comand flags **/

        set_format_value(); /** Sets formatting command values **/

        lwf_txt = lw_format(lwflg, lw_val, unformatted_str); /** each format function returns a formated string in their repective format if their formating flag is set **/

        lmf_txt = lm_format(lmflg, lm_val, lwf_txt);          

        lsf_txt = ls_format;(lsflg, ls_val, lmf_txt);

        formatted_str = rmv_ft_cmd(); /** Removes all .FT* commands from the string **/

        printf("%s", formatted_str);

        return 0;



}


        const char *lw_format(int lw_flg, int format value, char *unformatted_txt[512]){
                char *formatted_txt[512];

        if(lw_flag == 1){

        while(input != EndOfText){

        if(input==".FT0"){

        /**Dont format the text**/
        /**Set FT flag to 0**/
        }

        

        if(ftflag==0 && input!=".FT0"){

        /**Dont format the text**/

        }

        else{

        /** format the text accordingly **/
                }
                        }
        else return unformatted_txt;

                return *formatted_txt;
        }

        /** Similar syntax for the remaining three functions **/


