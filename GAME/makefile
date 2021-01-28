COMMON = g++ -std=c++17 -Wall
CARGS = -c
S = src/
O = obj/

OBJS = $(O)SandboxApp.o
GAME: $(OBJS)
	$(COMMON) $(OBJS) -L. -lENGINE -o GAME

$(O)SandboxApp.o: $(S)SandboxApp.cpp
	$(COMMON) $(CARGS) $(S)SandboxApp.cpp -o $(O)SandboxApp.o