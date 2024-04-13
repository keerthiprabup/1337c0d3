#include<stdio.h>
#include <string.h>

int *data(char s){
    switch(s){
        case 'I':
            return (int[]){1,1};
        case 'V':
            return (int[]){2,5};
        case 'X':
            return (int[]){3,10};
        case 'L':
            return (int[]){4,50};
        case 'C':
            return (int[]){5,100};
        case 'D':
            return (int[]){6,500};
        case 'M':
            return (int[]){7,1000};
        default:
            return (int[]){0,0};
    }
}

int romanToInt(char* s) {
    int i,result=0;
    int length = strlen(s);
    int *curr=data(s[length-1]);
    result+=curr[1];
    for(i=length-2;i>=0;i--){
        curr=data(s[i]);
        int *post=data(s[i+1]);
        if(curr[0]<post[0])
            result-=curr[1];
        else if(curr[0]>=post[0])
            result+=curr[1];
    }
    return(result);
}

int main(){
    char str[9]; 
    printf("Enter a string: ");
    scanf("%s", str);
    int result=romanToInt(str);
    printf("%d",result);
    
    return(0);
}
