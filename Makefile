build:
	gcc ./src/*.c -I ./headers -I ./libs -I view -o ./recipe-book
clean:
	rm ./recipe-book
run:
	./recipe-book	
