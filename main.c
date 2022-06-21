#include <stdio.h>

/*
int main()
{
    int age=0;
    printf("Please input your age:\n");
    scanf("%d",&age); // \n cannot be used in scanf function as \n tells scanf to ignore space
    if(age<18)
        printf("Not adult\n");
    else if(age>=18 && age<28) //cannot use 18<age<28 as C recognize it as 18<age -- yes (1) -- <28
        printf("Teenager\n");
    else if(age>=28 && age<50)
        printf("Mature\n");
    else if(age>=50 && age<90)
        printf("Elder\n");
    else if(age>= 90)
        printf("Wow");
    return 0;
}*/

/*
int main()
{
    int i=0;
    while(i<=100)
    {
        if(i%2==1)
            printf("%d ",i);
        i++;
    }
    return 0;
}*/

/*
int main()
{
    int n = 1;
    int m = 2;
    switch (n)
    {
        case 1:
            m++;
        case 2:
            n++;
        case 3:
            switch (n)
            {
                case 1:
                    n++;
                case 2:
                    m++;
                    n++;
                    break;
            }
        case 4:
            m++;
            break;
        default:
            break;
    }
        printf("m = %d, n = %d\n",m,n);
        return 0;
}*/

int main()
{
    int i = 0;
    while(i<=10)
    {
        printf("%d ",i);
        i++;
    }
    return 0;
}