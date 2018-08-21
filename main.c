#include <stdio.h>

int main(void){
    unsigned long int t, line = 0;
    scanf("%lu", &t);
    unsigned long int output[t], counter;
    while (t > line){
        unsigned long int a, b, x, n, c, d, m;
        scanf("%lu %lu %lu %lu %lu %lu %lu", &a, &b, &x, &n, &c, &d, &m);
        for (unsigned int index = 0; index <= n; index++){
            unsigned long int hx = a * (x + index) + b % m;
            if (c <= hx <= d && hx <= m - 1){
                counter++;
            };
        };
        output[line] = counter;
        counter = 0;
        line++;
    };
    for (line = 0; line < t; line++){
        printf("%lu", output[line]);
        printf("\n");
    };
    return 0;
}
