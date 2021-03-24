/*
   This code allows to create a linked struct of any type
   */

#include<stdio.h>

#define PMDK_SLIST_ENTRY(type) \
struct{\
    struct type * next; \
}


struct test{
    PMDK_SLIST_ENTRY(test) entry;
    int num;
};

int main(){
    struct test t1;
    struct test t2;
    t1.num = 10;
    t1.entry.next= &t2;
    printf("num:%d-- address:%p -- address:%p\n",t1.num,t1.entry.next,&t2);
    return 0;
}
