#include <stdio.h>

int main()
{
    char ip[16] = {0};

    int port; 

    printf("C Port Scanner\n");

    printf("Enter IP:\n");

    scanf("%s", ip);

    printf("Enter port:\n");

    scanf("%d", &port);

    printf("Your Target: %s:%d\n", ip, port);

    return 0;
}