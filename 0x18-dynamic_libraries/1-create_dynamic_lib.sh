#!/bin/bash
gcc -c -fPIC _putchar.c -o _putchar.o
gcc -c -fPIC _islower.c -o _islower.o
gcc -c -fPIC _isalpha.c -o _isalpha.o
gcc -c -fPIC _abs.c -o _abs.o
gcc -c -fPIC _isupper.c -o _isupper.o
gcc -c -fPIC _isdigit.c -o _isdigit.o
gcc -c -fPIC _strlen.c -o _strlen.o
gcc -c -fPIC _puts.c -o _puts.o
gcc -c -fPIC _strcpy.c -o _strcpy.o
gcc -c -fPIC _atoi.c -o _atoi.o
gcc -c -fPIC _strcat.c -o _strcat.o
gcc -c -fPIC _strncat.c -o _strncat.o
gcc -c -fPIC _strncpy.c -o _strncpy.o
gcc -c -fPIC _strcmp.c -o _strcmp.o
gcc -c -fPIC _memset.c -o _memset.o
gcc -c -fPIC _memcpy.c -o _memcpy.o
gcc -c -fPIC _strchr.c -o _strchr.o
gcc -c -fPIC _strspn.c -o _strspn.o
gcc -c -fPIC _strpbrk.c -o _strpbrk.o
gcc -c -fPIC _strstr.c -o _strstr.o
gcc -shared -o liball.so _putchar.o _islower.o _isalpha.o _abs.o _isupper.o _isdigit.o _strlen.o _puts.o _strcpy.o _atoi.o _strcat.o _strncat.o _strncpy.o _strcmp.o _memset.o _memcpy.o _strchr.o _strspn.o _strpbrk.o _strstr.o
