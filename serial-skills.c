/* Primes.c */
/* get prime numbers between int a and int b */
/* ./primes -a 1 -b 100 */

#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <getopt.h>
int main(int argc, char *argv[]) {
    unsigned long long a = 1;
    unsigned long long a2 = a;
    unsigned long long b = 100;
    int debug = 0, opt = 0;
    int c = 0;
    int count, i;
    // get some args
    while ((opt = getopt(argc, argv, "da:b:n:")) != -1) {
        switch (opt) {
            case 'd':
                debug = 1;
                break;

            case 'a':
                a = strtoul(optarg, (char**) NULL, 10);
		a2 = a;
                break;

            case 'b':
                b = strtoul(optarg, (char**) NULL, 10);
                break;

            case '?':
            case 'h':
            case 'H':
                fprintf(stderr, "usage: -a <range-start> -b <range-end> -n\n");
                fprintf(stderr, "without any arguments runs with a=1, b=100\n");
                exit(1);
            default:
                break;
        }
    }
    while(a <= b){
        count = 0;
        i = 2;
        while(i <= a/2){
            if(a%i == 0){
                count++;
                break;
            }
            i++;
        }
        if(count == 0 && a != 1 ){
            c++;
        }
        a++;
    }
    fprintf(stdout, "a = %d, b = %d, Total Primes = %d\n", a2, b, c);
    return 0;
}
