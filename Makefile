#defines what compiler to use

NAME = libft.a
CC = cc

#define compile flags
CFLAGS =  -Wall -Wextra -Werror 

#list all the files using ssources
SOURCES = ft_isalpha.c ft_isdigit.c ft_isalnum.c \
	  ft_isascii.c ft_isprint.c ft_strlen.c \
	  ft_tolower.c ft_toupper.c ft_strchr.c \
	  ft_strrchr.c ft_strncmp.c ft_memset.c \
	  ft_bzero.c ft_memchr.c ft_memcpy.c ft_memcmp.c\
	  ft_memmove.c ft_strlcpy.c \
	  ft_strlcat.c ft_atoi.c ft_strnstr.c \
	  ft_strdup.c ft_calloc.c \
	  ft_substr.c ft_strjoin.c ft_strtrim.c\
	  ft_split.c ft_strmapi.c ft_striteri.c\
	  ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c\
	  ft_putnbr_fd.c ft_itoa.c

#
OBJECTS = $(SOURCES:.c=.o)
#creates an executable with a name

all:  $(NAME)

$(NAME) : $(OBJECTS)
	ar crs $(NAME) $(OBJECTS)
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all