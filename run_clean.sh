#!/bin/bash
gcc -c symbol_table.c
bison -d -o compilersintactic.tab.c compilersintactic_clean.y
flex compilerlematic_clean.l
gcc compilersintactic.tab.c lex.yy.c symbol_table.o -lfl -o compiler
./compiler test