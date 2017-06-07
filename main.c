//
//  main.c
//  orders
//
//  Created by 20161104579 on 2017/6/7.
//  Copyright © 2017年 20161104579. All rights reserved.
//

#include <stdio.h>

int main()
{
    int a,b,c,t;
    while(scanf("%d %d %d",&a,&b,&c)!=EOF)
    {
        if(a>b)
        {
            t=a;
            a=b;
            b=t;
        }
        if(b>c)
        {
            t=b;
            b=c;
            c=t;
        }
        if(a>c)
        {
            t=a;
            a=c;
            c=t;
        }
        printf("%d %d %d",a,b,c);
    }
    return 0;
}
