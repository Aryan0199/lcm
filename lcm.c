#include <stdio.h>
int res;
int c1=1;
int multi(int x,int y){
    if(y%x==0){
        res=y;
        return 1;
    }
    else{
        return 0;
    }
}
int lcm(n,m){
    if(multi(n,c1)==1 && multi(m,c1)==1 ){
            return 1;
    }
    else{
        c1++;
        return lcm(n,m);
    }

}
int main(){
    int a,b;
    printf("Enter the two numbers\n");
    scanf("%d",&a);
    scanf("%d",&b);
    lcm(a,b);
    printf("LCM of the %d and %d is %d",a,b,res);
    return 0;

}
