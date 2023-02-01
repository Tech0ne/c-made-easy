##
## EPITECH PROJECT, 2023
## C Made Easy
## File description:
## Simple C helper (lists, dictionaries...)
##

all:	compile

compile:
	make -C lib/cme/ compile

clean:
	make -C lib/cme/ clean

fclean:	clean
	make -C lib/cme/ fclean

re:
	make -C lib/cme/ re

cs:	re fclean
	abricot

push: cs
	@git add .
	@echo -n "> "
	@read message; git commit -m "$$message"
	@git push
