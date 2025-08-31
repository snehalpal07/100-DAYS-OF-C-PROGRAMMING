#include<stdio.h>
int main(){
    int month;
    printf("enter a month (1-12):");
    scanf("%d", &month);

    switch(month){
 case 1:
  printf("january 31 days\n");
            break;
     case 2:
     printf("feburary 28 days\n");
    break;
     case 3:
     printf("march 31 days\n");
     break;
    case 4:
    printf("april 30 days\n");
    break;
    case5:
    printf("may 31 days\n");
    break;
    case 6:
    printf("june 30 days\n");

    case 7:
    printf("july 31 days\n");
    break;
    case 8:
    printf("august 31 days\n");
    break;
    case 9:
    printf("september 30 days\n");
    break;
    case 10:
    printf("october 31 days\n");
    break;
    case 11:
    printf("november 30 days\n");
    break;
    case 12:
    printf("december 31 days\n");
    break;
    default:
    printf("invalid month entered ! please enter number between 1-12");
    return 0;

    }