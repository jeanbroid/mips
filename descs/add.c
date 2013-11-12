#include <stdlib.h>
#include <stdio.h>

#include "arch/arch.h"

#include "instructions/instructions.h"
#include "instructions/parser_instructions.h"
#include "instructions/get_instructions.h"

#include "notify.h"

void display(uint32_t word)
{
    uint rs;
    uint rt;
    uint rd;
    uint sa;

    parser_typeR(word,&rs,&rt,&rd,&sa);
    fprintf(stdout,"ADD $%u, $%u, $%u\n",rd,rs,rt);
}

void execute(ARCH arch, uint32_t word)
{
	fprintf(stderr, "execute ADD\n");
}

