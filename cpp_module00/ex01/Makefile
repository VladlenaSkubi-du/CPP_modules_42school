# Basic info

CC=clang++
RM=/bin/rm -rf
ECHO=echo

# Name

NAME=PhoneBookCpp

# Flags

CPPFLAGS=-Wall #-Wextra -Werror

# Source files

SRCS=phoneBook.cpp \
		validation.cpp \
		phoneBook_methods.cpp \
		contact_methods.cpp

# Include files

INCS= -I includes.hpp \
		-I PhoneBook.class.hpp \
		-I Contact.class.hpp

# Rules

OBJS=$(SRCS:%.cpp=%.o)

# ____________________________________

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJS)
	@$(ECHO) "\033[32;01mCompiling $(NAME)...\033[0m"
	@$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)
	@$(ECHO) "\033[32;01m$(NAME) is ready\033[0m"

$(OBJS): %.o : %.cpp $(wildcard $(INCS)/*.hpp)
	$(CC) $(CPPFLAGS) -c $(INCS) -o $@ $<

clean:
	@$(ECHO) "\033[34mDeleting $(NAME) o-files\033[0m"
	@$(RM) $(OBJS)

fclean: clean
	@$(ECHO) "\033[34mDeleting $(NAME) binary\033[0m"
	@$(RM) $(NAME)

re: fclean all
