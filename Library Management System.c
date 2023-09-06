// Library Management System

#include <stdio.h>
#include <string.h>

// Structure for create book
struct book
{
    char book_name[100];
    char author_name[200];
    char book_id[30];
    char date[30];
    int sl_no;
} b, b1, b2;

// Structure for create student
struct student
{
    char name[200];
    char sam[50];
    char date[50];
    char rollNo[80];
    int slno, std_no;
} s, s1, s2;

// Structure for user login & ragestitation
struct login
{
    char name[100];
    char id[100];
    char password[20];
} l;

FILE *fptr; // Dicalr File pointer in globly

// front page dessine
int head()
{
    printf("\t\t\t\t\t\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf("\t\t\t\t\t\t\t************************************************************************************************\n");
    printf("\t\t\t\t\t\t\t************************************************************************************************\n");
    printf("\t\t\t\t\t\t\t***************************      LIBRARY MANAGEMENT    *****************************************\n");
    printf("\t\t\t\t\t\t\t*************************             SYSTEM                ************************************\n");
    printf("\t\t\t\t\t\t\t************************_____________________________________***********************************\n");
    printf("\t\t\t\t\t\t\t************************************************************************************************\n");
    printf("\t\t\t\t\t\t\t------------------------------------------------------------------------------------------------\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t www.creativecollege.in \n");
    printf("\t\t\t\t\t\t\t------------------------------------------------------------------------------------------------\n");
    getch();
    return 0;
}

// USER LOGIN
int logi()
{
    char id[100];
    char pwd[20];
    system("cls");
    printf("\n\n\t\t\t\t\t\t\t LOGIN \n\n\n\n");
    fptr = fopen("login.txt", "rb");

    printf("\n\t\t\t\t\tEnter your ID : ");
    fflush(stdin);
    gets(id);

    printf("\n\t\t\t\t\tEnter your POSSWORD : ");
    fflush(stdin);
    gets(pwd);

    while (fread(&l, sizeof(l), 1, fptr))
    {
        if (strcmp(id, l.id) == 0)
        {
            if (strcmp(pwd, l.password) == 0)
            {
                welcom();
                main2();
            }
            else
            {
                regestation();
            }
        }
    }
    fclose(fptr);
    return 0;
}

// RAGESTATION
int regestation()
{
    system("cls");
    fptr = fopen("login.txt", "ab");

    printf("\n\n\t\t\t\t\t\t\t\tRegestation \n\n\n\n");

    printf("\t\t\t\t\tEnter your full name: ");
    fflush(stdin);
    gets(l.name);

    printf("\n\t\t\t\t\tEntar your id: ");
    fflush(stdin);
    gets(l.id);

    printf("\n\t\t\t\t\tEnter a good and secure password: ");
    fflush(stdin);
    gets(l.password);

    printf("\n\n\n\t\t\t\t\t\t\t\tEnter any kay \n\n\n");

    fwrite(&l, sizeof(l), 1, fptr);
    fclose(fptr);
    getch();
    printf("\n\n\n\n\t\t\t\t\t\t\tYour regestation successful \a\n");
    getch();
    system("cls");
    logi();
    return 0;
}

// Welcome page
int welcom()
{
    system("cls");
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf("\n\t\t\t\t\t\t\t\t\t  **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**");
    printf("\n\t\t\t\t\t\t\t\t\t        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
    printf("\n\t\t\t\t\t\t\t\t\t        =                 WELCOME                   =");
    printf("\n\t\t\t\t\t\t\t\t\t        =                   TO                      =");
    printf("\n\t\t\t\t\t\t\t\t\t        =                 LIBRARY                   =");
    printf("\n\t\t\t\t\t\t\t\t\t        =               MANAGEMENT                  =");
    printf("\n\t\t\t\t\t\t\t\t\t        =                 SYSTEM                    =");
    printf("\n\t\t\t\t\t\t\t\t\t        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
    printf("\n\t\t\t\t\t\t\t\t\t  **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**\n");
    printf("\n\t\t\t\t\t\n\n\t\t Enter any key to continue.....");
    getch();
    system("cls");
    return 0;
}

// Add book for BBA
int bba()
{
    system("cls");
    printf("\n\n\t\t\tAdd book on your system  ------>>>\n");
    fptr = fopen("bba books.txt", "ab");

    printf("\t\t\t\t\t  \t\tTODAY:\n\t\t\t\t\t\t\t%s\n\t\t\t\t\t\t\t%s", __TIME__, __DATE__);

    printf("\n\t\t\tEnter date: ");
    fflush(stdin);
    gets(b2.date);

    printf("\n\t\t\tEnter seril No.:");
    scanf("%d", &b2.sl_no);

    printf("\n\t\t\tEnter book Id: ");
    fflush(stdin);
    gets(b2.book_id);

    printf("\n\t\t\tEnter author name: ");
    fflush(stdin);
    gets(b2.author_name);

    printf("\n\t\t\tEnter book name: ");
    fflush(stdin);
    gets(b2.book_name);

    printf("\n\n\t\t\t\t\tYOUR BOOK ADD SUCCESSFULLY\n");

    fwrite(&b2, sizeof(b2), 1, fptr);

    fclose(fptr);
    getch();
    system("cls");
    return 0;
}

// Add book for BCA
int bca()
{
    system("cls");
    printf("\n\n\t\t\tAdd book on your system  ------>>>\n");
    fptr = fopen("bca books.txt", "ab");

    printf("\t\t\t\t\t  \t\tTODAY:\n\t\t\t\t\t\t\t%s\n\t\t\t\t\t\t\t%s", __TIME__, __DATE__);

    printf("\n\t\t\tEnter date: ");
    fflush(stdin);
    gets(b1.date);

    printf("\n\t\t\tEnter seril No.:");
    scanf("%d", &b1.sl_no);

    printf("\n\t\t\tEnter book Id: ");
    fflush(stdin);
    gets(b1.book_id);

    printf("\n\t\t\tEnter author name: ");
    fflush(stdin);
    gets(b1.author_name);

    printf("\n\t\t\tEnter book name: ");
    fflush(stdin);
    gets(b1.book_name);

    printf("\n\n\t\t\t\t\tYOUR BOOK ADD SUCCESSFULLY\n");

    fwrite(&b1, sizeof(b1), 1, fptr);

    fclose(fptr);
    getch();
    system("cls");
    return 0;
}

// Add book for BSc
int bsc()
{
    system("cls");
    printf("\n\n\t\t\tAdd book on your system  ------>>>\n");
    fptr = fopen("bsc books.txt", "ab");
    printf("\t\t\t\t\t  \t\tTODAY:\n\t\t\t\t\t\t\t%s\n\t\t\t\t\t\t\t%s", __TIME__, __DATE__);
    printf("\n\t\t\tEnter date: ");
    fflush(stdin);
    gets(b.date);

    printf("\n\t\t\tEnter seril No.:");
    fflush(stdin);
    scanf("%d", &b.sl_no);

    printf("\n\t\t\tEnter book Id: ");
    fflush(stdin);
    gets(b.book_id);

    printf("\n\t\t\tEnter author name: ");
    fflush(stdin);
    gets(b.author_name);

    printf("\n\t\t\tEnter book name: ");
    fflush(stdin);
    gets(b.book_name);

    printf("\n\n\t\t\t\t\tYOUR BOOK ADD SUCCESSFULLY\n");

    fwrite(&b, sizeof(b), 1, fptr);

    fclose(fptr);
    getch();
    system("cls");
    return 0;
}

// All add book BBA, BCA ,BSc function are call in this function
int addbooks()
{
    system("cls");
    int ch;
    while (1)
    {
        printf("\n\n\t\t\t\t\tAdd Books\n");
        printf("\n\n\t\t\t1.BSc-CS(H)");
        printf("\n\n\t\t\t2.BCA");
        printf("\n\n\t\t\t3.BBA");
        printf("\n\n\t\t\t0.HOME");
        printf("\n\n\t\t\tChoose your branch :");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            viewbsc();
            bsc();
            break;
        case 2:
            viewbca();
            bca();
            break;
        case 3:
            viewbba();
            bba();
            break;
        case 0:
            main2();
            break;
        }
    }

    getch();
    system("cls");
    return 0;
}

// issu book  for bsc
int issubsc()
{
    system("cls");
    printf("\n\n\t\t\tIssue Books\n\n");

    fptr = fopen("bsc book student.txt", "ab");

    printf("\n\n\t\t\tEnter student SL.No.: ");
    scanf("%d", &s.std_no);

    printf("\n\n\t\t\tEnter Issue date: ");
    fflush(stdin);
    gets(s.date);

    printf("\n\n\t\t\tEnter Your semeistar : ");
    fflush(stdin);
    gets(s.sam);

    printf("\n\n\t\t\tEnter student name: ");
    fflush(stdin);
    gets(s.name);

    printf("\n\n\t\t\tEnter student Roll No.: ");
    fflush(stdin);
    gets(s.rollNo);

    printf("\n\n\t\t\tEnter your book id : ");
    scanf("%d", &s.slno);

    printf("\n\n\t\t\tBOOK ISSUE SUCCESSFULLY\n");

    fwrite(&s, sizeof(s), 1, fptr);

    fclose(fptr);
    getch();
    system("cls");
    return 0;
}

// issu books for BCA
int issubca()
{
    system("cls");
    printf("\n\n\t\t\tIssue Books\n\n");

    fptr = fopen("bca book student.txt", "ab");

    printf("\n\n\t\t\tEnter student SL.No.: ");
    scanf("%d", &s1.std_no);

    printf("\n\n\t\t\tEnter book date: ");
    fflush(stdin);
    gets(s1.date);

    printf("\n\n\t\t\tEnter Your semeistar : ");
    fflush(stdin);
    gets(s1.sam);

    printf("\n\n\t\t\tEnter student name: ");
    fflush(stdin);
    gets(s1.name);

    printf("\n\n\t\t\tEnter student Roll No.: ");
    fflush(stdin);
    gets(s1.rollNo);

    printf("\n\n\t\t\tEnter your book id : ");
    scanf("%d", &s1.slno);

    printf("\n\n\t\t\tBOOK ISSUE SUCCESSFULLY\n");

    fwrite(&s1, sizeof(s1), 1, fptr);

    fclose(fptr);
    getch();
    system("cls");
    return 0;
}

// issu boks for BBA
int issubba()
{
    system("cls");
    printf("\n\n\t\t\tIssue Books\n\n");

    fptr = fopen("bba book student.txt", "ab");

    printf("\n\n\t\t\tEnter student SL.No.: ");
    scanf("%d", &s2.std_no);

    printf("\n\n\t\t\tEnter book date: ");
    fflush(stdin);
    gets(s2.date);

    printf("\n\n\t\t\tEnter Your semeistar : ");
    fflush(stdin);
    gets(s2.sam);

    printf("\n\n\t\t\tEnter student name: ");
    fflush(stdin);
    gets(s2.name);

    printf("\n\n\t\t\tEnter student Roll No.: ");
    fflush(stdin);
    gets(s2.rollNo);

    printf("\n\n\t\t\tEnter your book id : ");
    scanf("%s", &s2.slno);

    printf("\n\n\t\t\tBOOK ISSUE SUCCESSFULLY\n");

    fwrite(&s2, sizeof(s2), 1, fptr);

    fclose(fptr);
    getch();
    system("cls");
    return 0;
}

// All issu book BBA, BCA ,BSc function are call in this function
int issubook()
{
    system("cls");
    int ch;
    while (1)
    {
        printf("\n\t\t\t\t\t\tBook issue");
        printf("\n\n\t\t\t1.BSc-CS(H)");
        printf("\n\n\t\t\t2.BCA");
        printf("\n\n\t\t\t3.BBA");
        printf("\n\n\t\t\t0.HOME");
        printf("\n\n\t\t\tChoose your branch :");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            issubsc();
            break;
        case 2:
            issubca();
            break;
        case 3:
            issubba();
            break;
        case 0:
            main2();
            break;
        }
    }
    getch();
    system("cls");
    return 0;
}

// view BSc books
int viewbsc()
{
    system("cls");
    printf("\n\t\t\t\t\t\tBSc-CS(H)\n\n");
    printf("\n------------------------------------------------------------------------------------------------------------------------\n");
    printf("\n  %-15s %-40s %-50s %-40s %s\n\n", "SL.No.", "Book Id", "Book name", "Author Name", "Add Date");

    fptr = fopen("bsc books.txt", "rb");
    while (fread(&b, sizeof(b), 1, fptr) == 1)
    {
        printf("  %-15d %-40s %-50s %-40s %s\n\n", b.sl_no, b.book_id, b.book_name, b.author_name, b.date);
    }
    fclose(fptr);
    getch();
    system("cls");
    return 0;
}

// view BCA books
int viewbca()
{
    system("cls");
    printf("\n\t\t\t\t\t\t  BCA\n\n");
    printf("\n------------------------------------------------------------------------------------------------------------------------\n");
    printf("\n  %-15s %-40s %-50s %-40s %s\n\n", "SL.No.", "Book Id", "Book name", "Author Name", "ADD Date");

    fptr = fopen("bca books.txt", "rb");
    while (fread(&b1, sizeof(b1), 1, fptr) == 1)
    {
        printf("  %-15d %-40s %-50s %-40s %s\n\n", b1.sl_no, b1.book_id, b1.book_name, b1.author_name, b1.date);
    }
    fclose(fptr);
    getch();
    system("cls");
    return 0;
}

// viwe BBA books
int viewbba()
{
    system("cls");
    printf("\n\t\t\t\t\t\t\t BBA \n\n");
    printf("\n------------------------------------------------------------------------------------------------------------------------\n");
    printf("\n  %-15s %-40s %-50s %-40s %s\n\n", "SL.No.", "Book Id", "Book name", "Author Name", "ADD Date");

    fptr = fopen("bba books.txt", "rb");
    while (fread(&b2, sizeof(b2), 1, fptr) == 1)
    {
        printf("  %-15d %-40s %-50s %-40s %s\n\n", b2.sl_no, b2.book_id, b2.book_name, b2.author_name, b.date);
    }
    fclose(fptr);
    getch();
    system("cls");
    return 0;
}

// All BSc, BCA ,BBA view books function are call in this function
int viewbook()
{
    system("cls");
    int ch;
    while (1)
    {
        printf("\n\n\t\t\t1.BSc-CS(H)");
        printf("\n\n\t\t\t2.BCA");
        printf("\n\n\t\t\t3.BBA");
        printf("\n\n\t\t\t0.HOME");
        printf("\n\n\t\t\tChoose your branch :");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            viewbsc();
            break;
        case 2:
            viewbca();
            break;
        case 3:
            viewbba();
            break;
        case 0:
            main2();
            break;
        }
    }
    getch();
    system("cls");
    return 0;
}

// delete for BCs book record
int dltbsc()
{
    system("cls");
    int id, f = 0;
    printf("\n\n\n\t\t\t\t\t\t\t\t<<<--Delete Book-->>?\n\n\n");
    printf("\n\n\t\t\t\t\tEnter Book SL.No : ");
    scanf("%d", &id);

    FILE *ftemp;

    fptr = fopen("bsc books.txt", "rb");
    ftemp = fopen("bsctemp.txt", "wb");
    while (fread(&b, sizeof(b), 1, fptr) == 1)
    {
        if (id == b.sl_no)
        {
            f = 1;
        }
        else
        {
            fwrite(&b, sizeof(b), 1, ftemp);
        }
    }
    if (f = 1)
    {
        printf("Book delete seccussefully");
    }
    else
    {
        printf("Book delete filed");
    }
    fclose(ftemp);
    fclose(fptr);

    remove("bsc books.txt");
    rename("bsctemp.txt", "bsc books.txt");
    getch();
    system("cls");
    return 0;
}

// delete for BCA book record
int dltbca()
{
    system("cls");
    int id, f = 0;
    printf("\n\n\n\t\t\t\t\t\t\t\t<<<--Delete Book-->>?\n\n\n");
    printf("\n\n\t\t\t\t\tEnter Book SL.No : ");
    scanf("%d", &id);

    FILE *ftemp;

    fptr = fopen("bca books.txt", "rb");
    ftemp = fopen("bbcatemp.txt", "wb");
    while (fread(&b1, sizeof(b1), 1, fptr) == 1)
    {
        if (id == b1.sl_no)
        {
            f = 1;
        }
        else
        {
            fwrite(&b1, sizeof(b1), 1, ftemp);
        }
    }
    if (f = 1)
    {
        printf("Book delete seccussefully");
    }
    else
    {
        printf("Book delete filed");
    }
    fclose(ftemp);
    fclose(fptr);

    remove("bca books.txt");
    rename("bcatemp.txt", "bca books.txt");
    getch();
    system("cls");
    return 0;
}

// delete for BBA book record
int dltbba()
{
    system("cls");
    int id, f = 0;
    printf("\n\n\n\t\t\t\t\t\t\t\t<<<--Delete Book-->>?\n\n\n");
    printf("\n\n\t\t\t\t\tEnter Book SL.No : ");
    scanf("%d", &id);

    FILE *ftemp;

    fptr = fopen("bba books.txt", "rb");
    ftemp = fopen("bbatemp.txt", "wb");
    while (fread(&b2, sizeof(b2), 1, fptr) == 1)
    {
        if (id == b2.sl_no)
        {
            f = 1;
        }
        else
        {
            fwrite(&b2, sizeof(b2), 1, ftemp);
        }
    }
    if (f = 1)
    {
        printf("\n\n\n\t\t\t\t\tBook delete seccussefully");
    }
    else
    {
        printf("\n\n\n\t\t\t\t\tBook delete filed");
    }
    fclose(ftemp);
    fclose(fptr);

    remove("bba books.txt");
    rename("bbatemp.txt", "bba books.txt");
    getch();
    system("cls");
    return 0;
}

// All BSc, BCA ,BBA delete function are call in this function
int dlt()
{
    system("cls");
    int ch;
    while (1)
    {
        printf("\n\t\t\t\t\tDelete Books\n\n");
        printf("\n\n\t\t\t1.BSc-CS(H)");
        printf("\n\n\t\t\t2.BCA");
        printf("\n\n\t\t\t3.BBA");
        printf("\n\n\t\t\t0.HOME");
        printf("\n\n\t\t\tChoose your branch :");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            dltbsc();
            break;
        case 2:
            dltbca();
            break;
        case 3:
            dltbba();
            break;
        case 0:
            main2();
            break;
        }
    }
    getch();
    system("cls");
    return 0;
}

// issu record for BSc
int bscrec()
{
    system("cls");
    printf("\n\t\t\t\t\t\tBSc-CS(H)\n\n");
    printf("\n\t\t\t\t\tStudent book issue record\n\n");

    fptr = fopen("bsc book student.txt", "rb");
    printf(" %-10s %-20s %-30s %-30s %-30s %s\n\n\n", "SL.NO.", "ROLL NO.", "SEMESTEAR", "STUDENT NAME", "ISSUE BOOK SL.NO.", "DATE");

    while (fread(&s, sizeof(s), 1, fptr) == 1)
    {

        printf("%-10d %-20s %-30s %-30s %-30d %s\n\n", s.std_no, s.rollNo, s.sam, s.name, s.slno, s.date);
    }
    fclose(fptr);
    getch();
    system("cls");
    return 0;
}

// issu record for BCA
int bcarec()
{

    system("cls");
    printf("\n\t\t\t\t\t\tBCA-CS(H)\n\n");
    printf("\n\t\t\t\t\tStudent book issue record\n\n");

    fptr = fopen("bca book student.txt", "rb");
    printf(" %-10s %-20s %-30s %-30s %-30s %s\n\n\n", "SL.NO.", "ROLL NO.", "SEMESTEAR", "STUDENT NAME", "ISSUE BOOK SL.NO.", "DATE");

    while (fread(&s1, sizeof(s1), 1, fptr) == 1)
    {

        printf("%-10d %-20s %-30s %-30d %-30d %s\n\n", s1.std_no, s1.rollNo, s1.sam, s1.name, s1.slno, s1.date);
    }
    fclose(fptr);
    getch();
    system("cls");
    return 0;
}

// issu record for BBA
int bbarec()
{
    system("cls");
    printf("\n\t\t\t\t\t\tBBA-CS(H)\n\n");
    printf("\n\t\t\t\t\t\tStudent book issue record\n\n");

    fptr = fopen("bba book student.txt", "rb");
    printf(" %-10s %-20s %-30s %-30s %-30s %s\n\n\n", "SL.NO.", "ROLL NO.", "SEMESTEAR", "STUDENT NAME", "ISSUE BOOK SL.NO.", "DATE");

    while (fread(&s2, sizeof(s2), 1, fptr) == 1)
    {
        printf("%-10d %-20s %-30s %-30s %-30d %s\n\n", s2.std_no, s2.rollNo, s2.sam, s2.name, s2.slno, s2.date);
    }

    fclose(fptr);
    getch();
    system("cls");
    return 0;
}

// All BSc, BCA ,BBA issu books function are call in this function
int bookrecord()
{
    system("cls");
    int ch;
    while (1)
    {
        printf("\n\t\t\t\tStudent Issue books records\n\n");
        printf("\n\n\t\t\t1.BSc-CS(H)");
        printf("\n\n\t\t\t2.BCA");
        printf("\n\n\t\t\t3.BBA");
        printf("\n\n\t\t\t0.HOME");
        printf("\n\n\t\t\tChoose your branch :");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            bscrec();
            break;
        case 2:
            bcarec();
            break;
        case 3:
            bbarec();
            break;
        case 0:
            main2();
            break;
        }
    }
    getch();
    system("cls");
    return 0;
}

// Delete for BSc issu books
int bscissudlt()
{
    system("cls");
    int id, f = 0;
    printf("\n\n\n\t\t\t\t\t\t\t\t<<<--Delete issu Book-->>?\n\n\n");
    printf("\n\n\t\t\t\t\tEnter Book SL.No : ");
    scanf("%d", &id);

    FILE *ftemp;

    fptr = fopen("bsc book student.txt", "rb");
    ftemp = fopen("bsc issu temp.txt", "wb");
    while (fread(&b, sizeof(b), 1, fptr) == 1)
    {
        if (id == b.sl_no)
        {
            f = 1;
        }
        else
        {
            fwrite(&b, sizeof(b), 1, ftemp);
        }
    }
    if (f = 1)
    {
        printf("Record delete seccussefully");
    }
    else
    {
        printf("record delete filed");
    }
    fclose(ftemp);
    fclose(fptr);

    remove("bsc book student.txt");
    rename("bsc issu temp.txt", "bsc book student.txt");
    getch();
    system("cls");
}

// Delete for BCA issu books
int bcaissudlt()
{
    system("cls");
    int id, f = 0;
    printf("\n\n\n\t\t\t\t\t\t\t\t<<<--Delete issu Book-->>?\n\n\n");
    printf("\n\n\t\t\t\t\tEnter Book SL.No : ");
    scanf("%d", &id);

    FILE *ftemp;

    fptr = fopen("bca book student.txt", "rb");
    ftemp = fopen("bca issu temp.txt", "wb");
    while (fread(&b1, sizeof(b1), 1, fptr) == 1)
    {
        if (id == b1.sl_no)
        {
            f = 1;
        }
        else
        {
            fwrite(&b1, sizeof(b1), 1, ftemp);
        }
    }
    if (f = 1)
    {
        printf("Record delete seccussefully");
    }
    else
    {
        printf("record delete filed");
    }
    fclose(ftemp);
    fclose(fptr);

    remove("bca book student.txt");
    rename("bca issu temp.txt", "bca book student.txt");
    getch();
    system("cls");
}

// Delete for BBA issu books
int bbaissudlt()
{
    system("cls");
    int id, f = 0;
    printf("\n\n\n\t\t\t\t\t\t\t\t<<<--Delete issu Book-->>?\n\n\n");
    printf("\n\n\t\t\t\t\tEnter Book SL.No : ");
    scanf("%d", &id);

    FILE *ftemp;

    fptr = fopen("bba book student.txt", "rb");
    ftemp = fopen("bba issu temp.txt", "wb");
    while (fread(&b2, sizeof(b2), 1, fptr) == 1)
    {
        if (id == b2.sl_no)
        {
            f = 1;
        }
        else
        {
            fwrite(&b1, sizeof(b2), 1, ftemp);
        }
    }
    if (f = 1)
    {
        printf("Record delete seccussefully");
    }
    else
    {
        printf("record delete filed");
    }
    fclose(ftemp);
    fclose(fptr);

    remove("bba book student.txt");
    rename("bca issu temp.txt", "bba book student.txt");
    getch();
    system("cls");
}

// All BSc, BCA ,BBA issu books delete function are call in this function
int dlt_issu_book()
{
    system("cls");
    int ch;
    while (1)
    {
        printf("\n\n\t\t\t1.BSc-CS(H)");
        printf("\n\n\t\t\t2.BCA");
        printf("\n\n\t\t\t3.BBA");
        printf("\n\n\t\t\t0.HOME");
        printf("\n\n\t\t\tChoose your branch :");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            bscissudlt();
            break;
        case 2:

            break;
        case 3:
            viewbba();
            break;
        case 0:
            main2();
            break;
        }
    }
    getch();
    system("cls");
    return 0;
}

// All called functions are call in this function and it's call main fumction
int main2()
{
    system("cls");
    int ch;
    while (1)
    {
        printf("\n\t\t\t\t<<____----Librabry Management System---___>>>");
        printf("\n\n\t\t\t\t\t\t\tHOME");
        printf("\n\n\n\t\t\t1.Add Books");
        printf("\n\n\t\t\t2.Issue Books");
        printf("\n\n\t\t\t3.View Books");
        printf("\n\n\t\t\t4.Delete Books");
        printf("\n\n\t\t\t5.Student Issue books records");
        printf("\n\n\t\t\t6.Student submit book");
        printf("\n\n\t\t\t0.Log out");
        printf("\n\n\n\n\t\t\tChoose a number: ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            addbooks();
            break;
        case 2:
            issubook();
            break;
        case 3:
            viewbook();
            break;
        case 4:
            dlt();
            break;
        case 5:
            bookrecord();
            break;
        case 6:
            bscissudlt();
            break;
        case 0:
            exit(0);
            break;
        }
    }
    getch();
}

int main()
{
    head();
    int ch;
    while (1)
    {
        system("cls");
        printf("\n\n\t\t\t\t\t\tLibrary Management System\n\a");
        printf("\n\n\n\t\t\t\t\t1.LOGIN");
        printf("\n\n\t\t\t\t\t2.REGESTATION");
        printf("\n\n\n\n\n\a\t\t\t\t\t\t\t\tChoose any one (1 & 2) : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            logi();
            break;
        case 2:
            regestation();
            break;
        }
    }

    return 0;
}