#!/bin/bash

lang=$1

# check if lang is empty
if [ -z "$lang" ]
then
    echo "Please enter a language"
    exit 1
fi

# if lang is not cpp or go
if [ "$lang" != "cpp" ] && [ "$lang" != "go" ]
then
    echo "Please enter a valid language: cpp or go"
    exit 1
fi

# create array of strings
dirs=("a" "a1" "b" "b1" "c" "c1" "d" "d1" "e" "e1" "f" "f1" "g" "g1")

# if lang is go
if [ "$lang" == "go" ]
then
    rm *.cpp
    for dir in "${dirs[@]}"
    do
        rm -rf $dir/
        mkdir $dir
        cp go/template.go $dir/$dir.go
    done
fi


# if lang is go
if [ "$lang" == "cpp" ]
then
    rm *.cpp
    for dir in "${dirs[@]}"
    do
        rm -rf $dir
        cp cpp/template.cpp $dir.cpp
    done
    g++ a.cpp
fi
