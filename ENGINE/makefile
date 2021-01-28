COMMON = g++ -std=c++17 -Wall
CARGS = -c -DENG_BUILD_DLL
S = src/
SE = src/ENGINE/
O = obj/

OBJS = $(O)Application.o
LIBS =
ENGINE: $(OBJS)
	$(COMMON) $(OBJS) $(LIBS) -shared -fpic -o ../GAME/ENGINE.dll

$(O)Application.o: $(SE)Application.cpp
	$(COMMON) $(CARGS) $(SE)Application.cpp -o $(O)Application.o