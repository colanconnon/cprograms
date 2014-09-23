/* colan connon project 6 part 3 */
#include <stdio.h>
#include <string.h>

/* looked up this function from http://stackoverflow.com/questions/122616/how-do-i-trim-leading-trailing-whitespace-in-a-standard-way */
char *trimwhitespace(char *string)
{
  char *end;

  // Trim leading space
  while(isspace(*string)){
    string++;}

    if(*string == 0){  // All spaces?
        return string;

    }
    // Trim trailing space
    end = string + strlen(string) - 1;
    while(end > string && isspace(*end))
        {end--;
        }

    // Write new null terminator
    *(end+1) = 0;

  return string;
}


int main(){
    /*make an array to hold the word */
    char *stringholder[]= {"blank","blank","blank","blank","blank","blank"
                        ,"blank","blank","blank","blank","blank","blank","blank","blank","blank","blank","blank","blank","blank","blank"};
    int counter[20] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    char *ptrarray;
    char inputarray[1000];
    char *string;
    char *string2;
    int i =0;
    int j;
    char *string1;

    printf("please enter some input:");
    fgets(inputarray,1000,stdin);/*get input*/
    ptrarray = strtok(inputarray, " ");/*tokenize string */


    while( ptrarray != NULL){
        string = ptrarray;/*get a string */
        ptrarray = strtok(NULL, " ");/*finish the tokenize */
        trimwhitespace(string);/*get rid of whitespace*/
        for (i=0;i<=19;i++)
        {
            string2 = stringholder[i];
            /*count if the word is already there */
            if(strcmp(string,string2)==0){
                counter[i] = counter[i]+1;
                break;
            }
            /*create a new word */
            else if(stringholder[i] == "blank"){
                stringholder[i]=string;
                counter[i]= counter[i]+1;
                break;
            }

        }





                }

    /*print out the table*/
    for (i=0;i<=19;i++){
        if(stringholder[i]== "blank"){
            break;
            }
        printf("%s occurs %d times\n",stringholder[i],counter[i]);
    }








    return 0;
}

