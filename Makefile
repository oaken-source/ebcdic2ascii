
BIN = ebcdic2ascii

SRC = ebcdic2ascii.c

.PHONY: all clean

all: $(BIN)

clean:
	$(RM) $(BIN)

$(BIN): $(SRC)
