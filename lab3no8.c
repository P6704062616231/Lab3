#include<stdio.h>
int main(){
    int h,m,s;
    scanf("%d:%d:%d",&h ,&m ,&s);
    printf("hour:%d\nminute:%d\nsecond:%d\n",h ,m ,s);
    
    int add;
    printf("next minute:");
    scanf("%d",&add);
    m += add;
    
    h += m / 60;
    m =  m % 60;
    h = h % 24;
    
    printf("Time:%02d:%02d:%02d",h , m , s);
    return 0;
}
