CC =		gcc

CFLAGS =	-Wall -Wextra -Werror

NAME =		libft.a

LNAME =		$(NAME)

SRCS =		ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c ft_memmove.c ft_tolower.c \
			ft_toupper.c ft_isalpha.c ft_isascii.c ft_strlen.c ft_strlcpy.c ft_strlcat.c \
			ft_memcmp.c ft_isdigit.c ft_isalnum.c ft_memchr.c ft_isprint.c ft_strchr.c \
			ft_strrchr.c ft_strnstr.c ft_strncmp.c ft_calloc.c ft_substr.c ft_strjoin.c \
			ft_strcpy.c ft_putstr_fd.c ft_putchar_fd.c ft_putendl_fd.c ft_strdup.c ft_strmapi.c \
			ft_strtrim.c ft_strtrim.c

OBJ = $(SRCS:.c=.o)

all: $(NAME)

$(NAME):
			$(CC) $(CFLAGS) -c $(SRCS)
			@ar rc $(LNAME) $(OBJ)

clean:
			rm -f $(OBJ)

fclean:		clean
			rm -f $(NAME)

re:			fclean all
