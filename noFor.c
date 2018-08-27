#include <stdio.h>

int main(void){
    unsigned int t;
    scanf("%u", &t);

    while(t--){
        unsigned long long a, b, x, n, c, d, m, counter = 0;
        scanf("%llu %llu %llu %llu %llu %llu %llu", &a, &b, &x, &n, &c, &d, &m);     
        unsigned long long max = (a *(x+n) + b);
        unsigned long long min = (a * x + b);

        if (b > 0)
        {
            //Zero case
            if (n < m && (a - n) > d)
            {
                counter = 0;
                printf("%llu\n", counter);
                continue;
            };

            if (n > a && n > d)
            {
                // 7198784/ ((4045261 - 3752118) + ((7437984 - 2325167)));
                counter = (n / ((m - d) + (d - c))) * (d - c) + (n / ((m - d) + (d - c)));
                //(floor(n / ((m - d) + (d - c))) * (d - c))
                // floor((d - m) / (d - c)) + 2);
                // if (counter > n){
                //     counter = counter/2;
                // };
                printf("1 %llu\n", counter);
                counter = 0;
                continue;
            };

            if (n > (d - c))
            {
                counter = (n / ((m - d) + (d - c))) * (d - c) + (n / ((m - d) + (d - c)));
                printf("2 %llu\n", counter);
                counter = 0;
                continue;
            };

            if (n > d)
            {
                counter = (d - ((a * (x + n) + b) % m)) + (d - c) + 2;
                printf("3 %llu\n", counter);
                counter = 0;
                continue;
            };

            if (n < d)
            {
                counter = (d - ((a * (x + n) + b) % m)) + 1;
                printf("%llu\n", counter);
                counter = 0;
                continue;
            };
        };
    }
    return 0;
}
