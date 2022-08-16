/*
 * File: 100-first.c
 * Auth: Jeremiah Ike 	Obuseri
 */

#include <stdio.h>

void __attribute__((constructor)) hare(void);

/**
 * hare - Prints a string before the
 *        main function is executed.
 */

void hare(void)
{
	printf ("You're beat! and yet, you must allow,\n");
	printf ("I bore my house upon my back!\n");

	return 0;
}
