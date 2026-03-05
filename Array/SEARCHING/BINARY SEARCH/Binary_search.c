 // write a program to implement binary search

 #include<stdio.h>
 int main(){
    
    int arr[10],key,i,n,pos=-1,str,end,mid;
    printf("Enter the number of elements in the array: ");
    scanf("%d",&n);
    printf("Enter the elements: ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the number that has to be searched: ");
    scanf("%d",&key);

    str=0,end=n-1;
    while(str<=end){
        mid=(str+end)/2;
        if(arr[mid]==key){
            printf("%d is present in the array at position =%d",key,mid);
            return 0;
        
            break;
        }
        else if (arr[mid]>key)
          end = mid-1;
        else
          str = mid+1;
    }
    if(pos==-1 )
    printf("%d does not exist in the array",key);
    return 0;
 }
