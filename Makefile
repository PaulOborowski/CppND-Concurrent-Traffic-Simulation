.PHONY: format
format:
	clang-format src/* -i

.PHONY: build
build:
	mkdir -p build 	
	cd build && \
	cmake .. -DCMAKE_BUILD_TYPE=Release && \
	make 

.PHONY: debug
debug:	
	mkdir -p build 
	cd build && \
	cmake .. -DCMAKE_BUILD_TYPE=Debug && \
	make 