#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include"add.h"
#include"view.h"
#include"edit.h"
#include"delete.h"

void addrecord();
void viewrecord();
void editrecord();
void deleterecord();

int main()
{
    int ch;

    printf("\n\n\t\t\t\t\t****************************\n");
    printf("\t\t\t\t\t*WELCOME TO STUDY AID DIARY*\n");
    printf("\t\t\t\t\t****************************");

    while(1)
    {
        printf("\n\n\t\tMAIN MENU:");
        printf("\n\n\tADD RECORD\t[1]");
        printf("\n\tVIEW RECORD\t[2]");
        printf("\n\tEDIT RECORD\t[3]");
        printf("\n\tDELETE RECORD\t[4]");
        printf("\n\tEXIT\t\t[5]");
        printf("\n\n\tENTER YOUR CHOICE:");
        scanf("%d",&ch);

        switch(ch)
        {
        case 1:
            addrecord();
            break;

        case 2:
            viewrecord();
            break;

        case 3:
            editrecord();
            break;

        case 4:
            deleterecord();
            break;

        case 5:
            printf("\n\n\t\tTHANK YOU FOR USING THE SOFTWARE ");
            getch();
            exit(0);

        default:
            printf("\nYOU ENTERED WRONG CHOICE..");
            printf("\nPRESS ANY KEY TO TRY AGAIN");
            getch();
            break;

        }
        system("cls");
    }
    return 0;
}
