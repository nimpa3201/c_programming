#include <stdio.h>

char *strTok(char *str1,const char *str2){
    static char *_Str;
    const char *_daf;
    if (str1==NULL){
      str1=_Str;
    }
    else {
        _Str=str1;
    }
    while (*_Str){
        _daf=str2;
        while(*_daf){
            if (*_Str==*_daf){
                *_Str='\0';
	        _Str++;
	        return str1;
            }
            _daf++;
        }
        _Str++;
	if (_Str == '\0') return NULL;
    }
    return str1;
}

int main() {
    char *result ;
    char str[20]="I like apple.";
    result = strTok(str," ");
    while(result!=NULL){
        printf("%s\n",result);
        result =strTok(NULL," ");
    }
}
