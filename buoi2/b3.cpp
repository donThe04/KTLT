#include <stdio.h>
#define ll long long

ll get_value(int x, int a, int b, int c) {
    return a*x*x + b*x + c;
}

int main(){
    int x;
    scanf("%d", &x);

    int a = 2; //# giá trị mặc định của a
    int b = 1; //# giá trị mặc định của b
    int c = 0; //# giá trị mặc định của c

    scanf("%d %d %d", &a, &b, &c);

    printf("a=2, b=1, c=0: %lld\n", get_value(x, 2, 1, 0));
    printf("a=%d, b=1, c=0: %lld\n", a, get_value(x, a, 1, 0));
    printf("a=%d, b=%d, c=0: %lld\n", a, b, get_value(x, a, b, 0));
    printf("a=%d, b=%d, c=%d: %lld\n", a, b, c, get_value(x, a, b, c));

    return 0;
}