all: my_mastermind

my_mastermind: main.o lib.o
	gcc -Wall -Wextra -Werror -o my_mastermind main.o lib.o

main.o: main.c
	gcc -c -Wall -Wextra -Werror main.c

lib.o: lib.c
	gcc -c -Wall -Wextra -Werror lib.c

clean:
	rm main.o
	rm lib.o


