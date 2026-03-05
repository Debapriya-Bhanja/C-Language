//
#include<stdio.h>
int main(){
int choice;
printf("....Traffic Light Simulation....\n");
printf("1. Red\n");
printf("2. Yellow\n");
printf("3. Green\n");
printf("Enter the light colour(1-3): ");
scanf("%d",&choice);
switch(choice){
   case 1:
         printf ("Red Light - STOP\n");
        break;
    case 2: 
        printf("Yellow Light - GET READY\n");
        break;
    case 3:
        printf("Green Light - GO\n");
        break;
    default:
        printf("Invalid choice.try again\n");           
}
return 0;
}
