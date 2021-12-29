#include <stdio.h>

char so_nguyen_to(int so)
{
    int i = 2;
    while (i < so)
    {
        if (so % i == 0)
            return 0;
        i = i + 1;
    }
    return 1;
}

int main()
{
    int a = 7;
    if(so_nguyen_to(7)){
        printf("A la so nguyen to\n");
    }
    else{
        printf("A khong phai so nguyen to\n");
    }
    return 0;
}