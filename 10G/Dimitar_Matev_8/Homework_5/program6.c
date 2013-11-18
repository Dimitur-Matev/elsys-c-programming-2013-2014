#include<stdio.h>

int main(){

    int arr[5][5];
    int i=1,z=1;

        for(i=1;i<=4;i++){

            for(z=1;z<=4;z++){

                scanf("%d",&arr[i][z]);
            }

        }

        for(z=1;z<=4;z++){

            for(i=1;i<=4;i++){

                printf("%d",arr[i][z]);
                if(i==4){
                    printf("\n");
                }
            }

        }


return 0;
}
