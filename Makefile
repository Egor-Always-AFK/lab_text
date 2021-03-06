NAME = text

CC = clang++

SRCS = source/color.cpp source/font.cpp \
		source/point.cpp source/text.cpp \
		main.cpp \

HEADER = includes/color.hpp includes/font.hpp \
		includes/rectangle.hpp includes/point.hpp \
		includes/text.hpp \

OBJS = $(SRCS:.c = .o)

$(NAME) : $(OBJS) $(HEADER)
		$(CC) $(OBJS) -o $(NAME)

%.c:%.o $(HEADER)
	$(CC) -c $< -o $@

all: $(NAME)

fclean: clean
	rm -rf $(NAME)

clean: 
	rm -rf $(OBJS)
