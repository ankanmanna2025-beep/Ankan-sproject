
#include <stdio.h>

void square()
{
    int n, style;

    printf("Enter side length: ");
    scanf("%d", &n);

    printf("1. Hollow\n2. Filled\n");
    printf("Choose style: ");
    scanf("%d", &style);

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(style == 2 || i == 0 || i == n-1 || j == 0 || j == n-1)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
}

void rectangle()
{
    int w, h, style;

    printf("Enter width: ");
    scanf("%d", &w);

    printf("Enter height: ");
    scanf("%d", &h);

    printf("1. Hollow\n2. Filled\n");
    printf("Choose style: ");
    scanf("%d", &style);

    for(int i = 0; i < h; i++)
    {
        for(int j = 0; j < w; j++)
        {
            if(style == 2 || i == 0 || i == h-1 || j == 0 || j == w-1)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
}

void triangle()
{
    int n, style;

    printf("Enter height: ");
    scanf("%d", &n);

    printf("1. Hollow\n2. Filled\n");
    printf("Choose style: ");
    scanf("%d", &style);

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            if(style == 2 || i == n || j == 1 || j == i)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
}

void circle()
{
    int r;

    printf("Enter radius: ");
    scanf("%d", &r);

    for(int i = -r; i <= r; i++)
    {
        for(int j = -r; j <= r; j++)
        {
            if(i*i + j*j <= r*r)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
}

void line()
{
    int n;

    printf("Enter line length: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        printf("* ");
    }

    printf("\n");
}

int main()
{
    int choice;

    while(1)
    {
        printf("\n");
        printf("================================\n");
        printf("       2D SHAPE DRAWER\n");
        printf("================================\n");
        printf("1. Square\n");
        printf("2. Rectangle\n");
        printf("3. Triangle\n");
        printf("4. Circle\n");
        printf("5. Line\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                square();
                break;

            case 2:
                rectangle();
                break;

            case 3:
                triangle();
                break;

            case 4:
                circle();
                break;

            case 5:
                line();
                break;

            case 6:
                printf("Program Ended Successfully.\n");
                return 0;

            default:
                printf("Invalid Choice! Please try again.\n");
        }
    }

    return 0;
}
