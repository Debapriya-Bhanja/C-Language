 // write a program to convert time to minutes.
 #include<stdio.h>
 int convert_time_to_mins(int hrs, int mins);
 int main(){
    int hrs,mins;
    printf("Enter hours and minutes: ");
    scanf("%d%d",&hrs,&mins);
    convert_time_to_mins(hrs,mins);
    return 0;

 }
 int convert_time_to_mins(int hrs, int mins){
    int total_mins;
    total_mins=hrs*60+mins;
    printf("Total minutes is: %d",total_mins);
    return 0;
 }
