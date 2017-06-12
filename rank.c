//
//  rank.c
//  test
//
//  Created by w20161104602 on 2017/6/12.
//  Copyright © 2017年 w20161104602. All rights reserved.
//
#include<stdio.h>
int main()
{
    int a[10];
    int q,w,e;
    for(q=0; q<10; q++)
        scanf("%d",&a[q]);
    for(q=0; q<9-w; q++)
    {
        if(a[q]>a[q+1])
        {
            e=a[q];
            a[q]=a[q+1];
            a[q+1]=e;
        }
    }
    for(q=0;q<10;q++)
        printf("%d",&a[q]);
    printf("\n");
    return 0;

}
