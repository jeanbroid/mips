CMD TEST RESULT 0xb
00000000: 20 09 00 02 ADDI $9, $0, 2
00000004: 20 0a 00 04 ADDI $10, $0, 4
00000008: 01 49 00 18 MULT $10, $9
0000000c: 00 00 00 00 NOP
00000010: 01 49 00 1a DIV $10, $9
00000014: 00 00 00 00 NOP
00000018: 00 00 00 00 NOP
0000001c: 00 00 00 00 NOP
00000020: 00 00 00 00 NOP
00000024: 00 00 00 00 NOP
00000028: 00 00 58 10 MFHI $11 
0000002c: 00 00 60 12 MFLO $12 
00000030: 8c 0d 00 28 LW $13, 40($0)
00000034: ac 00 00 00 SW $0, 0($0)
ADDI $9, $0, 2
  t1 : 00000002   
ADDI $10, $0, 4
  t2 : 00000004   
MULT $10, $9
  HI : 00000000     LO : 00000008   
NOP
DIV $10, $9
  HI : 00000002     LO : 00000000   
bp at 0x00000028 added
NOP
NOP
NOP
NOP
NOP
MFHI $11 
  t3 : 00000002   
MFLO $12 
  t4 : 00000000   
LW $13, 40($0)
  t5 : 00005810   
