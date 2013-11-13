#include <stdlib.h>
#include <stdio.h>

#include "arch/arch.h"

#include "instructions/parser_instructions.h"

void display (uint32_t word)
{
    uint rs;
    uint rt;
    uint rd;
    uint sa;

    parser_typeR(word,&rs,&rt,&rd,&sa);
	fprintf(stdout,"JR $%u \n",rs);

	return;
}

void execute (ARCH arch, uint32_t word)
{
	return ;
}
