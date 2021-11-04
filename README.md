# C++ Practice
This repo contains the code I write while learning C++

- Super cool Makefile template for g++ that automatically tracks all of your codes dependencies
```javascript
CXX=g++
CXXFLAGS= -MMD
OBJECTS=implementation_file1.o implementation_file2.o ...
DEPENDS=${OBJECTS:.o=.d}
EXEC=desired_name_of_executable

${EXEC}: ${OBJECTS}
	${CXX} ${OBJECTS} -o ${EXEC}

-include ${DEPENDS}
```
just replace implementation_fileN with names of .cc/.cpp files that need to be compiled to .o and linked, and replace desired_name_of_executable with name of executable.
