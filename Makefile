

go:
	javac   Test.java Matrix/Matrix.java
	java Test
	gcc test.c matrix.c -o test.exe
	./test.exe
	python test.py
	node test.js
