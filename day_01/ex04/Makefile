NAME	= replace

SRCS	= main.cpp

OBJS	= ${SRCS:.cpp=.o}

CXX		= clang++

CXXFLAGS	= -Wall -Wextra -Werror -std=c++98

RM	= rm -rf

all: $(NAME)

%.o : %.cpp
		${CXX} ${CXXFLAGS} -c $< -o $@

$(NAME): ${OBJS}
		 ${CXX} ${CXXFLAGS} ${OBJS} -o ${NAME}

clean:
		${RM} ${OBJS}

fclean: clean
		${RM} ${NAME}

re: fclean all

.PHONY: clean fclean re