#ifndef _COMMANDS_H_
#define _COMMANDS_H_ 

#include "arch/arch.h"

#define CMD_EXIT_SUCCESS 1
#define CMD_EXIT_FAILURE 0
#define CMD_QUIT 11

#define CMD_EXIT_MISSING_ARG -1

#define CMD_EXIT_INVALID_ADDR -2
#define CMD_EXIT_INVALID_ADDR_VALUE -21

#define CMD_EXIT_INVALID_REG -3
#define CMD_EXIT_INVALID_REG_VALUE -31

#define CMD_NOT_FOUND -4

int execute_cmd_testcmd(char*);
int execute_cmd_ex(ARCH);
int execute_cmd_lp(ARCH, char*);
int execute_cmd_lm(ARCH, char*);
int execute_cmd_lr(ARCH, char*);
int execute_cmd_dr(ARCH, char *);
int execute_cmd_dm(ARCH, char*);
int execute_cmd_da(ARCH, char*);

#endif