##
## EPITECH PROJECT, 2023
## C Made Easy
## File description:
## makefile to compile the cme lib
##

NAME	=	libcme.a

SRC	=	lists/*.c	\
		dicts/*.c

OBJ	=	*.o

INCLUDES	=	./includes/

HEADER	=	*.h

OUTPUT_DIR	=	../../

all:	compile

compile:
	gcc -c -I$(INCLUDES) $(SRC)
	ar rc $(NAME) $(OBJ)
	cp $(NAME) $(OUTPUT_DIR)
	cp $(INCLUDES)$(HEADER) $(OUTPUT_DIR)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	rm -f $(OUTPUT_DIR)$(NAME)
	rm -f $(OUTPUT_DIR)$(HEADER)

re: fclean compile
