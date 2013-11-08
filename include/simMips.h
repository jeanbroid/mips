#ifndef _SIMMIPS_H_
#define _SIMMIPS_H_

typedef int (*cmd_ptr)(ARCH, char*);

struct command {
	const char* command;
	cmd_ptr ptr;
	const char* usage;
	const char* help;
	const int min, max; /* min, max arguments, -1 unlimited, (0,0) => no args */
};

struct command* find_cmd(char*);
void print_help(struct command*);
void print_help_all(void);
void print_usage(struct command*);

#endif