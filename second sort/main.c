//
//  main.c
//  second sort
//
//  Created by w20161104571 on 17/6/12.
//  Copyright © 2017年 w20161104571. All rights reserved.
//

#include <stdio.h>

void main()
{
    FILE *fin;
    int a[10],k;
    int i,j;
    fin=fopen("sort.pages","r");
    for(i=0;i<10;i++)
    {
        scanf(fin,"%d",&a[i]);
    }
    fclose(fin);
    for(i=0;i<9;i++)
    {
        for(j=0;j<9-i;j++)
        {
            if(a[j]>a[j+1])
            {
                k=a[j];
                a[j]=a[j+1];
                a[j+1]=k;
            }
        }
    }
    for(i=0;i<10;i++)
    {
        printf("%d ",a[i]);
    }
}

