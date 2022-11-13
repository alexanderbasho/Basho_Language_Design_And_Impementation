BitGate: Test_Files/test1.bitgate Test_Files/test2.bitgate Test_Files/test3.bitgate Test_Files/test4.bitgate Test_Files/test5.bitgate lexer.l parser.y
	bison -v -d parser.y
	flex lexer.l
	gcc parser.tab.c lex.yy.c -lm -o BitGate.exe
	./BitGate.exe Test_Files/test1.bitgate > Test_Files_Outputs/output-test1.txt
	./BitGate.exe Test_Files/test2.bitgate > Test_Files_Outputs/output-test2.txt
	./BitGate.exe Test_Files/test3.bitgate > Test_Files_Outputs/output-test3.txt
	./BitGate.exe Test_Files/test4.bitgate > Test_Files_Outputs/output-test4.txt
	./BitGate.exe Test_Files/test5.bitgate > Test_Files_Outputs/output-test5.txt

clean:
	rm -f parser.tab.* lex.yy.c BitGate