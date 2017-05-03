#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcanal <mcanal@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/11/29 13:16:03 by mcanal            #+#    #+#              #
#    Updated: 2017/05/03 22:04:24 by mc               ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME =		zboubitest

C_NAME =	main.c					dummy.c

C_ARR =

C_BST =

C_HASH =

C_INT =		test_isalnum.c			test_isdigit.c			test_tolower.c		\
			test_isalpha.c			test_isprint.c			test_toupper.c		\
			test_isascii.c			test_itoa.c				test_islower.c		\
			test_isgraph.c			test_ispunct.c			test_isupper.c		\
			test_iscntrl.c			test_isspace.c			test_isxdigit.c		\
			test_isblank.c			test_min.c				test_max.c			\
			test_abs.c

C_IO =		test_get_next_line.c	test_putnbr.c			test_putchar.c		\
			test_putnbr_fd.c		test_putchar_fd.c		test_putstr.c		\
			test_putendl.c			test_putstr_fd.c		test_putendl_fd.c	\
			test_debugchar.c		test_debugstr.c			test_debugnbr.c		\
			test_debugdbl.c			test_putchar_clr.c		test_putstr_clr.c	\
			test_putendl_clr.c		test_putnbr_clr.c		test_putdbl_clr.c	\
			test_putdbl.c			test_putdbl_fd.c

C_LST1 =	test_lstadd.c			test_lstdelone.c		test_lstmap.c		\
			test_lstdel.c			test_lstiter.c			test_lstnew.c		\
			test_lstlast.c			test_lstinser.c			test_lstfind.c		\
			test_lstisn.c			test_lstat.c			test_lstdellink.c	\
			test_lstrplc.c			test_lstaddlast.c		test_lstlen.c


C_LST2 =

C_MEM =		test_bzero.c			test_memcmp.c			test_memset.c		\
			test_memalloc.c			test_memcpy.c			test_shellsort.c	\
			test_memccpy.c			test_memdel.c			test_memchr.c		\
			test_memmove.c			test_swap.c				test_realloc.c

C_STR =		test_atoi.c				test_striter.c			test_strncpy.c		\
			test_strcat.c			test_striteri.c			test_strnequ.c		\
			test_strchr.c			test_strjoin.c			test_strnew.c		\
			test_strclr.c			test_strlcat.c			test_strnstr.c		\
			test_strcmp.c			test_strlen.c			test_strrchr.c		\
			test_strcpy.c			test_strmap.c			test_strsplit.c		\
			test_strdel.c			test_strmapi.c			test_strstr.c		\
			test_strdup.c			test_strncat.c			test_strsub.c		\
			test_strequ.c			test_strncmp.c			test_strtrim.c		\
			test_istoobig.c			test_strndup.c


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
CC =		$(shell clang --version >/dev/null 2>&1 && echo clang || echo gcc)
CFLAGS =	-Wall -Wextra -Werror

PREV_FLAGS_LOG = .previous-flag
PREV_FLAGS = "$(shell cat "$(O_DIR)/$(PREV_FLAGS_LOG)" 2>/dev/null)"

UNAME_S =   $(shell uname -s)
ifeq ($(UNAME_S), Linux)
  ECHO =	echo -e
else ifeq ($(UNAME_S), Darwin)
  ECHO =	echo
endif

WHITE =		\033[37;01m
RED =		\033[31;01m
GREEN =		\033[32;01m
YELLOW =	\033[33;01m
BLUE =		\033[34;01m
BASIC =		\033[0m

ifndef VERBOSE
.SILENT:
endif


.PHONY: all debug sanitize me_cry clean fclean mrproper re

all: | $(O_DIR)
ifeq (,$(findstring fsanitize, $(PREV_FLAGS)))
	$(ECHO) $(FLAGS) | grep -q fsanitize && $(MAKE) -C $(LFT_DIR) mrproper && $(MKDIR) $(O_DIR) || true
else
	$(ECHO) $(FLAGS) | grep -qv fsanitize && $(MAKE) -C $(LFT_DIR) mrproper && $(MKDIR) $(O_DIR) || true
endif
	$(ECHO) $(FLAGS) > $(O_DIR)/$(PREV_FLAGS_LOG)

	$(MAKE) -C $(LFT_DIR) $(FLAGS)
	$(MAKE) $(NAME) $(FLAGS)
	./$(NAME)
	diff -q ./inc/libft_copy.h $(LFT_DIR)/inc/libft.h
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

clean:
	$(RM) $(O_DIR)

fclean: clean
	$(RM) $(NAME)

mrproper: fclean
	$(MAKE) -C $(LFT_DIR) fclean

re: fclean all


-include $(DEPS)

$(NAME): $(OBJS) $(LFT) $(MIN)
	@$(ECHO) "$(BLUE)$(OBJS) $(WHITE)->$(RED) $@ $(BASIC)"
	$(CC) $(CFLAGS) $(CCFLAGS) $(I_DIR) $(OBJS) -Wl,--whole-archive $(LIBS) -Wl,--no-whole-archive -o $@
	@$(ECHO) "$(WHITE)cflags:$(BASIC) $(CFLAGS)"
	@$(ECHO) "$(WHITE)ccflags:$(BASIC) $(CCFLAGS)"
	@$(ECHO) "$(WHITE)libs:$(BASIC) $(LIBS)"
	@$(ECHO) "$(WHITE)compi:$(BASIC) $(CC)"

$(O_DIR)/%.o: %.c
	@$(ECHO) "$(WHITE)$<\t->$(BLUE) $@ $(BASIC)"
	$(CC) $(CFLAGS) $(CCFLAGS) $(I_DIR) -MMD -c $< -o $@

$(OBJS): | $(O_DIR)

$(O_DIR):
	$(MKDIR) $(O_DIR)
