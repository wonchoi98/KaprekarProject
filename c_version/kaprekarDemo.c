/**
 *Author: Gomer
 *Date: Unknown
 *Reviser: Won Choi
 *Revised date: January 21, 2018
 *
 *This program will tell the user if the value they put in is a Kaprekar number or not.
 */
#include<stdlib.h>
#include<stdio.h>
#include "kaprekarUtils.h"

int main(int argc, char **argv) {

  if(argc != 2) {
    fprintf(stderr, "Usage: %s n\n", argv[0]);
    exit(1);
  }

  int n = atoi(argv[1]);

  if(isKaprekar(n)) {
    printf("%d is a Kaprekar Number!\n", n);
  } else {
    printf("%d is not a Kaprekar Number!\n", n);
  }

  return 0;
}
