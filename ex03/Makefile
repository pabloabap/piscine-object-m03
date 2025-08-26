#CABECERA

NAME		= InterfaceSegregation

CPP			= c++
CPP_FLAGS	= -Wall -Wextra -Werror -std=c++98 -pedantic

HEADERS_DIR	= ./include
HEADERS		= \
		employeeManagement.hpp \
		employee.hpp \
		hourlyEmployee.hpp \
		salariedEmployee.hpp \
		main.hpp

HEADERS		:= $(addprefix $(HEADERS_DIR)/, $(HEADERS))

SRCS_DIR	= ./src
SRCS		= \
		employeeManagement.cpp \
		employee.cpp \
		hourlyEmployee.cpp \
		salariedEmployee.cpp \
		main.cpp

SRCS		:= $(addprefix $(SRCS_DIR)/, $(SRCS))

OBJS_DIR	= ./build
OBJS		=  $(addprefix $(OBJS_DIR)/, $(notdir $(patsubst %.cpp, %.o, $(SRCS))))

all: $(NAME)

$(NAME): $(OBJS)
	$(CPP) $(CPP_FLAGS) -I$(HEADERS_DIR) -o $(NAME) $(OBJS)
	@if  ! grep -q $(NAME) ../.gitignore; then echo $(NAME) >> ../.gitignore; fi



$(OBJS_DIR):
	mkdir -p $(OBJS_DIR)

$(OBJS_DIR)/%.o: $(SRCS_DIR)/%.cpp $(HEADERS) Makefile | $(OBJS_DIR)
	$(CPP) $(CPP_FLAGS) -I$(HEADERS_DIR) -c $< -o $@

clean:
	rm -rf $(OBJS_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re