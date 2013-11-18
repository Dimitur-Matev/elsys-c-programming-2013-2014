#include<stdio.h>

int main(){

    int m1,m2,m5,m,x=0,y=0,z=0;

        scanf("%d %d %d %d",&m1,&m2,&m5,&m);

        while(m5!=0 & m-5>=0){

            z=z+1;
            m5=m5-1;
            m=m-5;

        }
        while(m2!=0 & m-2>=0){

            y=y+1;
            m2=m2-1;
            m=m-2;

        }
        while(m1!=0 & m-1>=0){

            x=x+1;
            m1=m1-1;
            m=m-1;

        }
        if(m==0){

            printf("Yes:%d,%d,%d",x,y,z);
        }else{
            printf("No");
        }


return 0;
}
