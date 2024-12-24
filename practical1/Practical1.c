#include <stdio.h>
#include <conio.h>
#include <string.h>

int main(){
char input [100];

printf("Enter a string: ");
scanf("%s",input);

int len = strlen(input);

if (len>=2 && input[len-1]== 'b' && input[len-2]=='b'){

    int valid=1;
    for (int i=0; i< len - 2; i++ ){

        if (input[i]!='a'){
            valid=0;
            break;
        }
    }

    if (valid){
        printf("Valid string \n");

    }
    else{

        printf ("Invalid string \n");
    }

}
    else{
        printf("Invalid string \n");
    }

return 0;

}
