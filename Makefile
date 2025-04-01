CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra -I./item -I./node -I./menu -I./item_check -I./item_count_by_same_magical_property -I./item_graph \
-I./item_insert -I./item_list_by_name -I./item_list_by_rarity -I./item_remove_by_rarity -I./item_search -I./item_similarity_calc \

TARGET = main

SOURCES = main.cpp menu/menu.cpp item_check/item_check.cpp item_count_by_same_magical_property/item_count_by_same_magical_property.cpp \
item_graph/item_graph.cpp item_insert/item_insert.cpp item_list_by_name/item_list_by_name.cpp item_list_by_rarity/item_list_by_rarity.cpp \
item_remove_by_rarity/item_remove_by_rarity.cpp item_search/item_search.cpp item_similarity_calc/item_similarity_calc.cpp

OBJECTS = main.o menu/menu.o item_check/item_check.o item_count_by_same_magical_property/item_count_by_same_magical_property.o \
item_graph/item_graph.o item_insert/item_insert.o item_list_by_name/item_list_by_name.o item_list_by_rarity/item_list_by_rarity.o \
item_remove_by_rarity/item_remove_by_rarity.o item_search/item_search.o item_similarity_calc/item_similarity_calc.o


.PHONY: all compile build run clean

all: compile build run

compile: $(OBJECTS)

build: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJECTS)

main.o: main.cpp menu/menu.hpp item_insert/item_insert.hpp item_similarity_calc/item_similarity_calc.hpp item_graph/item_graph.hpp
	$(CXX) $(CXXFLAGS) -c main.cpp -o main.o

menu/menu.o: menu/menu.cpp menu/menu.hpp
	$(CXX) $(CXXFLAGS) -c menu/menu.cpp -o menu/menu.o

item_check/item_check.o: item_check/item_check.cpp item_check/item_check.hpp
	$(CXX) $(CXXFLAGS) -c item_check/item_check.cpp -o item_check/item_check.o

item_count_by_same_magical_property/item_count_by_same_magical_property.o: item_count_by_same_magical_property/item_count_by_same_magical_property.cpp item_count_by_same_magical_property/item_count_by_same_magical_property.hpp
	$(CXX) $(CXXFLAGS) -c item_count_by_same_magical_property/item_count_by_same_magical_property.cpp -o item_count_by_same_magical_property/item_count_by_same_magical_property.o

item_graph/item_graph.o: item_graph/item_graph.cpp item_graph/item_graph.hpp
	$(CXX) $(CXXFLAGS) -c item_graph/item_graph.cpp -o item_graph/item_graph.o

item_insert/item_insert.o: item_insert/item_insert.cpp item_insert/item_insert.hpp
	$(CXX) $(CXXFLAGS) -c item_insert/item_insert.cpp -o item_insert/item_insert.o

item_list_by_name/item_list_by_name.o: item_list_by_name/item_list_by_name.cpp item_list_by_name/item_list_by_name.hpp
	$(CXX) $(CXXFLAGS) -c item_list_by_name/item_list_by_name.cpp -o item_list_by_name/item_list_by_name.o

item_list_by_rarity/item_list_by_rarity.o: item_list_by_rarity/item_list_by_rarity.cpp item_list_by_rarity/item_list_by_rarity.hpp
	$(CXX) $(CXXFLAGS) -c item_list_by_rarity/item_list_by_rarity.cpp -o item_list_by_rarity/item_list_by_rarity.o

item_search/item_search.o: item_search/item_search.cpp item_search/item_search.hpp
	$(CXX) $(CXXFLAGS) -c item_search/item_search.cpp -o item_search/item_search.o

item_similarity_calc/item_similarity_calc.o: item_similarity_calc/item_similarity_calc.cpp item_similarity_calc/item_similarity_calc.hpp
	$(CXX) $(CXXFLAGS) -c item_similarity_calc/item_similarity_calc.cpp -o item_similarity_calc/item_similarity_calc.o

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(OBJECTS) $(TARGET)
