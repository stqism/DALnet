DALnet:
	clang -c include/sqlite.cpp include/sqlite.h -O3
	clang -c include/sanitize.cpp include/sanitize.h -O3 -fPIC
	clang -c -Iinclude server.cpp -O3 -std=c++11
	mv *.o obj
	clang++ -std=c++11 obj/server.o obj/sanitize.o obj/sqlite.o -o bin/DALnet-server -lsqlite3
	clang++ -fPIC -shared DALnet-client.cpp obj/sanitize.o -o lib/DALnet-client.so
clean:
	rm -r obj/*
	rm -r include/*.h.gch
