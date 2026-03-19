APP = game

run: $(APP)
	./$(APP)

$(APP): game.cpp
	g++ game.cpp -o $(APP) ./libraylib.a -lGL -lm -lpthread -ldl -lrt -lX11

clean:
	rm -f $(APP)
