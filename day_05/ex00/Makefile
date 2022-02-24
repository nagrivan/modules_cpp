NAME	= bureaucrat

SRCS	= main.cpp	Bureaucrat.cpp

INCLUDES	=	Bureaucrat.hpp

OBJS	= ${SRCS:.cpp=.o}

CXX		= clang++

CXXFLAGS	= -Wall -Wextra -Werror -std=c++98

RM	= rm -rf

all: $(NAME)

%.o : %.cpp ${INCLUDES}
		${CXX} ${CXXFLAGS} -c $< -o $@

$(NAME): ${OBJS} ${INCLUDES}
		 ${CXX} ${CXXFLAGS} ${OBJS} -o ${NAME}

clean:
		${RM} ${OBJS}

fclean: clean
		${RM} ${NAME}

re: fclean all

.PHONY: clean fclean re