#include <stdlib.h>
#include <stdio.h>

#include "arch/arch.h"

#include "instructions/parser_instructions.h"


void display(uint32_t word)
{
    uint rs, rt, immediate;

    parser_typeI(word, &rs, &rt, &immediate);
    fprintf(stdout,"LW $%u, %u($%u)\n", rt, immediate, rs);
}

void execute(ARCH arch, uint32_t word)
{
    uint rs, rt, immediate;

    parser_typeI(word, &rs, &rt, &immediate);
}

