#include"stdio.h"
int main(){
   char line[200];
   int i=0;
   printf("Enter a line of code:\n");
   fgets(line,sizeof(line),stdin);
   if(line[i]=='/'){
    i++;
   if(line[i]=='/'){
        printf("it is a single line comment. \n");
    }
    else if(line[i]=='*'){
        i++;
    
    while(line[i] !='\0'&& line[i+1] !='\0'){
        if(line[i]=='*'&& line[i+1]=='/'){
            printf("it is a multi line comment. \n");
            return 0;
        }
        i++;
}
printf("it is multi line comment\n");
    }
else{
    printf("it is not a comment. \n");
   }}
   else{
    printf("it is not a comment. \n");
   }
   return 0;
}