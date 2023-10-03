# Compiler and Flags and diractorys
CC = cc
RM = rm -rf
CFLAGS = -Wall -Wextra -Werror
SRCDIR = ./src
INCDIR = ./includes
OBJDIR = ./obj
AR = ar crs
SOURCES = $(wildcard $(SRCDIR)/*.c)

OBJECTS = $(patsubst $(SRCDIR)/%.c,$(OBJDIR)/%.o,$(SOURCES))

# static library name
NAME = libft.a

# Rules
all: $(NAME)

$(NAME): $(OBJECTS)
	$(AR) $@ $^

$(OBJDIR)/%.o: $(SRCDIR)/%.c
	mkdir -p $(OBJDIR)
	$(CC) $(CFLAGS) -c -I$(INCDIR) -o $@ $<

clean:
	$(RM) $(OBJDIR)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re