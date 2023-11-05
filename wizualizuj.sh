#!/bin/bash

if [[ $1 == "" ]]; then
  echo "Error! Podaj test, który chcesz zwizualizować!"
  exit 0
fi

if [[ $2 != "-nie-kompiluj" && $2 != "-kompiluj" ]]; then
  echo -n "Skompilować? [Tt/Nn]: "; read odp
fi

if [[ $odp == "T" || $odp == "t" || $2 == "-kompiluj" ]]; then
  echo "Kompilacja prz.cpp..."
  g++ prz.cpp -o prz -O3 -std=c++20
  echo "Kompilacja wiz.cpp..."
  g++ wiz.cpp -o wiz -std=c++20
elif [[ $2 != "-nie-kompiluj" && $odp != "N" && $odp != "n" ]]; then
  echo "Tak ciężko wybrać istniejącą opcję???"
  echo -ne "\e[1;91mTo "; sleep 1;
  echo -ne "\e[1;92mse "; sleep 1;
  echo -ne "\e[1;93mtrochę "; sleep 1;
  echo -e "\e[1;96mpoczekałeś!!!\e[0m"; sleep 1;
  exit 0
fi

echo ""

./prz < $1 > odpowiedz
./wiz $1 odpowiedz
