all: classification run clean

classification:
	g++ -o classification classification.cpp -I ./include

run:
	./classification

clean:
	rm -rf *.o classification