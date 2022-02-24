NAME	= weapon

SRCS	= main.cpp	HumanA.cpp	HumanB.cpp	Weapon.cpp

INCLUDES	= HumanA.hpp	HumanB.hpp	Weapon.hpp

OBJS	= ${SRCS:.cpp=.o}

CXX		= g++

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