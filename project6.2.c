/* colan connon project 6 part 2 */
#include <stdio.h>
#include <string.h>

int main (){
    char *ptrarray;
    char inputarray[1000];
    char *string;
    long sizeofstring;
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    int e = 0;
    int f = 0;
    int g = 0;
    int h = 0;
    int i = 0;
    int j = 0;
    int k = 0;
    int l = 0;
    int m = 0;
    printf("please enter some input:");
    fgets(inputarray,1000,stdin);
    ptrarray = strtok(inputarray, " ");

    while( ptrarray != NULL){
        string = ptrarray;
        ptrarray = strtok(NULL, " ");
        /*tokenize string */

        /* get the size of the string */
        sizeofstring = strlen(string);
        if(ptrarray == NULL){
            sizeofstring= sizeofstring - 1;
            /*If i didnt add this line the last string would always be one size to big*/
            }
        /* store sizes in variables */
        if (sizeofstring == 1){
            a++;
        }
        else if (sizeofstring == 2){
            b++;
        }
        else if (sizeofstring == 3){
            c++;
        }
        else if (sizeofstring == 4){
            d++;
            }
        else if(sizeofstring == 5){
            e++;
        }
        else if(sizeofstring == 6){
            f++;
            }
        else if(sizeofstring == 7){
            g++;
        }
        else if (sizeofstring == 8){
            h++;
        }
        else if(sizeofstring == 9){
            i++;
            }
        else if(sizeofstring == 10){
            j++;
        }
        else if(sizeofstring == 11){
            k++;
        }

    }

    /* print table with size of strings */
    printf("TABLE WITH STRING SIZE AND HOW MANY TIMES THAT OCCURS\n");
    printf("1:%d\n",a);
    printf("2:%d\n",b);
    printf("3:%d\n",c);
    printf("4:%d\n",d);
    printf("5:%d\n",e);
    printf("6:%d\n",f);
    printf("7:%d\n",g);
    printf("8:%d\n",h);
    printf("9:%d\n",i);
    printf("10:%d\n",j);
    printf("11:%d\n",k);


return 0;

}
