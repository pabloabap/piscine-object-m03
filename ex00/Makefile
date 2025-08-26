# Cabecera

NAME		= SingleREsponsability

CPP			= c++
CPP_FLAGS	= -Wall -Wextra -Werror -std=c++98 -pedantic

HEADERS_DIR		= ./include
HEADERS_FILE	= \
	main.hpp \
	Car.hpp \
	Brake.hpp  \
	Engine.hpp \
	SpeedController.hpp \
	Transmission.hpp \
	Wheel.hpp
HEADERS			= $(addprefix $(HEADERS_DIR)/, $(HEADERS_FILE))

SRCS_DIR		= ./src
SRCS_FILES		= \
	main.cpp \
	Car.cpp \
	Brake.cpp  \
	Engine.cpp \
	SpeedController.cpp \
	Transmission.cpp \
	Wheel.cpp
SRCS			= $(addprefix $(SRCS_DIR)/, $(SRCS_FILES))

OBJS_DIR		= ./build
OBJS			= $(addprefix $(OBJS_DIR)/, $(notdir $(patsubst %.cpp, %.o, $(SRCS))))

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