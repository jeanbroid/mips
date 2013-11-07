#include <stdlib.h>
#include <stdio.h>

#include "arch/arch.h"

#include "instructions/instructions.h"
#include "instructions/parser_instructions.h"
#include "instructions/get_instructions.h"

#include "notify.h"

void display_syscall(uint word, ARCH arch)
{
    fprintf(stdout,"SYSCALL");
	return ;
}

void execute_syscall(uint word, ARCH arch)
{
	return ;
}
