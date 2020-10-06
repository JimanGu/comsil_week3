cc=g++
target = hw03
objects = main.o Str.o

$(target) : $(objects)
	$(cc) -o $(target) $(objects)

$(objects) : Str.h

.PHONY : clean
clean : 	
	rm $(target) $(objects)

