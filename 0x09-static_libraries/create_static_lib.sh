#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -c *.o
ar -rc liball.a *.o
ranlib liball.a
