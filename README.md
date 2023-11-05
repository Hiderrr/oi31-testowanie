# Wizualizacja zadania przyciski

Program ma ułatwić znajdowanie odpowiedzi na pytanie `Dlaczego mi ten test nie działa???`

### Przygotowanie:
- folder zawierający kod programu wizualizującego (`wiz.cpp`) będę nazywał `folderem głównym`
- W pliku `prz.cpp` w `folderze głównym` umieść swój program.
- Najwygodniej umieścić w `folderze głównym` testy, które planujemy wizualizować
### Użytkowanie:
##### Najprostsza forma:
```console
$ ./wizualizuj.sh prz0.in
Skompilować? [Tt/Nn]: T
Kompilacja prz.cpp...
Kompilacja wiz.cpp...

[ ... wizualizacja ... ]
```
#####  Rezygnacja z pytania o kompilację: 
[ *Nie chcemy kompilować*  ]
```console
$ ./wizualizuj.sh prz0.in -nie-kompiluj
```
[ *Chcemy kompilować, więc po co ma nas pytać*  ]
```console
$ ./wizualizuj.sh prz0.in -kompiluj
```
