CC=				cc
CFLAGS=			-Wall -Wextra -Werror
NAME=			minishell
EXCUTE=			
PARSE=			
OTHERS=			ms_main ms_signal
SRC=			$(addprefix ./parse/, $(PARSE)) $(addprefix ./excute/, $(EXCUTE)) $(OTHERS)
SRCS=			$(addsuffix .c, $(SRC))
SRCS_BONUS=		$(addsuffix .c, $(SRC))
HEADER=			ms.h
HEADER_BONUS=	ms.h
LIBFT_DIR=		./libft
LIBFT=			make -C ./libft/
RM=				rm -rf

.PHONY: all bonus clean fclean re

all:	LAST_MAKE

LAST_MAKE: $(SRCS) $(HEADER)
	$(LIBFT)
	$(CC) $(CFLAGS) $(SRCS) -I $(LIBFT_DIR) -L $(LIBFT_DIR) -lreadline -o $(NAME)
	$(RM) LAST_BONUS
	touch $@

bonus:	LAST_BONUS

LAST_BONUS: $(SRCS_BONUS) $(HEADER_BONUS)
	$(LIBFT)
	$(CC) $(CFLAGS) $(SRCS_BONUS) -I $(LIBFT_DIR) -L $(LIBFT_DIR) -lreadline -o $(NAME)
	$(RM) LAST_MAKE
	touch $@

clean:
	$(RM) LAST_MAKE
	$(RM) LAST_BONUS
	$(LIBFT) clean

fclean:	clean
	$(RM) $(NAME)
	$(LIBFT) fclean

re:	fclean all
