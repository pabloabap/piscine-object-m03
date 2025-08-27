# CABECERA

NAME		= DependencyInversion

CXX			= c++
CXXFLAGS	= -Wall -Wextra -Werror -pedantic -std=c++98

HEADERS_DIR	= ./include
HEADERS		= \
	ConstStringHeader.hpp \
	DateHeader.hpp \
	FileLogger.hpp \
	IHeader.hpp \
	ILogger.hpp \
	OStreamLogger.hpp \
	main.hpp
HEADERS		:= $(addprefix $(HEADERS_DIR)/, $(HEADERS))

SRCS_DIR	= ./src
SRCS		= main.cpp
SRCS		:= $(addprefix $(SRCS_DIR)/, $(SRCS))

OBJS_DIR	= ./build
OBJS		= $(addprefix $(OBJS_DIR)/, $(notdir $(patsubst %.cpp, %.o, $(SRCS))))

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -I$(HEADERS_DIR) $(OBJS) -o $(NAME)
	@if  ! grep -q $(NAME) ../.gitignore; then echo $(NAME) >> ../.gitignore; fi

$(OBJS_DIR):
	mkdir -p $(OBJS_DIR)

$(OBJS_DIR)/%.o: $(SRCS_DIR)/%.cpp $(HEADERS) Makefile | $(OBJS_DIR)
	$(CXX) $(CXXFLAGS) -I$(HEADERS_DIR) -c $< -o $@

clean:
	rm -rf $(OBJS_DIR)

fclean: clean
	rm -f $(NAME) ./*.txt

re: fclean all

.PHONY: all clean fclean re