.PHONY = run clean

test.out: test.cpp
	@ $(CXX) -O2 test.cpp -o test.out
run:test.out
	@ ./test.out
clean:
	@ rm test.out