#pragma once
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <netinet/in.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
void add_nbo(FILE *fd1, FILE *fd2);
