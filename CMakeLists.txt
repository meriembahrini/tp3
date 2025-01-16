cmake_minimum_required(VERSION 3.29)
project(untitled3)

set(CMAKE_CXX_STANDARD 20)

add_executable(untitled3 main.cpp
        Magasin.h
        Magasin.cpp
        Produit.h
        Produit.cpp
        Client.h
        Client.cpp
        Commande.cpp)
