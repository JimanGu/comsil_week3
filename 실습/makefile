cc=g++
target = main
objects = main.o

$(target) : $(objects)
	$(cc) -o $(target) $(objects)

$(objects) : Array.h RangeArray.h

.PHONY : clean
clean : 	
	rm $(target) $(objects)

