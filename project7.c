// colan connon project 7 december 7, 2012//
#include <stdio.h>
#include <string.h>


struct inventorydata{
    int recordnum;
    char toolname [25];
    int quanity;
    double cost;
    };
/* create a struct for data */

/*function prototypes */
int menu( void );
void updatetool(FILE *secondptr);
void newtool(FILE *secondptr);
void deletetool(FILE *secondptr);
void intalizefile(FILE *secondptr);

int main(void){
    FILE *fptr;
    int choice;
    int i;

    struct inventorydata blankdata = {0,"",0,0.0};
    if((fptr = fopen("hardware.txt","rb+"))== NULL){
        printf("ERROR!!!");
        }
        /*Open the file */


    else{

        while(( choice = menu() ) != 5){
            switch(choice){
            case 1:
                updatetool(fptr);
                break;
            case 2:
                newtool(fptr);
                break;
            case 3:
                deletetool(fptr);
                break;
            case 4:
                intalizefile(fptr);
                break;
            default:
                printf("Not a Valid Choice\n");
                break;
                /*choices to get what the user wants to do */
            }
        }
        fclose(fptr);

        }
        return 0;
}

int menu(void){
    int choice;

    /*menu function to list the choices for the user */
    printf("Enter a choice\n");
    printf("1) update a tool\n");
    printf("2) add a new tool\n");
    printf("3) delete a tool\n");
    printf("4) intalize the text file and store the intial records\n");
    printf("5) end the program\n");

    scanf("%d" ,&choice);
    return choice;
}




void newtool(FILE *secondptr){

    int recordnum;
    struct inventorydata data= {0,"",0,0.0};


    printf("Enter a record number for your tool\n");
    scanf("%d",&recordnum);
    /* get input */
    fseek(secondptr,(recordnum - 1) * sizeof(struct inventorydata), SEEK_SET);
    fread(&data, sizeof(struct inventorydata),1,secondptr);
    /*check and see if there is already a tool under that recordnumber */
    if(data.recordnum != 0){
        printf("record number #%d already exists\n", data.recordnum);
    }
    else{
        /*get the new tool input and write it to the text file */
        printf("enter toolname(if toolname is more than one word seperate the words with a -,quanity, and cost\n");
        scanf("%s%d%lf",&data.toolname,&data.quanity,&data.cost);

        data.recordnum = recordnum;

        fseek(secondptr,(data.recordnum -1)* sizeof(struct inventorydata), SEEK_SET);
        fwrite(&data, sizeof(struct inventorydata),1,secondptr);
    }
}

void updatetool(FILE *secondptr){
    int recordnum;
    int quanity;
    int choice;

    struct inventorydata data = {0,"",0,0.0};

    printf("Enter record number to update (1-100):\n");
    scanf("%d",&recordnum);
    /* get the record number */

    fseek(secondptr,(recordnum-1)* sizeof(struct inventorydata) , SEEK_SET);
    fread(&data, sizeof(struct inventorydata),1,secondptr);
    /* get the information to find the tool to update */
    if(data.recordnum == 0){
        printf("record number %d doesn't have info\n", recordnum);
    }
    else{
        printf("%d %s %d %lf\n" ,data.recordnum, data.toolname, data.quanity, data.cost);

        printf("What do you want to update?\n");
        printf("1) record number\n");
        printf("2) tool name \n");
        printf("3) tool quanity \n");
        printf("4) tool cost \n");
        scanf("%d",&choice);
        /*get input */

        if(choice == 1){
            int newrecordnum;
            printf("Enter the new tool record number\n");
            scanf("%d",&newrecordnum);

            data.recordnum = newrecordnum;

        }

        if(choice == 2){
            char newtoolname [25];
            printf("Enter new toolname.(If tool name is more than oneword seperate with a - \n");
            scanf("%s",&newtoolname);
            strcpy(data.toolname , newtoolname);

        }
        if(choice == 3){
            int newquanity;
            printf("Enter the new tool quanity\n");
            scanf("%d", &newquanity);

            data.quanity = newquanity;

        }
        if(choice == 4){
            double newcost;
            printf("enter the new tool cost \n");
            scanf("%lf",&newcost);
            data.cost = newcost;

        }

        fseek(secondptr,(data.recordnum-1) * sizeof(struct inventorydata ), SEEK_SET);
        fwrite(&data, sizeof(struct inventorydata),1,secondptr);
        /* get which part user wants to update and write that part to the file */

    }



}

void deletetool(FILE *secondptr){
    struct inventorydata inventory;
    struct inventorydata data = {0,"",0,0.0};

    int recordnum;

    printf("Enter Record number to delete 1-100.\n");
    scanf("%d",&recordnum);
    /* get input find the record number and delete that tool */

    fseek(secondptr,(recordnum -1)* sizeof(struct inventorydata), SEEK_SET);
    fread(&inventory, sizeof(struct inventorydata),1,secondptr);

    if(data.recordnum == 0){
        printf("record number doesnt have any data\n");
    }
    else{
        fseek(secondptr,(inventory.recordnum-1) *sizeof(struct inventorydata),SEEK_SET);
        fwrite(&data,sizeof(struct inventorydata),1,secondptr);

    }
}

void intalizefile(FILE *secondptr){
    int i;
    struct inventorydata blankdata = {0,"",0,0.0};
    for( i = 1; i<=100;i++){
            fwrite(&blankdata,sizeof(struct inventorydata),1,secondptr);
         }

    struct inventorydata data1 = {3,"Electric Sander",7,57.98};
    struct inventorydata data2 = {17,"Hammer",76,11.99};
    struct inventorydata data3 = {24,"Jig Saw",21,11.00};
    fseek(secondptr,(data1.recordnum-1) *sizeof(struct inventorydata),SEEK_SET);
    fwrite(&data1, sizeof(struct inventorydata),1,secondptr);
    fseek(secondptr,(data2.recordnum-1) *sizeof(struct inventorydata),SEEK_SET);
    fwrite(&data2, sizeof(struct inventorydata),1,secondptr);
    fseek(secondptr,(data3.recordnum-1) *sizeof(struct inventorydata),SEEK_SET);
    fwrite(&data3, sizeof(struct inventorydata),1,secondptr);
    /* this function intalizes the text file and writes the 3 items to it to start it off*/


}
