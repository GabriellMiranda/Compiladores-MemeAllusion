all:
	flex lex.l
	yacc -d translate.y
	gcc -o a.out lex.yy.c y.tab.c
run:
	./a.out  <  ${file}
instalarLex:
	sudo apt-get install flex
instalarYacc:
	sudo apt-get install bison