#include <stdio.h>
#include <stdlib.h>
#include<windows.h>
#include<string.h>
int main()
{
    char pin[100];
    char correctpin[] = "5858";
    int choice;
    int timer=2;


    while (timer>=0){

    printf ("enter pin\n");
    scanf ("%99s",&pin);
    if(strlen(pin)< 4){
        printf ("pin too short\n");
         printf ("%d trials remaining\n",timer);
    }else if(strlen(pin) > 4){
    printf("pin is too long\n");
     printf ("%d trials remaining\n",timer);
     }else{
    printf("pin is exactly 4 digits\n");
    if(strcmp(pin, correctpin) == 0){
    printf("\n===Device menu===");
    printf("\n   1.Open door");
    printf("\n   2.Change Username");
    printf("\n   3.Change PIN");
    printf("\n   4.Exit PIN :");

    scanf("%d",&choice);
    switch(choice){
    case 1 : printf("Access granted. Door unlocked\n");
    return 0;
    case 2 : printf("Change username feature coming soon\n");
     return 0;
    case 3 : printf("Change PIN feature coming soon\n");
     return 0;
    case 4 : printf("Exiting system\n");
    return 0;
    default : printf("Invalid option! Please try again\n");
     break;
    }

    }else{
    printf("invalid pin\n");
    printf ("%d trials remaining\n",timer);
    timer--;

    }
    if(timer<0){
            printf("\nToo many incorrect attempts!\n");
            printf("Please wait 5 seconds...\n");
      for(int i=5;i>0;i--){
        Sleep(1000);
        printf("%d\n",i);
      } timer=2;
      printf("You can try again now\n");}
          }


    }
    return 0;
}
