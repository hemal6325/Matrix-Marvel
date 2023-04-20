#include <stdio.h>
#include <stdlib.h>


#define note "You Entered Invalid Operation."


int main()

{
    int choice;

    printf("\n\t\t\t Matrix Marvel | Calculator \n\n");
    printf("\n\t DAFFODIL INTERNATIONAL UNIVERTISY       \n");
    printf("\t Daffodil Smart City, Ashulia, Dhaka-1341, Bangladesh.\n \n");

    printf("\t Department of Software Engineering.\n \n");

    printf("\t Copyright : \n");
    printf("\t MD Rohejul Islam Hemal - 2023 - All Rights Reserved. \n \n \n");


    printf("\n \t******* Press 0 to 3 The Program ********\n\n");
    printf("\t> 01 --------------------------- Addition. \n");
    printf("\t> 02 --------------------------- Substraction. \n");
    printf("\t> 03 --------------------------- Multiplication. \n");

    while(1)
    {
        printf("\n\n \tEnter The Service You Want To Do : ");

        scanf("%d",&choice);

        switch(choice){
        case 1:
            addition();
            break;
        case 2:
            substraction();
            break;
        case 3:
            multiplication();
            break;
        case 0:
            exit(0);

        default:
            printf("\n********** %s ***********\n",note);
        }
    }
    return 0;
}

void addition(){
    int a[10][10];
    int b[10][10];
    int result[10][10];
    int i;
    int j;
    int r1;
    int r2;
    int c1;
    int c2;

    printf("\n\n\tEnter How Many Rows For First Matrix You Need : ");
    scanf("%d", &r1);

    printf("\tEnter How Many Columns For First Matrix You Need : ");
    scanf("%d", &c1);

    printf("\n\tEnter How Many Rows For Second Matrix You Need : ");
    scanf("%d", &r2);

    printf("\tEnter How Many Columns For Second Matrix You Need : ");
    scanf("%d", &c2);

    while(c1 != r2){
        printf("\n\n\tError !!. Re-Enter Please : ");

        printf("\n\n\tEnter How Many Rows For First Matrix You Need : ");
    scanf("%d", &r1);

    printf("\tEnter How Many Columns For First Matrix You Need : ");
    scanf("%d", &c1);

    printf("\n\tEnter How Many Rows For Second Matrix You Need : ");
    scanf("%d", &r2);

    printf("\tEnter How Many Columns For Second Matrix You Need : ");
    scanf("%d", &c2);
    }

    //Input First Matrix
    printf("\n\n");
    for(i = 0; i < r1; i++){
        for(j = 0; j < c1; j++){
            printf("\tA Matrix [%d][%d] : ", i, j);
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }

    //Input Second Matrix
    printf("\n\n");
    for(i = 0; i < r2; i++){
        for(j = 0; j < c2; j++){
            printf("\tB Matrix [%d][%d] : ", i, j);
            scanf("%d", &b[i][j]);
        }
        printf("\n");
    }

    //Print Result Matrix
    printf("\n\n");
    printf("\tAddition Result Matrix : \n\n");
    for(i = 0; i < r1; i++){
        for(j = 0; j < c1; j++){
            result[i][j] = a[i][j] + b[i][j];
        }
    }

    //Output First Matrix
    printf("\n\n");
    printf("\tFirst Matrix : \n\n");
    for(i = 0; i < r1; i++){
        for(j = 0; j < c1; j++){
            printf("\t %d", a[i][j]);
        }
        printf("\n");
    }

    //Output Second Matrix
    printf("\n\n");
    printf("\tSecond Matrix : \n\n");
    for(i = 0; i < r2; i++){
        for(j = 0; j < c2; j++){
            printf("\t %d", b[i][j]);
        }
        printf("\n");
    }

    //Output Addition Result Matrix
    printf("\n\n");
    printf("\tAddition Result Matrix : \n\n");
    for(i = 0; i < r1; i++){
        for(j = 0; j < c1; j++){
            printf("\t %d", result[i][j]);
        }
        printf("\n");
    }
}

void substraction(){
    int a[10][10];
    int b[10][10];
    int result[10][10];
    int i;
    int j;
    int r1;
    int r2;
    int c1;
    int c2;

    printf("\n\n\tEnter How Many Rows For First Matrix You Need : ");
    scanf("%d", &r1);

    printf("\tEnter How Many Columns For First Matrix You Need : ");
    scanf("%d", &c1);

    printf("\n\tEnter How Many Rows For Second Matrix You Need : ");
    scanf("%d", &r2);

    printf("\tEnter How Many Columns For Second Matrix You Need : ");
    scanf("%d", &c2);

    while(c1 != r2){
        printf("\n\n\tError !!. Re-Enter Please : ");

        printf("\n\n\tEnter How Many Rows For First Matrix You Need : ");
    scanf("%d", &r1);

    printf("\tEnter How Many Columns For First Matrix You Need : ");
    scanf("%d", &c1);

    printf("\n\tEnter How Many Rows For Second Matrix You Need : ");
    scanf("%d", &r2);

    printf("\tEnter How Many Columns For Second Matrix You Need : ");
    scanf("%d", &c2);
    }

    //Input First Matrix
    printf("\n\n");
    for(i = 0; i < r1; i++){
        for(j = 0; j < c1; j++){
            printf("\tA Matrix [%d][%d] : ", i, j);
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }

    //Input Second Matrix
    printf("\n\n");
    for(i = 0; i < r2; i++){
        for(j = 0; j < c2; j++){
            printf("\tB Matrix [%d][%d] : ", i, j);
            scanf("%d", &b[i][j]);
        }
        printf("\n");
    }

    //Print Result Matrix
    printf("\n\n");
    printf("\tSubstraction Result Matrix : \n\n");
    for(i = 0; i < r1; i++){
        for(j = 0; j < c1; j++){
            result[i][j] = a[i][j] - b[i][j];
        }
    }

    //Output First Matrix
    printf("\n\n");
    printf("\tFirst Matrix : \n\n");
    for(i = 0; i < r1; i++){
        for(j = 0; j < c1; j++){
            printf("\t %d", a[i][j]);
        }
        printf("\n");
    }

    //Output Second Matrix
    printf("\n\n");
    printf("\tSecond Matrix : \n\n");
    for(i = 0; i < r2; i++){
        for(j = 0; j < c2; j++){
            printf("\t %d", b[i][j]);
        }
        printf("\n");
    }

    //Output Addition Result Matrix
    printf("\n\n");
    printf("\tSubstraction Result Matrix : \n\n");
    for(i = 0; i < r1; i++){
        for(j = 0; j < c1; j++){
            printf("\t %d", result[i][j]);
        }
        printf("\n");
    }
}

void multiplication(){
    int a[10][10];
    int b[10][10];
    int result[10][10];
    int i;
    int j;
    int k;
    int r1;
    int r2;
    int c1;
    int c2;
    int sum = 0;

    printf("\n\n\tEnter How Many Rows For First Matrix You Need : ");
    scanf("%d", &r1);

    printf("\tEnter How Many Columns For First Matrix You Need : ");
    scanf("%d", &c1);

    printf("\n\tEnter How Many Rows For Second Matrix You Need : ");
    scanf("%d", &r2);

    printf("\tEnter How Many Columns For Second Matrix You Need : ");
    scanf("%d", &c2);

    while(c1 != r2){
        printf("\n\n\tError !!. Re-Enter Please : ");

        printf("\n\n\tEnter How Many Rows For First Matrix You Need : ");
    scanf("%d", &r1);

    printf("\tEnter How Many Columns For First Matrix You Need : ");
    scanf("%d", &c1);

    printf("\n\tEnter How Many Rows For Second Matrix You Need : ");
    scanf("%d", &r2);

    printf("\tEnter How Many Columns For Second Matrix You Need : ");
    scanf("%d", &c2);
    }

    //Input First Matrix
    printf("\n\n");
    for(i = 0; i < r1; i++){
        for(j = 0; j < c1; j++){
            printf("\tA Matrix [%d][%d] : ", i, j);
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }

    //Input Second Matrix
    printf("\n\n");
    for(i = 0; i < r2; i++){
        for(j = 0; j < c2; j++){
            printf("\tB Matrix [%d][%d] : ", i, j);
            scanf("%d", &b[i][j]);
        }
        printf("\n");
    }

    //Print Result Matrix
    printf("\n\n");
    printf("\tResult Matrix : \n\n");
    for(i = 0; i < r1; i++){
        for(j = 0; j < c2; j++){
            for(k = 0; k < c1; k++){
                sum = sum + a[i][k] * b[k][j];
            }
            result[i][j] = sum;
            sum = 0;
        }
    }

    //Output First Matrix
    printf("\n\n");
    printf("\tFirst Matrix : \n\n");
    for(i = 0; i < r1; i++){
        for(j = 0; j < c1; j++){
            printf("\t %d", a[i][j]);
        }
        printf("\n");
    }

    //Output Second Matrix
    printf("\n\n");
    printf("\tSecond Matrix : \n\n");
    for(i = 0; i < r2; i++){
        for(j = 0; j < c2; j++){
            printf("\t %d", b[i][j]);
        }
        printf("\n");
    }

    //Output Result Matrix
    printf("\n\n");
    printf("\tResult Matrix : \n\n");
    for(i = 0; i < r1; i++){
        for(j = 0; j < c2; j++){
            printf("\t %d", result[i][j]);
        }
        printf("\n");
    }
}
