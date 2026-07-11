#include<stdio.h>
int main(){
    int e ;
    printf("Enter marks of english:- ");
    scanf("%d",&e);
    int m ;
    printf("Enter marks of maths:- ");
    scanf("%d",&m);
    int h ;
    printf("Enter marks of hindi:- ");
    scanf("%d",&h);
    int s ;
    printf("Enter marks of science:- ");
    scanf("%d",&s);
    int sst ;
    printf("Enter marks of social science:- ");
    scanf("%d",&sst);

    int sum ;
    sum = e+m+h+s+sst ;
    printf("\nthe total marks obtained by student is:- %d",sum);

    float perc ;
    perc = sum/5.0;

    printf("\nthe total percentage is:- %.2f", perc);

    char grade ;
    if(perc>=90){
        grade = 'A' ;
            printf("\nGrade A ");
        }
        else if (perc>=80){
            grade = 'B' ;
            printf("\nGrade B ");
        }
        else if(perc>=70){
        grade = 'C' ;
            printf("\nGrade C ");
        }
        else if(perc>=60){
        grade = 'D' ;
            printf("\nGrade D ");
        }
        else if(perc>=34){
            grade = 'E' ;
            printf("\nGrade E ");
        }
        else if(perc<=33){
            grade = 'F' ;
            printf("\nGrade F ");
        }

    printf("\n====================================");
    printf("\n        STUDENT REPORT CARD         ");
    printf("\n====================================");

    printf("\nTotal Marks :- %d",sum);
    printf("\nPercentage :- %.2f",perc);
    printf("\nGrade :- %c",grade);
    if(perc>=34){
            printf("\nResult : PASS");
        }
        else { 
            printf("\nResult : FAIL");
        }

    printf("\n====================================");
    printf("\nThank You!");
    printf("\n====================================");

    
return 0 ; }

    




