#include<stdio.h>

int main(){

    int n;
    char arr[100];
    arr[1]="edno";
    arr[2]="dve";
    arr[3]="tri";
    arr[4]="chetiri";
    arr[5]="pet";
    arr[6]="shest";
    arr[7]="sedem";
    arr[8]="osem";
    arr[9]="devet";
    arr[20]="dvadeset";
    arr[30]="trideset";
    arr[40]="chetirideset";
    arr[50]="petdeset";
    arr[60]="shestdeset";
    arr[70]="sedemdeset";
    arr[80]="osemdeset";
    arr[90]="devetdeset";
    scanf("%d",n);


    switch(n){
          /*case 0: printf("nula");
          case 1: printf("endo");
          case 2: printf("dve");
          case 3: printf("tri");
          case 4: printf("chetiri");
          case 5: printf("pet");
          case 6: printf("shest");
          case 7: printf("sedem");
          case 8: printf("osem");
          case 9: printf("devet");*/
          case 10: printf("deset");
          case 11: printf("edinadeset");
          case 12: printf("dvanadeset");
          case 13: printf("trinadeset");
          case 14: printf("chetirinadeset");
          case 15: printf("petnadeset");
          case 16: printf("shestnadeset");
          case 17: printf("sedemnadeset");
          case 18: printf("osemnadeset");
          case 19: printf("devetnadeset");
    }

    if(n>0 & n<99){

        if(n>20 & n<30){
            printf("%c i %c",arr[20],arr[n%10]);
        }else{

            if(n>30 & n<40){
                printf("%c i %c",arr[30],arr[n%10]);
            }else{
                if(n>40 & n<50){
                    printf("%c i %c",arr[40],arr[n%10]);
                }else{
                    if(n>50 & n<60){
                        printf("%c i %c",arr[50],arr[n%10]);
                    }else{
                        if(n>60 & n<70){
                            printf("%c i %c",arr[60],arr[n%10]);
                        }else{
                            if(n>70 & n<80){
                                printf("%c i %c",arr[70],arr[n%10]);
                            }else{
                                if(n>80 & n<90){
                                    printf("%c i %c",arr[80],arr[n%10]);
                                }else{
                                    if(n>90 & n<99){
                                        printf("%c i %c",arr[90],arr[n%10]);
                                    }else{
                                        printf("%c",arr[n%10]);

                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
return 0;
}
