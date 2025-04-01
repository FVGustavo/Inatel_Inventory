cmake_minimum_required(VERSION 3.10)

project(Inventory)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(SOURCES
    main.cpp
    item_check/item_check.cpp
    item_count_by_same_magical_property/item_count_by_same_magical_property.cpp
    item_graph/item_graph.cpp
    item_insert/item_insert.cpp
    item_list_by_name/item_list_by_name.cpp
    item_list_by_rarity/item_list_by_rarity.cpp
    item_remove_by_rarity/item_remove_by_rarity.cpp
    item_search/item_search.cpp
    item_similarity_calc/item_similarity_calc.cpp
    menu/menu.cpp
)

add_executable(
    Inventory ${SOURCES}
)
