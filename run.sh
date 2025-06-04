gcc -c symbol_table.c
bison -d compilersintactic.y
flex compilerlematic.l
gcc compilersintactic.tab.c lex.yy.c symbol_table.o -lfl -o compiler
./compiler test