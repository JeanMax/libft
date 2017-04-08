#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcanal <mcanal@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/11/29 13:16:03 by mcanal            #+#    #+#              #
#    Updated: 2017/04/07 02:04:12 by mc               ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME =		zboubitest

C_NAME =	main.c					dummy.c

C_ARR =

C_BST =

C_HASH =

C_INT =		test_isalnum.c			test_isdigit.c			test_tolower.c		\
			test_isalpha.c			test_isprint.c			test_toupper.c		\
			test_isascii.c			test_itoa.c

C_IO =		test_get_next_line.c	test_putnbr.c			test_putchar.c		\
			test_putnbr_fd.c		test_putchar_fd.c		test_putstr.c		\
			test_putendl.c			test_putstr_fd.c		test_putendl_fd.c

C_LST1 =	test_lstadd.c			test_lstdelone.c		test_lstmap.c		\
			test_lstdel.c			test_lstiter.c			test_lstnew.c

# C_LST2 =

C_MEM =		test_bzero.c			test_memcmp.c			test_memset.c		\
			test_memalloc.c			test_memcpy.c			test_shellsort.c	\
			test_memccpy.c			test_memdel.c			test_memchr.c		\
			test_memmove.c

C_STR =		test_atoi.c				test_striter.c			test_strncpy.c		\
			test_strcat.c			test_striteri.c			test_strnequ.c		\
			test_strchr.c			test_strjoin.c			test_strnew.c		\
			test_strclr.c			test_strlcat.c			test_strnstr.c		\
			test_strcmp.c			test_strlen.c			test_strrchr.c		\
			test_strcpy.c			test_strmap.c			test_strsplit.c		\
			test_strdel.c			test_strmapi.c			test_strstr.c		\
			test_strdup.c			test_strncat.c			test_strsub.c		\
			test_strequ.c			test_strncmp.c			test_strtrim.c


O_DIR =		obj
VPATH =		src						src/arr					src/bst				\
			src/hash				src/int					src/io				\
			src/lst1				src/lst2				src/mem				\
			src/str

SRCS =		$(C_NAME)				$(C_ARR)				$(C_BST)			\
			$(C_HASH)				$(C_INT)				$(C_IO)				\
			$(C_LST1)				$(C_LST2)				$(C_MEM)			\
			$(C_STR)

OBJS =		$(SRCS:%.c=$(O_DIR)/%.o)
DEPS =		$(OBJS:%.o=%.d)

LFT_DIR =	..
LFT_I_DIR = -I$(LFT_DIR)/inc
LFT =		$(LFT_DIR)/libft.a
LFT_LIB =	-L$(LFT_DIR) -lft

MIN_DIR =	minunit
MIN_I_DIR = -I$(MIN_DIR)
MIN =		$(MIN_DIR)/minunit.h
MIN_LIB =

I_DIR =		$(LFT_I_DIR)	$(MIN_I_DIR)	-Iinc
LIBS =		$(LFT_LIB)		$(MIN_LIB)

RM =		rm -rf
MKDIR =		mkdir -p
MAKE =		make
MAKEFLAGS = -j 4
ECHO =		echo -e
CC =		$(shell clang --version >/dev/null 2>&1 && echo clang || echo gcc)
CFLAGS =	-Wall -Wextra -Werror

UNAME_S =   $(shell uname -s)
ifeq ($(UNAME_S), Linux)
  ECHO =	echo -e
else ifeq ($(UNAME_S), Darwin)
  ECHO =	echo
endif


.PHONY: all debug sanitize me_cry clean fclean mrproper re

all:
	$(MAKE) -C $(LFT_DIR) $(FLAGS)
	$(MAKE) $(NAME) $(FLAGS)
	./$(NAME)
	./count_files.sh

debug: FLAGS = "CFLAGS = -D DEBUG_MODE -g -ggdb"
debug: all

sanitize: FLAGS = "CFLAGS = -D DEBUG_MODE -g -ggdb -fsanitize=address,undefined \
-ferror-limit=5"
sanitize: all

me_cry: FLAGS = "CFLAGS = -Wpedantic -Wshadow -Wconversion -Wcast-align \
-Wstrict-prototypes -Wmissing-prototypes -Wunreachable-code -Winit-self \
-Wmissing-declarations -Wfloat-equal -Wbad-function-cast -Wundef \
-Waggregate-return -Wstrict-overflow=5 -Wold-style-definition  \
-Wredundant-decls -Wall -Werror -Wextra" #-Wcast-qual -Wpadded
me_cry: all

-include $(DEPS)

$(NAME): $(OBJS) $(LFT) $(MIN)
	$(CC) $(CFLAGS) $(I_DIR) $(OBJS) -Wl,--whole-archive $(LIBS) -Wl,--no-whole-archive -o $@

$(O_DIR)/%.o: %.c
	$(CC) $(CFLAGS) $(I_DIR) -MMD -c $< -o $@

$(OBJS): | $(O_DIR)

$(O_DIR):
	$(MKDIR) $(O_DIR)

clean:
	$(RM) $(O_DIR)

fclean: clean
	$(RM) $(NAME)

mrproper: fclean
	$(MAKE) -C $(LFT_DIR) fclean

re: fclean all
