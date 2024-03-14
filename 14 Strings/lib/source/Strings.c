#include <../header/Strings.h>
#include<string>

void init(String s){
    s.len = 0;
    gets(s.str,"");
    s.size = 255;
}

void print(String s){
    int i;
    printf("%s\n",s.str);
}

int getLength(String s){
    int i;
    for(i=0; i!='\0'; i++){i++;}
    return i;
}

void read(String s){
    gets(s.str);   
    s.len = getLength(s);
}

