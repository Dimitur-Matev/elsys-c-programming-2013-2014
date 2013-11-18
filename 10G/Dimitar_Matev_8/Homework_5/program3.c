#include<stdio.h>

int main(){

    int arr[10];
    int b[10];
    int i,c=-1,z,x;

        for(i=1;i<=10;i++){

            scanf("%d",&arr[i]);

        }

        if(arr[1]==0){
            printf("error\n");
            return 0;
        }else{



            for(x=0;x<=10;x++){

                for(i=1;i<=10;i++){

                    if( x==arr[i]){

                        c=c+1;
                    }

                }
                if(c>1){
                    printf("%d : %d\n",x,c);
                }
                c=-1;
            }
        }


return 0;
}
