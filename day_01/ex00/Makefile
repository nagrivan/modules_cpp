NAME	= zombie

SRCS	= 

INCLUDES	= 

OBJS	= ${SRCS:.cpp=.o}

CPP		= g++

CPPFLAGS	= -Wall -Wextra -Werror

RM	= rm -rf

all: $(NAME)

%.o : %.cpp ${INCLUDES}
		${CPP} ${CPPFLAGS} -c $< -o $@

$(NAME): ${OBJS} ${INCLUDES}
		 ${CPP} ${CPPFLAGS} ${OBJS} -o ${NAME}

clean:
		${RM} ${OBJS}

fclean: clean
		${RM} ${NAME}

re: fclean all

.PHONY: clean fclean re