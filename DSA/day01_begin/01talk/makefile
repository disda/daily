

.PHONY:clean all
CC=g++
CFLAGS=-Wall -g
BIN=01cal 02oneOfBinary 03pow 04recall 05mulRecall 06mulRecall2 07tailRecursion 08binRecursion 09fibonacci 10findTwoMax
all:$(BIN)
%.o:%.c
	$(CC) $(CFLAGS) -c $< -o $@
clean:
	rm -f *.o $(BIN)




