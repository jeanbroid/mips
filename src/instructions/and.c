#include <stdlib.h>
#include <stdio.h>

#include "arch/arch.h"

#include "instructions"r/instructions"ructions.h"
#include "instructions"r/parser_instructions"ru.h"
#include "instructions"r/get_instructions"r.h"

#include "notify.h"

void display_and(uint word, ARCH arch)
{
    uint rs;
    fprintf(stdout,"AND $%u, $%u, $%u\n",rd,rs,rt);

    return;
}

void execute_and(uint word, ARCH arch)
{
	return ;
}
