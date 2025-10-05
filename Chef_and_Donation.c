#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
       int X,Y;
       scanf("%d %d",&X,&Y);
       int income = Y - X;
       printf("%d\n",income);
    }

    return 0;
}
