cmake_minimum_required(VERSION 3.10)

project(Inventory)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(SOURCES
    main.cpp
    components/item_check/item_check.cpp
    components/item_count_by_same_magical_property/item_count_by_same_magical_property.cpp
    components/item_graph/item_graph.cpp
    components/item_insert/item_insert.cpp
    components/item_list_by_name/item_list_by_name.cpp
    components/item_list_by_rarity/item_list_by_rarity.cpp
    components/item_remove_by_rarity/item_remove_by_rarity.cpp
    components/item_search/item_search.cpp
    components/item_similarity_calc/item_similarity_calc.cpp
    components/menu/menu.cpp
)

add_executable(
    Inventory ${SOURCES}
)
