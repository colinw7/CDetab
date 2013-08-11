CC = g++
RM = rm

CDEBUG = -g
LDEBUG = -g

INC_DIR = ../include
OBJ_DIR = ../obj
LIB_DIR = ../lib
BIN_DIR = ../bin

all: $(BIN_DIR)/CDetab

SRC = \
CDetab.cpp \

OBJS = $(patsubst %.cpp,$(OBJ_DIR)/%.o,$(SRC))

LIBS =

CPPFLAGS = \
-I. \
-I$(INC_DIR) \
-I../../CStrUtil/include \
-I../../CUtil/include \

LFLAGS = \
-L$(LIB_DIR) \
-L../../CStrUtil/lib \
-lCStrUtil

clean:
	$(RM) -f $(OBJ_DIR)/*.o
	$(RM) -f $(BIN_DIR)/CDetab

$(OBJS): $(OBJ_DIR)/%.o: %.cpp
	$(CC) -c $< -o $(OBJ_DIR)/$*.o $(CPPFLAGS)

.SUFFIXES: .cpp

$(BIN_DIR)/CDetab: $(OBJ_DIR)/CDetab.o
	$(CC) $(LDEBUG) -o $(BIN_DIR)/CDetab $(OBJ_DIR)/CDetab.o $(LFLAGS)
