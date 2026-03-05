 // write a program to implement linear search

 #include<stdio.h>
 int main(){
    int arr[10],key,i,n,pos=-1;
    printf("\n Enter the number of element in the array: ");
    scanf("%d",&n);
    printf("\n Enter the elements: ");
     for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    //for(i=0;i<n;i++)
    printf("Enter the number that has to be searched: ");
    scanf("%d",&key);
    for(i=0;i<n;i++){
        if(arr[i]==key){
            
            pos=i;
            printf("%d is found in the array at position=%d",key,i);
            break;
        }
    }
    if(pos==-1)
    printf("%d does not exist in the array",key);
    return 0;

 }
