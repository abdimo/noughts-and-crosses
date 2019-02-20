CC       = gcc
CFLAGS   = -Wall -Wextra
OBJFILES = main.o intro_game_setup.o player_move.o random_computer_move.o game_event_won.o game_event_drawn.o draw_updated_grid.o
TARGET   = game

all: $(TARGET)

$(TARGET): $(OBJFILES)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJFILES) 
	
clean:
	rm -f $(OBJFILES) $(TARGET) *~