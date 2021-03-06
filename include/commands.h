#ifndef _COMMANDS_H_
#define _COMMANDS_H_ 

#include "arch/arch.h"

#define CMD_EXIT_SUCCESS 1
#define CMD_EXIT_FAILURE 0
#define CMD_QUIT 11

#define CMD_EXIT_ERROR -1
#define CMD_EXIT_FILE_NOT_FOUND 404
#define CMD_EXIT_MISSING_ARG -11
#define CMD_EXIT_INVALID_ADDR -2
#define CMD_EXIT_INVALID_ADDR_VALUE -21
#define CMD_EXIT_INVALID_REG -3
#define CMD_EXIT_INVALID_REG_VALUE -31

#define CMD_EXIT_NO_OBJECT_FILE -41
#define CMD_NOT_FOUND -4

int execute_cmd_bp(ARCH, char**);
int execute_cmd_da(ARCH, char**);
int execute_cmd_db(ARCH);
int execute_cmd_di();
int execute_cmd_dm(ARCH, char**);
int execute_cmd_dr(ARCH, char**);
int execute_cmd_ds(ARCH);
int execute_cmd_er(ARCH, char**);
int execute_cmd_ex();
int execute_cmd_help(ARCH, char**);
int execute_cmd_lm(ARCH, char**);
int execute_cmd_lp(ARCH, char**);
int execute_cmd_lr(ARCH, char**);
int execute_cmd_run(ARCH, char**);
int execute_cmd_s(ARCH);
int execute_cmd_si(ARCH);
int execute_cmd_testcmd(ARCH, char**);

#endif
