#ifndef _DESC_H_
#define _DESC_H_

typedef struct {
	char name[8]; /* todo: check max name length in doc */
	char type;
	int opcode;
	int function;
} DESC;

void init_desc_array();
void free_desc_array();

#endif