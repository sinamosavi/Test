﻿#include <stdio.h>

int isPrime(int num) {
    int d;
    for (d = 2; d * d <= num; d++){
        if (num % d == 0)
            return 0;
    }
    return 1;
}

int absVal(int num) {

}

int main() {
	printf("Hello world!");
	return 0;
}؛
