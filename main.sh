lex ast.l
yacc -d ast.y
gcc lex.yy.c y.tab.c -ll -ly -o AST
lex icg.l
yacc -d icg.y
gcc lex.yy.c y.tab.c -ll -ly -o ICG

./AST < $1
./drawtree/drawtree < ./drawtree/all_cases.c 
./ICG < $1

java limit_registers.java
java optimize1.java
java optimize2.java
java optimize3.java
java optimize4.java
java assembly.java