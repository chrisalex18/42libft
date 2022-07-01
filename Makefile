SRCS	= ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c

OBJS	= $(SRCS:.c=.o)

NAME	= libft.a

CC		= gcc

RM		= rm -f

LIB1	= ar rc

LIB2	= ranlib

NO		= norminette

CFLAGS 	= -Wall -Wextra -Werror

.c.o:		$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME):	$(OBJS)
			$(NO)
			$(LIB1) $(NAME) $(OBJS)
			$(LIB2) $(NAME)
			$(CC) main.c -L. -lft

all: 		$(NAME)

clean:
			$(RM) $(OBJS)
			$(RM) ./a.out

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re