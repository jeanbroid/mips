#include <stdlib.h>
#include <stdio.h>

#include "arch/arch.h"

#include "instructions/parser_instructions.h"


void display (uint32_t word)
{
    uint rs;
    uint rt;
    uint immediate;

    parser_typeI(word,&rs,&rt,&immediate);
    fprintf(stdout,"BEQ $%u, $%u, %u\n",rs,rt,immediate);
	return;
}

void execute (uint32_t word)
{
	return ;
}
