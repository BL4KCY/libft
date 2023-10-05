# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: melfersi <melfersi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/04 22:19:58 by melfersi          #+#    #+#              #
#    Updated: 2023/10/04 22:19:58 by melfersi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Compiler and Flags and diractorys
CC = cc
RM = rm -rf
CFLAGS = -Wall -Wextra -Werror
SRCDIR = ./src
INCDIR = ./includes
OBJDIR = ./obj
SRCDIR_BONUS = ./bonus
OBJDIR_BONUS = ./obj_bonus
AR = ar crs
SOURCES = $(wildcard $(SRCDIR)/*.c)

OBJECTS = $(patsubst $(SRCDIR)/%.c,$(OBJDIR)/%.o,$(SOURCES))

BONUS_SOURCES = $(wildcard $(SRCDIR_BONUS)/*.c)

BONUS_OBJECTS = $(patsubst $(SRCDIR_BONUS)/%.c,$(OBJDIR_BONUS)/%.o,$(BONUS_SOURCES))

# static library name
NAME = libft.a

# Rules
all: $(NAME)

$(NAME): $(OBJECTS)
	$(AR) $@ $^

bonus: $(BONUS_OBJECTS)
	$(AR) $(NAME) $^

# rule to make object file from $(SRCDIR)
$(OBJDIR)/%.o: $(SRCDIR)/%.c
	mkdir -p $(OBJDIR)
	$(CC) $(CFLAGS) -c -I$(INCDIR) -o $@ $<

# rule to make object file from $(SRCDIR_BONUS)
$(OBJDIR_BONUS)/%.o: $(SRCDIR_BONUS)/%.c
	mkdir -p $(OBJDIR_BONUS)
	$(CC) $(CFLAGS) -c -I$(INCDIR) -o $@ $<

clean:
	$(RM) $(OBJDIR)
	$(RM) $(OBJDIR_BONUS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re $(NAME) bonus