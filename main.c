#include <stdio.h>
//includes a file called stdio, where std for standard and input output

/*int main()
//int before main means that it needs an integer return
//main function is the beginning of the programming and there's only one of it

{
    int num1 = 9;
    int num2 = 9;
    scanf("%d%d",&num1,&num2);
    int sum = num1 + num2;
    printf("sum=%d\n",sum);
    char ch = 'A'; //given "A" to char ch
    printf("%c\n",ch); //%c prints character type data
    int age = 20; //no need single quotes due to numerical
    printf("%d\n",age); //%d prints decimal data
    printf("Hello, World!\n");
    short weight = 75; //apply 2 bytes memory to save 75
    printf("%d\n", weight);
    return 0;*//*
  *//*const int aj=13; //const function declared variable constantly
          printf("%d",aj);
          return 0;*//*
  int line = 0;
  while(line<20000)
  {
      printf("one line finished\n");
      line++;
  }
    printf("Well done\n");
    return 0;
}*/

/*int equal (int x, int y)
{
    int z = x + y;
    return z;
}

int main ()
{
    int num1 = 0;
    int num2 = 0;
    int sum = 0;
    printf("Input 2 numbers to achieve result:\n");
    scanf("%d%d",&num1,&num2);
    sum = equal(num1,num2);
    printf("sum is equal to %d\n",sum);
    int com[3] = {100,200,300}; //Array definition
    int i = 0;
    while(i<3)
    {
        printf("%d\n",com[i]);
        i++;
    }
    int a = 10;
    a = 20;
    a = a + 10; //1
    a += 10; //2
    printf("%d",a);

    return 0;
}*/

/*int main()
{
    int a = 10;
    int b = a--; //give value first and minus1
    printf("a = %d, b = %d\n",a,b);
    int x = 10;
    int y = 15;
    int max;
    max = (x > y ? x:y);
    printf ("%d\n",max);

}*/

/*
void test()
{
    static int a = 1;
    a++;
    printf("a = %d\n",a);
}

int main()
{
    int i = 0;
    while (i < 5)
    {
        test();
        i++;
    }
}*/

/*
int main()
#define num 100
{
    int a = num;
    printf("a = %d\n",a);
    return 0;

}*/
//Macro
#define MAX(X,Y) (X>Y?X:Y)
int Max(int x, int y)
{
    if (x>y)
        return x;
    else
        return y;
}

/*
int main()
{
    int a = 10;
    int b = 50;
//    Function
    int max = Max(a,b);
    printf("The larger number is %d\n",max);
//    Macro
    max = MAX(a,b);
    printf("The larger number is %d (Macro way)\n",max);
    return 0;
}*/

int main()
{
    int a = 10;
    printf("address is %p\n",&a);
    int* p = &a;
    printf("point is %p\n",p);
    printf("%d\n",sizeof(p));
    return 0;
}