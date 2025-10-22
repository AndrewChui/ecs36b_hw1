#Name: Kwok Chui
#Student ID: 923 216 256
CXX=g++
CXXFLAGS=-Wall

#target robot - build the executablr robot
robot: robot.cpp Angle.cpp Angle.h
	$(CXX) -o $@ robot.cpp Angle.cpp
#target clean - delete all .o files and the 
execs = robot
clean: 
	rm -f $(execs) *.o