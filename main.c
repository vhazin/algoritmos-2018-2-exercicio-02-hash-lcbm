#include <stdio.h>

int main(void){
    unsigned int t;
    scanf("%u", &t);
    unsigned long long output[t];
    while (t--){
        unsigned long long a, b, x, n, c, d, m, counter = 0;
        scanf("%llu %llu %llu %llu %llu %llu %llu", &a, &b, &x, &n, &c, &d, &m);
        for (unsigned long long index = 0; index <= n; index++){
            unsigned long long hx = a * (x + index) + b % m;
            if ((c <= hx <= d) && (hx <= (m - 1))){
                counter++;
            };
        };
        output[t] = counter;
        counter = 0;
        // printf("%llu\n", counter);
    };
    for (t = 0; t < sizeof(output)/sizeof(unsigned long long); t++){
        printf("%llu\n", output[t]);
    };
    return 0;
};
