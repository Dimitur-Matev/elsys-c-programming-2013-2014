#include<stdio.h>
#include<stdlib.h>

int main(){

    int i,z,a,c;
    char str[14];
    int b[14];
    char h;


        for (i=1,z=1;i<=13,z<=13;i++,z++){


            scanf("%c",&str[i]);

            if (str[i]!='2'|| str[i]!='3'|| str[i]!='4'||
                str[i]!='5'|| str[i]!='6'|| str[i]!='7'||
                str[i]!='8'|| str[i]!='9'|| str[i]!='T'||
                str[i]!='J'|| str[i]!='Q'|| str[i]!='K'||
                str[i]!='A'){

                    c=0;
                }else{
                    c=1;
                switch (str[i]){

                    case '2': b[z] = 2;
                    case '3': b[z] = 3;
                    case '4': b[z] = 4;
                    case '5': b[z] = 5;
                    case '6': b[z] = 6;
                    case '7': b[z] = 7;
                    case '8': b[z] = 8;
                    case '9': b[z] = 9;
                    case 'T': b[z] = 10;
                    case 'J': b[z] = 11;
                    case 'Q': b[z] = 12;
                    case 'K': b[z] = 13;
                    case 'A': b[z] = 14;
                }
            }
        }

        for (z=1;z<=13;z++){

                if(b[z]>b[z+1]){
                    h=b[z];
                    b[z]=b[z+1];
                    b[z+1]=h;
                }
        }
        if(c==1){
                for(z=1;z<=13;z++){

                   switch (b[z]){

                    case 10: printf("T"); break;
                    case 11: printf("J"); break;
                    case 12: printf("Q"); break;
                    case 13: printf("K"); break;
                    case 14: printf("A"); break;
                    default : printf("%d",b[z]); break;
                   }
    }


        }else{
            printf("error\n");
        }

return 0;
}
