CPP = g++
CPPFLAGS = -Wall -Werror -Wextra -std=c++98

HDR = harl.hpp
SRCS = main.cpp harl.cpp
OBJS = $(SRCS:.cpp=.o) 
TARGET = harl

all: $(TARGET)

$(TARGET): $(OBJS) $(HDR)
	$(CPP) $(CPPFLAGS) $(OBJS) -o $(TARGET)

%.o: %.cpp
	$(CPP) $(CPPFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(TARGET)

re: fclean all

zoro:
	@printf "\n"
	@printf "⡴⠁⠀⢌⠉⠀⠀⠀⡀⠀⡀⠀⡀⠸⡀⠀⠀⠀⣰⣴⡆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠂⠀⠂⠀⠐⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀ \n"
	@printf "⠀⠀⠀⣈⣱⣤⡀⠀⠙⢦⣳⡀⢻⡄⠁⠀⠀⡼⠃⠀⠉⠚⢦⣄⡀⣆⠀⠀⠀⠀⠀⣀⡀⠀⠀⠀⠃⠰⠀⠀⢰⠃⠀⣠⠂⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢠⠀ \n"
	@printf "⣀⣶⣿⣿⣗⣋⣉⣀⠀⠀⡇⢳⡀⢧⠀⢀⡾⠀⠀⠀⠀⠀⠀⠀⠉⠉⠛⣶⡶⠞⠉⠁⠀⠀⣀⠀⠀⠀⠀⢀⡆⣠⠎⢁⣤⡐⠀⠀⠀⠀⢀⣴⠀⢠⡆⠀⠀⠀⠀⠀⠀⠀⢀⠆⠀ \n"
	@printf "⣿⣿⣻⣿⣿⣻⠿⠋⠀⠀⢧⠀⠹⠄⠀⡞⠀⠀⠀⠀⢀⡖⠀⠀⢀⣤⣾⡥⣴⣖⡶⠖⣿⠞⢁⣠⡤⠾⠀⣾⣰⠋⢰⡊⠀⠀⠀⠀⠀⢀⡾⠁⣠⠏⢀⡠⠔⠀⢀⠄⠀⡠⠃⠀⠀ \n"
	@printf "⢻⣽⣿⣿⣭⣥⣀⣠⠀⠀⠸⡆⠀⠀⣾⠀⠀⠀⠀⢠⡞⠀⠀⠀⠈⠹⠛⠋⠉⠀⣠⡾⠗⠚⣋⡭⠿⠶⣦⣯⣿⣀⠀⢿⡀⠀⠀⠀⣴⡟⢁⡼⠋⣴⠟⣁⣤⠞⠁⢀⡴⠁⡠⠔⠚ \n"
	@printf "⠀⢻⣿⣿⡯⣴⡟⠛⣧⠀⠀⠙⠄⢰⠁⠀⠀⠀⢠⡿⠁⠀⠀⠀⠀⠀⠀⠀⠀⠘⠙⢠⡶⠛⠉⠀⠀⠀⠈⠈⠙⠻⣷⣬⣷⣄⠀⠀⢻⡷⠤⣤⣤⣥⣤⣭⣥⣤⣤⣈⣀⠀⠠⠔⠚ \n"
	@printf "⠀⠀⢈⣭⣶⠏⣿⣿⠘⡇⠀⠀⠀⡎⠀⠀⠀⣰⡿⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⡀⠀⠀⠀⠀⠀⠀⠀⠀⠈⢻⡻⠿⣷⣆⠸⡇⠀⠈⣿⡄⠀⠀⠀⠀⠀⠀⣸⡇⠀⠀⠀ \n"
	@printf "⣴⣾⣿⣿⡿⣼⢹⣿⠀⣷⢠⣄⣼⠁⠀⢠⡾⠋⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣾⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠁⠀⠘⢿⢿⣧⠀⠀⣿⠃⢀⡀⠀⠀⠀⠀⣾⡇⠀⠒⠉ \n"
	@printf "⣿⣿⣿⣿⡇⠁⢸⣿⣶⡿⣼⠀⠉⢄⣀⣡⠤⠤⠤⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⠀⠀⠀⠀⠀⠀⠀⠀⢠⠄⠀⠀⠀⠀⠘⠃⠉⠀⠀⣿⠀⠀⣿⠀⠀⠀⠀⣿⡇⢀⣠⡴ \n"
	@printf "⣿⣿⣿⣿⡇⠀⣾⢻⣿⣷⡇⠀⠀⠀⠁⢀⣀⡀⠀⠈⢧⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⠀⠀⠀⠀⠀⠀⠀⣠⡟⠀⠀⠀⠀⠀⠀⡆⠀⠀⠀⣿⠀⢸⡟⠀⠀⠀⠀⡿⢈⣫⣥⠤ \n"
	@printf "⣿⣿⣿⣿⡇⠀⡏⣼⢹⣮⠃⠀⠀⠀⣤⠀⢉⠉⠑⠻⣾⣦⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⣿⠀⠀⠀⠀⠀⣠⡾⠋⠀⠀⠀⠀⠀⠀⠀⡇⠀⠀⠀⡏⢀⣸⣧⠀⠀⠀⣼⠇⠈⠉⠀⣰ \n"
	@printf "⣿⣿⣿⣿⣧⠀⣷⡏⢸⢸⠀⠀⠀⠀⢿⠕⢦⣙⠲⣄⡀⠈⢇⠀⠀⠀⠀⠀⠀⠀⢸⣿⣿⠆⠀⠀⢠⡾⢋⡴⠃⠀⠀⠀⠀⠀⠀⢀⡇⠀⠀⢸⡇⠀⢸⣯⠀⠀⢰⣿⣠⠶⢾⣿⡿ \n"
	@printf "⢻⣿⣿⣿⣿⡄⠹⣇⣼⣾⠀⠀⠀⠀⠘⣇⠀⠛⢷⣦⣙⠲⢌⣧⡀⠀⠀⠀⠀⠀⠘⣿⣿⠀⠀⢠⡟⣡⡿⠀⠀⠀⠀⠀⠀⠀⠀⢸⠃⠀⢀⣾⠇⠀⠀⢿⡄⢠⣾⠇⣡⠶⠛⢉⡀ \n"
	@printf "⣸⣿⣿⣿⣿⣿⡀⠘⣿⡇⠀⠀⠀⠀⠀⠘⣦⡀⠘⠿⠿⠿⡦⣿⣷⣄⠀⠀⠀⠀⠀⣿⠁⠀⢠⡟⣰⠟⠁⠀⠀⠀⠀⠀⠀⠀⠀⢸⠀⣠⡿⠻⣦⡀⠀⠈⣳⣿⡟⢀⣬⣼⣿⣻⣥ \n"
	@printf "⣿⣿⣿⣿⠟⠈⣧⡀⣿⡇⠀⠀⠀⠀⠀⠀⠈⠙⠶⣤⣄⣀⡈⠈⠹⣿⣦⡀⠀⢀⣤⠁⠀⢠⣿⡴⠋⠀⠀⠀⠀⠀⠀⠀⠀⢀⣤⣾⠞⠉⠀⠀⠈⠻⣦⡈⡹⢿⡿⣿⣿⣿⡿⣟⣙ \n"
	@printf "⣿⣿⡟⠁⠀⠀⠘⣷⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣤⣤⡭⢭⣿⣿⣿⣷⣶⣿⡏⠀⠀⣾⣼⠁⠀⠀⠀⠀⠀⢀⣤⡴⠞⠋⢻⡟⠳⣶⣄⡀⠀⠀⠈⠉⠀⢀⣿⣿⡿⣿⣿⣿⣽ \n"
	@printf "⠛⠋⠀⠀⠀⠀⠀⢻⣿⡃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠳⠶⣮⣋⣉⣻⣿⣇⠀⠀⠀⣿⣽⣧⣀⣤⣶⣶⣿⣯⣁⣀⣀⢀⣿⠁⠀⢀⣹⣿⡀⠀⠀⠀⢨⣿⣿⣿⣿⣿⣿⣿⣿ \n"
	@printf "⠀⠀⠀⠀⠀⠀⠀⢸⡟⠂⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⢉⡟⠀⢀⣾⠿⠿⢿⡿⢿⣾⣿⣿⣷⣭⣿⣿⣿⣿⣿⣿⣿⣿⣿⠿⠀⠀⣰⣿⣿⡿⣿⣿⣿⣷⣽⣿ \n"
	@printf "⠀⠀⠀⠀⠀⠀⠀⢸⣧⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣸⠃⠀⣾⠇⠀⠀⠀⠀⣄⠙⢿⠿⠯⢿⣿⣿⣿⡿⠿⠛⠋⠁⠀⠀⠁⢄⣾⣿⣿⢱⣿⣿⣿⣏⣿⣿ \n"
	@printf "⠀⠀⠀⠀⠀⠀⠀⢸⣿⡆⠀⠀⠀⡖⢖⠂⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⡇⠀⣼⠋⠀⠀⠀⠀⠀⢸⣟⠛⠓⠀⠀⠈⡽⠛⠛⣷⡀⠀⠀⠀⠀⠀⣼⣿⣿⣿⣿⣿⡿⣿⣿⣿⣿ \n"
	@printf "⠀⠀⠀⠀⠀⠀⠀⣿⡏⢻⠀⠀⠀⠀⠸⡷⢤⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣼⠀⢠⡿⠃⠀⠀⠀⠀⠀⠈⠻⣄⠀⠀⠀⡼⢁⣤⠾⠋⠀⠀⠀⠀⠀⣾⣿⣿⣿⡿⢿⣿⣿⣿⣿⣿⣿ \n"
	@printf "⠤⠤⠤⠤⠤⠤⠶⢿⡧⢬⣧⣄⣀⣀⣀⣳⡀⡿⢶⣄⡀⠀⠀⠀⠀⢤⣴⡇⣠⡾⠀⡀⠀⠀⠀⠀⠀⠀⠀⠹⣆⣠⡼⣿⠋⠁⠀⠀⠀⠀⠀⠆⣴⣿⡿⣻⣥⣿⣿⣿⣿⣿⣿⣿⣿ \n"
	@printf "⠀⠒⠀⠀⠀⠘⢻⣿⠋⠙⢿⣏⠉⠛⠛⠛⢿⠳⣄⡈⠛⠳⢤⣄⣀⠐⣷⣛⣭⡶⠿⠛⠀⠀⠀⠀⠀⠀⠀⠀⠈⠙⠁⠀⣤⣄⡀⠀⠀⠀⠀⣼⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿ \n"
	@printf "⠀⠀⠀⠀⠀⠐⢸⣿⣧⠀⠘⣿⣄⠀⠀⠀⠈⠳⣄⡙⠲⢤⣄⡈⠙⠛⠻⠯⠥⢤⣄⣀⣀⣀⣀⣀⠀⠀⠀⠀⢀⣀⣠⣾⣷⣿⡇⠀⠀⠀⣾⣿⣿⡿⣿⡿⣿⡿⣿⣿⣿⣿⣿⣿⣿ \n"
	@printf "⠀⠀⠀⠀⠀⠀⣸⣿⠹⣷⡀⠸⣿⡄⠀⠀⠀⠀⠈⠙⠲⢤⣌⠉⠓⠒⠤⣤⣀⡀⠀⠉⠉⠉⠉⠉⠛⠛⣻⣿⢛⣛⣫⣽⠿⠟⠀⠀⣠⣾⣿⣿⣿⠃⣿⠑⣿⠃⣸⣿⣿⣿⣿⣿⣿ \n"
	@printf "⠀⠀⠀⠀⠀⠀⣿⣿⠀⠸⣿⣆⠹⣿⣄⠀⠀⠀⠀⠰⣄⣀⠈⠉⠓⠶⢤⣀⣀⣈⡉⠉⠉⠑⠂⠀⣈⣽⣿⣿⠿⠟⠋⠁⠀⢀⣤⣾⣿⣿⣿⣿⡏⢸⡏⢠⣿⣴⣿⣿⣿⣿⣿⣿⣿ \n"
	@printf "⡅⠀⠀⠀⢨⠀⣿⣿⠀⠀⠘⢿⡀⠀⠻⡄⠀⠀⠀⠀⠙⣿⡛⢶⣤⣤⣀⣀⠉⠉⠉⠉⠉⠉⠉⠉⠉⠀⠀⠀⠀⠀⠀⣠⣶⣿⣿⣿⣿⣿⣿⣿⣀⣼⣷⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿ \n"
	@printf "⡇⠀⠀⠀⠀⠀⣿⣿⠀⠀⠀⠀⠹⣆⠀⠻⣆⠀⠀⠀⠀⠈⠛⠦⣬⣙⠛⣿⣿⠿⠿⠿⠗⠂⠀⠀⠀⠀⠀⢀⣠⣶⡿⡿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣻ \n"
	@printf "⡇⠀⠀⠀⠀⠀⣿⣿⠀⠀⠀⠀⠀⠈⢳⣄⠘⠳⣦⣄⡀⠀⠀⠀⠀⠉⠉⠉⠉⣹⠆⠀⠀⠀⠀⢀⣠⣴⣶⠟⠋⠀⣠⡾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⢣⠏ \n"
	@printf "⡇⠀⠀⠀⠀⠀⣿⣿⠀⠀⠀⠀⠀⠀⠀⠙⢷⣄⢸⡏⠛⠻⢶⣶⣤⣤⣤⣴⣚⣁⣀⣤⣴⣶⣿⡿⠋⠉⠁⢀⣤⣾⣫⣽⡿⠟⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠃⡾⠀ \n"
	@printf "⣇⠀⠀⠀⠀⠀⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⣿⣧⠀⠀⠀⠀⠘⠿⠍⣉⠉⠉⠉⢉⣴⡿⠋⠀⣀⣴⣾⣿⡷⠟⠋⠁⢀⣼⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠋⣸⠁⠀ \n"
	@printf "⡇⠀⠀⠀⠀⠀⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠸⣿⡇⠀⠀⠀⠀⠀⠀⣨⣀⣤⣾⣟⣡⣤⡾⠿⠟⠛⠉⢡⣄⠀⢀⣴⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠇⢰⡇⠀⠀ \n"
	@printf "⠷⠦⠴⠤⠤⠀⣿⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢻⣿⡄⠀⠀⢀⣤⡾⠟⠛⠉⠉⠁⠀⠀⠀⠀⠀⠀⠀⠀⠙⣿⠟⣹⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⠋⢀⡿⠀⠀⠀ \n"
	@printf "$(END)"


.PHONY: all clean fclean re zoro