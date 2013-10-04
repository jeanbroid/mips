#pragma once

/* 
	returns address value in addr, and boolean status
*/

int parse_addr(char*, uint* addr);

/* 
	same fct, as a reg containes 32 bits..
*/

int parse_reg_value(char*, uint* addr);

/*
	returns register index between 0 - 31 from string.
	the string can be a register index or a register name, 
		preceded by $ or not.
*/

int parse_register(char*);

/*
	returns args from str in string array
*/
int parse_args(char*, char**, int);
