#ifndef _GLOBALS_H_
#define _GLOBALS_H_

#define PARSING_FILE_EXIT_EOF 3
#define PARSING_FILE_NON_CMD_LINE 2

#include "desc/desc.h"

const DESC* DESC_ARRAY;
const int DESC_ARRAY_LENGTH;
const char* DESC_DIR = "./descs/"; 

const char* REG_NAMES[36] = {"zero", "at", "v0", "v1", "a0", "a1", "a2", "a3", "t0", "t1", "t2", "t3", "t4", "t5", "t6", "t7", "s0", "s1", "s2", "s3", "s4", "s5", "s6", "s7", "t8", "t9", "k0", "k1", "gp", "sp", "fp", "ra", "HI", "LO", "SR", "PC"};

#endif