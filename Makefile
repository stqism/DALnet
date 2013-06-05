DALnet:
	clang -c include/sqlite.cpp include/sqlite.h -O3
	clang -c include/sanitize.cpp include/sanitize.h -O3
	clang -c -Iinclude main.cpp -O3
	mv *.o obj
	clang++ obj/main.o obj/sanitize.o obj/sqlite.o -o bin/DALnet -lsqlite3
clean:
	rm -r obj/*
	rm -r include/*.h.gch
