#include "firmware.h"
#include <stdio.h>

#define MAX 32

//#include<conio.h>

static int fib[MAX];
static void print_fibannoci(int idx, int val)
{
	if (idx < 10)
		print_str(" ");
	print_dec(idx);
	if (idx / 10 == 1)
		goto force_th;
	switch (idx % 10) {
	case 1: print_str("st"); break;
	case 2: print_str("nd"); break;
	case 3: print_str("rd"); break;
	force_th:
	default: print_str("th"); break;
	}
	print_str(" fibannoci is ");
	print_dec(val);
	print_str(".\n");

	//hash = mkhash(hash, idx);
	//hash = mkhash(hash, val);
}
void sieve(void)
{
	int idx = 1;
	//hash = 5381;
	//print_fibannoci(idx++, 1);//for loop runs 64 times
	//print_fibannoci(idx++, 2);
	for (int i = 0; i < MAX; i++) {
		if (i == 0) {
			fib[i] = 1;
			print_fibannoci(idx++, fib[i]);

		}
		if (i == 1) {
			fib[i] = 1;
			print_fibannoci(idx++, fib[i]);
		}
		if (i != 0 && i != 1) {
			fib[i] = fib[i - 1] + fib[i - 2];
			print_fibannoci(idx++, fib[i]);
		
		}
	}

}

