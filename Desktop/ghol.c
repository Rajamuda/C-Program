#include <stdio.h>
#include <string.h>
  
int main(){
char in[5];
  
//Rock: RO, Paper: PA, Scisscors: SC, Lizard: LI, Spock: SP
  
scanf("%s",in);
  
if (strcasecmp(in,"sc?pa")==0)/*1*/{
    printf("LEFT\n");
} 
else if (strcasecmp(in,"pa?sc")==0){
    printf("RIGHT\n");
} 
else if (strcasecmp(in,"pa?ro")==0)/*2*/ {
    printf("LEFT\n");
} 
else if(strcasecmp(in,"ro?pa")==0) {
    printf("RIGHT\n");
} 
else if (strcasecmp(in,"ro?li")==0)/*3*/{
    printf("LEFT\n");
} 
else if(strcasecmp(in,"li?ro")==0) {
    printf("RIGHT\n");
} 
else if (strcasecmp(in,"li?sp")==0)/*4*/{
    printf("LEFT\n");
} 
else if (strcasecmp(in,"sp?li")==0){
    printf("RIGHT\n");
}
else if (strcasecmp(in,"sp?sc")==0)/*5*/{
    printf("LEFT\n");
}
else if (strcasecmp(in,"sc?sp")==0) {
    printf("RIGHT\n");
} 
else if (strcasecmp(in,"sc?li")==0)/*6*/{
    printf("LEFT\n");
} 
else if (strcasecmp(in,"li?sc")==0){
    printf("RIGHT\n");
} 
else if (strcasecmp(in,"li?pa")==0)/*7*/{
    printf("LEFT\n");
} 
else if (strcasecmp(in,"pa?li")==0){
    printf("RIGHT\n");
} 
else if (strcasecmp(in,"pa?sp")==0)/*8*/{
    printf("LEFT\n");
} 
else if (strcasecmp(in,"sp?pa")==0){
    printf("RIGHT\n");
}
else if (strcasecmp(in,"sp?ro")==0)/*9*/{
    printf("LEFT\n");
} 
else if(strcasecmp(in,"ro?sp")==0){
    printf("RIGHT\n");
} 
else if (strcasecmp(in,"ro?sc")==0)/*10*/{
     printf("LEFT\n");
} 
else if(strcasecmp(in,"sc?ro")==0){
    printf("RIGHT\n");
} else
    printf("ERROR\n");
 
return 0;
}