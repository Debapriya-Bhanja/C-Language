//

 #include<stdio.h>
 int gcd(int x , int y){
    int gcd;
for(int i=1;i<=x && i<=y;i++){
    if(x%i==0 && y%i==0){
        gcd=i;
        return gcd;
    }
    
}

 }
 int main(){
    int x,y,ans;
printf("Enter the two numbers: ");
scanf("%d%d",&x,&y);
    ans=gcd( x ,  y );
    printf("The gcd is: %d",ans);

    return 0;
 }
