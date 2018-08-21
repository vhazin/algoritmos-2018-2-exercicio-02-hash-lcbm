#include <stdio.h>

int main(){
    unsigned int t;
    scanf("%u", &t);

    unsigned long int hx0[t], output[t], counter;
    for (unsigned int index = 0; index < t; index++){
        unsigned long int hx, a, b, x, n, c, d, m;
        scanf("%lu %lu %lu %lu %lu %lu %lu", &a, &b, &x, &n, &c, &d, &m);
        hx = a * (x + index) + b % m;
        if (c <= hx <= d && hx <= m - 1 && index <= n){
            hx0[index] = hx;
            counter++;
        };
    };

    printf("%lu", counter);
    printf("\n");
    return 0;
}
