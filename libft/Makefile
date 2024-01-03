CC=			"cc"
CFLAGS=		-Wall -Wextra -Werror
NAME=		libft.a
NAME_BONUS=	las
SRCS=		ft_isascii.c ft_memcpy.c ft_putstr_fd.c ft_strlcat.c ft_strrchr.c\
			ft_atoi.c ft_isdigit.c ft_memmove.c ft_split.c ft_strlcpy.c\
			ft_strtrim.c ft_bzero.c ft_isprint.c ft_memset.c ft_strchr.c\
			ft_strlen.c ft_substr.c ft_calloc.c ft_itoa.c ft_putchar_fd.c\
			ft_strdup.c ft_strmapi.c ft_tolower.c ft_isalnum.c ft_memchr.c\
			ft_putendl_fd.c ft_striteri.c ft_strncmp.c ft_toupper.c\
			ft_isalpha.c ft_memcmp.c ft_putnbr_fd.c ft_strjoin.c ft_strnstr.c
OBJS=		ft_isascii.o ft_memcpy.o ft_putstr_fd.o ft_strlcat.o ft_strrchr.o\
			ft_atoi.o ft_isdigit.o ft_memmove.o ft_split.o ft_strlcpy.o\
			ft_strtrim.o ft_bzero.o ft_isprint.o ft_memset.o ft_strchr.o\
			ft_strlen.o ft_substr.o ft_calloc.o ft_itoa.o ft_putchar_fd.o\
			ft_strdup.o ft_strmapi.o ft_tolower.o ft_isalnum.o ft_memchr.o\
			ft_putendl_fd.o ft_striteri.o ft_strncmp.o ft_toupper.o\
			ft_isalpha.o ft_memcmp.o ft_putnbr_fd.o ft_strjoin.o ft_strnstr.o
SRCS_BONUS=	ft_lstadd_back_bonus.c ft_lstadd_front_bonus.c ft_lstclear_bonus.c\
			ft_lstdelone_bonus.c ft_lstiter_bonus.c ft_lstlast_bonus.c\
			ft_lstmap_bonus.c ft_lstnew_bonus.c ft_lstsize_bonus.c
OBJS_BONUS=	ft_lstadd_back_bonus.o ft_lstadd_front_bonus.o ft_lstclear_bonus.o\
			ft_lstdelone_bonus.o ft_lstiter_bonus.o ft_lstlast_bonus.o\
			ft_lstmap_bonus.o ft_lstnew_bonus.o ft_lstsize_bonus.o
HEADER=		libft.h
HEADER_BONUS=	libft_bonus.h

all:			$(NAME)

$(NAME):		$(OBJS)
	ar rcs $(NAME) $(OBJS)

$(OBJS):		$(SRCS) $(HEADER)
	$(CC) $(CFLAGS) -c $^

bonus:			$(OBJS_BONUS)

$(OBJS_BONUS):	$(SRCS_BONUS) $(HEADER_BONUS)
	$(CC) $(CFLAGS) -c $^
	ar rcs $(NAME) $(OBJS_BONUS)
	
clean:
	$(RM) $(OBJS)
	$(RM) $(OBJS_BONUS)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

.PHONY: all clean fclean re
