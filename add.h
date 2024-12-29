struct record
{
    char time[6];
    char name[30];
    char place[25];
    char duration[10];
    char note[500];
} ;
void addrecord()
{
    system("cls");

    FILE *fp ;
    char time[10];
    struct record e ;
    char filename[15];
    int choice;

    printf("\n\n\t\t\t\t\t***************************\n");
    printf("\t\t\t\t\t* WELCOME TO THE ADD MENU *");
    printf("\n\t\t\t\t\t***************************\n");
    printf("\n\tENTER DATE OF YOUR RECORD:[yyyy-mm-dd]:");
    fflush(stdin);
    gets(filename);

    fp = fopen (filename, "ab+" ) ;

    if ( fp == NULL )
    {
        fp=fopen(filename,"wb+");
        if(fp==NULL)
        {
            printf("\nSYSTEM ERROR...");
            printf("\nPRESS ANY KEY TO EXIT");
            getch();
            return ;
        }
    }
    choice=0;

    printf("\n\tENTER TIME:[hh:mm]:");
    scanf("%s",time);
    rewind(fp);
    while(fread(&e,sizeof(e),1,fp)==1)
    {
        if(strcmp(e.time,time)==0)
        {
            printf("\n\tTHE RECORD ALREADY EXISTS.\n");
            choice=1;
        }
    }
    if(choice==0)
    {
        strcpy(e.time,time);

        printf("\tENTER NAME:");
        fflush(stdin);
        gets(e.name);

        printf("\tENTER PLACE:");
        gets(e.place);

        printf("\tENTER DURATION:");
        gets(e.duration);

        printf("\tNOTE:");
        gets(e.note);
        fwrite ( &e, sizeof ( e ), 1, fp ) ;
        printf("\nYOUR RECORD IS ADDED...\n");
    }

    fclose ( fp ) ;
    printf("\n\n\tPRESS ANY KEY TO EXIT...");
    getch();

}
