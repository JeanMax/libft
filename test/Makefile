#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mcanal <mcanal@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/11/29 13:16:03 by mcanal            #+#    #+#              #
#    Updated: 2017/03/31 00:04:29 by mc               ###   ########.fr        #
#                                                                              #
#******************************************************************************#

LIBFT_PATH = ..



NAME =	zboubitest
C_UTIL = util.c
C_PART1 =	part1.c test_atoi.c test_bzero.c test_isalnum.c test_isalpha.c \
			test_isascii.c test_isdigit.c test_isprint.c test_memccpy.c \
			test_memchr.c test_memcmp.c test_memcpy.c test_memmove.c \
			test_memset.c test_strcat.c test_strchr.c test_strcmp.c \
			test_strcpy.c test_strdup.c test_strlcat.c test_strlen.c \
			test_strncat.c test_strncmp.c test_strncpy.c test_strnstr.c \
			test_strrchr.c test_strstr.c test_tolower.c test_toupper.c
C_PART2 = 	part2.c test_itoa.c test_memalloc.c test_memdel.c test_putchar.c \
			test_putchar_fd.c test_putendl.c test_putendl_fd.c test_putnbr.c \
			test_putnbr_fd.c test_putstr.c test_putstr_fd.c test_strclr.c \
			test_strdel.c test_strequ.c test_striter.c test_striteri.c \
			test_strjoin.c test_strmap.c test_strmapi.c  test_strnequ.c \
			test_strnew.c test_strsplit.c test_strsub.c test_strtrim.c
C_BONUS =	bonus.c test_lstadd.c test_lstdel.c test_lstdelone.c \
			test_lstiter.c test_lstmap.c test_lstnew.c
C_ME =		me.c test_shellsort.c test_get_next_line.c
C_MAIN_PART1 = main_part1.c
C_MAIN_PART2 = main_part2.c
C_MAIN_BONUS = main_bonus.c
C_MAIN_ME    = main_me.c

O_DIR = obj
C_DIR = src
PART1_DIR = src/part1
PART2_DIR = src/part2
BONUS_DIR = src/bonus
ME_DIR =    src/me
VPATH =	$(C_DIR):$(PART1_DIR):$(PART2_DIR):$(BONUS_DIR):$(ME_DIR)

SRC_PART1 = $(C_UTIL:%.c=src/%.c)	$(C_PART1:%.c=$(PART1_DIR)/%.c) \
SRC_PART2 = $(SRC_PART1)			$(C_PART2:%.c=$(PART2_DIR)/%.c)
SRC_BONUS = $(SRC_PART2)			$(C_BONUS:%.c=$(BONUS_DIR)/%.c)
SRC_ME    = $(SRC_BONUS)			$(C_ME:%.c=$(ME_DIR)/%.c)

SRC_MAIN_PART1 = $(PART1_DIR)/$(C_MAIN_PART1)
SRC_MAIN_PART2 = $(PART2_DIR)/$(C_MAIN_PART2)
SRC_MAIN_BONUS = $(BONUS_DIR)/$(C_MAIN_BONUS)
SRC_MAIN_ME    = $(ME_DIR)/$(C_MAIN_ME)

OBJ_PART1 = $(C_UTIL:%.c=$(O_DIR)/%.o)	$(C_PART1:%.c=$(O_DIR)/%.o)
OBJ_PART2 = $(OBJ_PART1)				$(C_PART2:%.c=$(O_DIR)/%.o)
OBJ_BONUS = $(OBJ_PART2)				$(C_BONUS:%.c=$(O_DIR)/%.o)
OBJ_ME    = $(OBJ_BONUS)				$(C_ME:%.c=$(O_DIR)/%.o)

O_MAIN_PART1 = $(C_MAIN_PART1:%.c=$(O_DIR)/%.o)
O_MAIN_PART2 = $(C_MAIN_PART2:%.c=$(O_DIR)/%.o)
O_MAIN_BONUS = $(C_MAIN_BONUS:%.c=$(O_DIR)/%.o)
O_MAIN_ME    = $(C_MAIN_ME:%.c=$(O_DIR)/%.o)

OBJS = $(OBJ_ME) $(O_MAIN_PART1) $(O_MAIN_PART2) $(O_MAIN_BONUS) $(O_MAIN_ME)
DEPS =  $(OBJS:%.o=%.d)

LIB = $(LIBFT_PATH)/libft.a
I_DIR = -I./inc
CFLAGS = -Wall -Wextra -Werror -g -ggdb
RM = rm -rf
MKDIR = mkdir -p

CC = clang

WHITE = \033[37;01m
RED = \033[31;01m
GREEN =  \033[32;01m
BLUE =  \033[34;01m
BASIC = \033[0m

.PHONY: all part1 part2 bonus me lib sanitize_lib clean fclean zclean re brute

all: me

part1: OBJS = $(OBJ_PART1) $(O_MAIN_PART1)
part1: lib $(NAME)

part2: OBJS = $(OBJ_PART2) $(O_MAIN_PART2)
part2: lib $(NAME)

bonus: OBJS = $(OBJ_BONUS) $(O_MAIN_BONUS)
bonus: lib $(NAME)

me: OBJS = $(OBJ_ME) $(O_MAIN_ME)
me: SRC = $(SRC_ME) $(SRC_MAIN_ME)
me: CFLAGS += -fsanitize=address,undefined
me: sanitize_lib $(NAME)

lib:
	@$(MAKE) -C $(LIBFT_PATH)

sanitize_lib:
	@$(MAKE) -C $(LIBFT_PATH) sanitize

-include $(DEPS)

$(NAME): $(OBJS) $(LIB)
	@$(CC) $(CFLAGS) $(I_DIR) $(OBJS) $(LIB) -o $@
	@echo "$(BLUE)$(OBJS) $(WHITE)->$(RED) $@ $(BASIC)"
	@echo "$(WHITE)flags:$(BASIC) $(CFLAGS)"
	@echo "$(WHITE)compi:$(BASIC) $(CC)"
	@echo "$(WHITE)$(shell find $(LIBFT_PATH) -name '*.c' | wc -l)$(BASIC) files to test"

$(O_DIR)/%.o: %.c
	@$(CC) $(CFLAGS) $(I_DIR) -MMD -c $< -o $@
	@echo "$(WHITE)$<\t->$(BLUE) $@ $(BASIC)"

$(OBJS): | $(O_DIR)

$(O_DIR):
	@$(MKDIR) $(O_DIR)

clean:
	@$(RM) $(O_DIR)

fclean: clean
	@$(RM) $(NAME)

zclean: fclean
	@$(MAKE) -C $(LIBFT_PATH) fclean

re: fclean all

brute: zclean all
