default:
	gcc -Wall -Wextra input.c stringutils.c cache.c main.c -o run

debug:
	gcc -Wall -Wextra -g input.c stringutils.c cache.c main.c -o run

clean:
	rm run