NAME	= animals

SRCS	= main.cpp	Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp WrongDog.cpp

INCLUDES	=	Animal.hpp Cat.hpp Dog.hpp WrongAnimal.hpp WrongCat.hpp WrongDog.hpp

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