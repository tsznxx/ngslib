
all:
	g++  -fsched-spec-load -fPIC -w   -D NDEBUG -c -o ParseCommandLine.o ParseCommandLine.cpp
	g++  -fsched-spec-load -fPIC -w   -D NDEBUG -c -o StructureImageHandler.o StructureImageHandler.cpp
	g++  -fsched-spec-load -fPIC -w   -D NDEBUG -c -o RNA.o RNA.cpp
	g++  -fsched-spec-load -fPIC -w   -D NDEBUG -c -o thermodynamics.o thermodynamics.cpp
	g++  -fsched-spec-load -fPIC -w   -D NDEBUG -c -o algorithm.o algorithm.cpp
	g++  -fsched-spec-load -fPIC -w   -D NDEBUG -c -o alltrace.o alltrace.cpp
	g++  -fsched-spec-load -fPIC -w   -D NDEBUG -c -o arrayclass.o arrayclass.cpp
	g++  -fsched-spec-load -fPIC -w   -D NDEBUG -c -o dotarray.o dotarray.cpp
	g++  -fsched-spec-load -fPIC -w   -D NDEBUG -c -o draw.o draw.cpp
	g++  -fsched-spec-load -fPIC -w   -D NDEBUG -c -o extended_double.o extended_double.cpp
	g++  -fsched-spec-load -fPIC -w   -D NDEBUG -c -o forceclass.o forceclass.cpp
	g++  -fsched-spec-load -fPIC -w   -D NDEBUG -c -o MaxExpect.o MaxExpect.cpp
	g++  -fsched-spec-load -fPIC -w   -D NDEBUG -c -o MaxExpectStack.o MaxExpectStack.cpp
	g++  -fsched-spec-load -fPIC -w   -D NDEBUG -c -o outputconstraints.o outputconstraints.cpp
	g++  -fsched-spec-load -fPIC -w   -D NDEBUG -c -o pfunction.o pfunction.cpp
	g++  -fsched-spec-load -fPIC -w   -D NDEBUG -c -o probknot.o probknot.cpp
	g++  -fsched-spec-load -fPIC -w   -D NDEBUG -c -o random.o random.cpp
	g++  -fsched-spec-load -fPIC -w   -D NDEBUG -c -o rna_library.o rna_library.cpp
	g++  -fsched-spec-load -fPIC -w   -D NDEBUG -c -o stackclass.o stackclass.cpp
	g++  -fsched-spec-load -fPIC -w   -D NDEBUG -c -o stackstruct.o stackstruct.cpp
	g++  -fsched-spec-load -fPIC -w   -D NDEBUG -c -o stochastic.o stochastic.cpp
	g++  -fsched-spec-load -fPIC -w   -D NDEBUG -c -o structure.o structure.cpp
	g++  -fsched-spec-load -fPIC -w   -D NDEBUG -c -o TProgressDialog.o TProgressDialog.cpp
	ar -r Draw.a ParseCommandLine.o StructureImageHandler.o RNA.o thermodynamics.o algorithm.o alltrace.o arrayclass.o dotarray.o     draw.o extended_double.o forceclass.o MaxExpect.o MaxExpectStack.o outputconstraints.o     pfunction.o probknot.o random.o rna_library.o stackclass.o stackstruct.o stochastic.o structure.o TProgressDialog.o

clean:
	rm  -f *o draw/*o
