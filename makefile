CXX = g++
CXXFLAGS = -std=c++0x
CXXFLAGS += -Wall
CXXFLAGS += -pedantic-errors
CXXFLAGS += -g
LDFLAGS = -lboost_date_time

CXX = main.cpp
CXX += list.cpp
CXX += list.h
CXX += node.h

default:
	g++ -std=c++0x ${CXX} -o prog
