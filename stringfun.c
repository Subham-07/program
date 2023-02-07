#include<stdio.h>

void upper(char* str){
    int i=0;
    while(str[i]!='\0'){
        if(str[i]>='A' && str[i]<='Z'){
            str[i]=str[i]+32;
        }
        i++;
    }
    printf("%s\n",str);
}

void lower(char* str){
    int i=0;
    while(str[i]!='\0'){
        if(str[i]>='a' && str[i]<='z'){
            str[i]=str[i]-32;
        }
        i++;
    }
    printf("%s\n",str);
}

int length(char* str){
    int i=0;
    int len=0;
    while(str[i]!='\0'){
        i++;
        len+=1;
    }
    return len;
}

void split(char* str){
    int index;
    printf("Enter the index to split:");
    scanf("%d",&index);
    int len=length(str);
    len+=1;
    for(int i=len;i>index;i--){
        str[i]=str[i-1];
    }
    str[index]='\0';
    printf("%s\n",str);
}

int main(){
    char str[25];
    printf("Enter the string:");
    scanf("%[^\n]",str);
    int len=length(str);
    printf("%d\n",len);
    upper(str);
    lower(str);
    split(str);
}
