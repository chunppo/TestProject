// foo.h
#define FOO 100

void foo();

// foo.c
#include <stdio.h>
#include <foo.h.>

void foo() { printf("%d\n", FOO); }

// goo.h
#define GOO 200

void goo();

// goo.c
#include <stdio.h>
#include <foo.h>

void goo() { printf("%d\n", FOO); }

// main.c
#include <foo.h>
#include <goo.h>
#include <stdio.h>
