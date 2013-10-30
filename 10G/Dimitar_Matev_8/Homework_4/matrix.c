#include <stdio.h>
#include <stdlib.h>

int main() {

    float i,n,z,s=0,ce;
    
    scanf("%f",&n);
    
    	    for(i=1;i<=n;i++){
    	    
        	for(z=1;z<=n;z++){
        	
        	    scanf("%f", &ce);
        	    
        	      if(z>i){
        	      
        	        s=ce+s;
        	      }
     	        }
       	    }

    printf("%f\n",s);

return 0;
}
