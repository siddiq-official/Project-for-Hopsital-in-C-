#include<stdio.h>
#include<string.h>
#include<conio.h>

char date[20];
char uname[20];
char page[10];
char problem[100];
char sex[10];
char blood[10];
char nation[100];
char mname[50];
char fname[50];
char bname[50];
char mno[20];
char laddress[100];
char paddress[100];
char ainfo[50];
char rdate[20];
long int cost;
int n,i;

//function for writing entry of hospital

void write()
{
    FILE *fp;
    char dat[20];
    char unam[20];
    char pag[10];
    char proble[100];
    char se[10];
    char bloo[10];
    char natio[100];
    char mnam[50];
    char fnam[50];
    char bnam[50];
    char mn[15];
    char laddres[100];
    char paddres[100];
    char ainf[50];
    char rdat[20];
    long int cos;

    printf("\n   Admit Date                ::");
    scanf("%s",&dat);
    printf("   Name of Patient           ::");
    scanf("%s",&unam);
    printf("   Gender(Sex)               ::");
    scanf("%s",&se);
    printf("   Patient Age               ::");
    scanf("%s",&pag);
    printf("   Blood Group               ::");
    scanf("%s",&bloo);
    printf("   Nationality               ::");
    scanf("%s",&natio);
    printf("   Admit Cause               ::");
    scanf("%s",&proble);
    printf("   Mother's Name             ::");
    scanf("%s",&mnam);
    printf("   Father's Name             ::");
    scanf("%s",&fnam);
    printf("   Guardian Name             ::");
    scanf("%s",&bnam);
    printf("   Mobile Number             ::");
    scanf("%s",&mn);
    printf("   Present Address           ::");
    scanf("%s",&laddres);
    printf("   Permanent Address         ::");
    scanf("%s",&paddres);
    printf("   Admission Info            ::");
    scanf("%s",&ainf);
    printf("   Release Date              ::");
    scanf("%s",&rdat);
    printf("   Total Cost                ::");
    scanf("%ld",&cos);

    fp=fopen("Record File.txt","a");
    fprintf(fp,"\n%s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %ld\n",dat,unam,se,pag,bloo,natio,proble,mnam,fnam,bnam,mn,laddres,paddres,ainf,rdat,cos);
    printf("\n       Record written successfully!!!");
    fclose(fp);
}

//function for writing entry of hospital

void display(char da[])
{
    FILE *fp;
    int res;

    fp=fopen("Record File.txt","r");

    while(fscanf(fp,"%s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %ld\n",date,uname,sex,page,blood,nation,problem,mname,fname,bname,mno,laddress,paddress,ainfo,rdate,&cost)!=EOF)
    {
        res=strcmp(date,da);
        if(res==0)
    {
    printf("\n\n\n    Admit Date           = %s",date);
    printf("\n    Name of Patient      = %s",uname);
    printf("\n    Gender(Sex)          = %s",sex);
    printf("\n    Patient Age          = %s",page);
    printf("\n    Blood Group          = %s",blood);
    printf("\n    Nationality          = %s",nation);
    printf("\n    Admit cause          = %s",problem);
    printf("\n    Mother's Name        = %s",mname);
    printf("\n    Father's Name        = %s",fname);
    printf("\n    Guardian Name        = %s",bname);
    printf("\n    Mobile No            = %s",mno);
    printf("\n    present Address      = %s",laddress);
    printf("\n    Permanent Address    = %s",paddress);
    printf("\n    Admission Info       = %s",ainfo);
    printf("\n    Release Date         = %s",rdate);
    printf("\n    Total Cost           = %ld",cost);
    }
    }
      //close of while loop
    fclose(fp);
}
 void display_a(char ba[])
{
    FILE *fp;
    int bes;

    fp=fopen("Record File.txt","r");

    while(fscanf(fp,"%s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %ld\n",date,uname,sex,page,blood,nation,problem,mname,fname,bname,mno,laddress,paddress,ainfo,rdate,&cost)!=EOF)
    {
        bes=strcmp(blood,ba);
        if(bes==0)
    {
    printf("\n\n\n    Blood Group          = %s",blood);
    printf("\n    Admit Date           = %s",date);
    printf("\n    Name of Patient      = %s",uname);
    printf("\n    Gender(Sex)          = %s",sex);
    printf("\n    Patient Age          = %s",page);
    printf("\n    Nationality          = %s",nation);
    printf("\n    Admit cause          = %s",problem);
    printf("\n    Mother's Name        = %s",mname);
    printf("\n    Father's Name        = %s",fname);
    printf("\n    Guardian Name        = %s",bname);
    printf("\n    Mobile No            = %s",mno);
    printf("\n    present Address      = %s",laddress);
    printf("\n    Permanent Address    = %s",paddress);
    printf("\n    Admission Info       = %s",ainfo);
    printf("\n    Release Date         = %s",rdate);
    printf("\n    Total Cost           = %ld",cost);
    }
    }
    //close of while loop
    fclose(fp);
}
 void display_b(char na[])
{
    FILE *fp;
    int nes;

    fp=fopen("Record File.txt","r");

    while(fscanf(fp,"%s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %ld\n",date,uname,sex,page,blood,nation,problem,mname,fname,bname,mno,laddress,paddress,ainfo,rdate,&cost)!=EOF)
    {
        nes=strcmp(uname,na);
        if(nes==0)
    {
    printf("\n\n\n    Name of Patient      = %s",uname);
    printf("\n    Admit Date           = %s",date);
    printf("\n    Gender(Sex)          = %s",sex);
    printf("\n    Patient Age          = %s",page);
    printf("\n    Blood Group          = %s",blood);
    printf("\n    Nationality          = %s",nation);
    printf("\n    Admit cause          = %s",problem);
    printf("\n    Mother's Name        = %s",mname);
    printf("\n    Father's Name        = %s",fname);
    printf("\n    Guardian Name        = %s",bname);
    printf("\n    Mobile No            = %s",mno);
    printf("\n    present Address      = %s",laddress);
    printf("\n    Permanent Address    = %s",paddress);
    printf("\n    Admission Info       = %s",ainfo);
    printf("\n    Release Date         = %s",rdate);
    printf("\n    Total Cost           = %ld",cost);
    }
    }
    //close of while loop
    fclose(fp);
}
 void display_c(char ga[])
{
    FILE *fp;
    int ges;

    fp=fopen("Record File.txt","r");

    while(fscanf(fp,"%s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %ld\n",date,uname,sex,page,blood,nation,problem,mname,fname,bname,mno,laddress,paddress,ainfo,rdate,&cost)!=EOF)
    {
        ges=strcmp(sex,ga);
        if(ges==0)
    {
    printf("\n\n\n    Gender(Sex)          = %s",sex);
    printf("\n    Admit Date           = %s",date);
    printf("\n    Name of Patient      = %s",uname);
    printf("\n    Gender(Sex)          = %s",sex);
    printf("\n    Patient Age          = %s",page);
    printf("\n    Blood Group          = %s",blood);
    printf("\n    Nationality          = %s",nation);
    printf("\n    Admit cause          = %s",problem);
    printf("\n    Mother's Name        = %s",mname);
    printf("\n    Father's Name        = %s",fname);
    printf("\n    Guardian Name        = %s",bname);
    printf("\n    Mobile No            = %s",mno);
    printf("\n    present Address      = %s",laddress);
    printf("\n    Permanent Address    = %s",paddress);
    printf("\n    Admission Info       = %s",ainfo);
    printf("\n    Release Date         = %s",rdate);
    printf("\n    Total Cost           = %ld",cost);
    }
    }
    //close of while loop
    fclose(fp);
}

//close of display function

void main()
{
    char ch;
    char lm[50];
    char bl[50];
    char nl[50];
    char gl[50];
    system("color 5e");
    //textcolor(5);
    //textbackground(4);
    do
    {
        //clrscr();

        printf("\n\n*****Welcome To Dhaka Central Hospital*****\n");
        printf("\nPress<1> To Form Fill Up For Admit");
        printf("\nPress<2> To Search Patient On Specific Date");
        printf("\nPress<3> To Search Name OF Patient");
        printf("\nPress<4> To Search Patient On Blood Group");
        printf("\nPress<5> To Search On Gander(Sex)");
        printf("\nPress<0> To exit");

        printf("\n\nPress Your Choice Number  ::");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:write();
            break;

            case 2:printf("\nEnter Your Specific Date to Search ::");
                scanf("%s",&lm);
                display(lm);
                break;

            case 4:printf("\nEnter your Blood Group  ::");
                 scanf("%s",&bl);
                 display_a(bl);
                 break;

            case 3:printf("\nEnter Patient Name  ::");
                 scanf("%s",&nl);
                 display_b(nl);
                 break;

            case 5:printf("\nEnter Gander(Sex)   ::");
                 scanf("%s",&gl);
                 display_c(gl);
                 break;


            case 0:exit(0);

            default:printf("\nInvalid Selection");
        }
        getch();
    }
    //close of do loop
    while(ch!=0);
}


//close of main
