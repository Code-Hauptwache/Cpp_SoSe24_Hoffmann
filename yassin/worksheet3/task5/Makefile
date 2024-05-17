CXX = g++
CXXFLAGS = -Wall -g
SRC_DIR = ../task4
SRCS = $(wildcard $(SRC_DIR)/*.cpp)
EXES = $(notdir $(SRCS:.cpp=))

.PHONY: all clean

all: $(EXES)

$(EXES): %: $(SRC_DIR)/%.cpp
	$(CXX) $(CXXFLAGS) -o $@ $<

clean:
	rm -f $(EXES)
