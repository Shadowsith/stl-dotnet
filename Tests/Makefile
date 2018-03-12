make:
	@echo "For string test: make string"
	@echo "For convert test: make convert"

string:
	g++ lib/textformat.cpp ../String/String.cpp string_test.cpp -o String_Test

convert:
	g++ lib/textformat.cpp ../Convert/Convert.cpp convert_test.cpp -o Convert_Test

all: 
	@g++ lib/textformat.cpp ../String/String.cpp string_test.cpp -o String_Test
	@g++ lib/textformat.cpp ../Convert/Convert.cpp convert_test.cpp -o Convert_Test

clean: 
	@rm -f String_Test
	@rm -f Convert_Test
