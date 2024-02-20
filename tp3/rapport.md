# TP3
# Exercice 1 - Graphes d'ownership (50min)

## Cas A - Copie VS Référence

### Pourquoi n'y a-t-il pas de relation entre last_wheel et wheels[3] contrairement à first_wheel et wheels[0] ?
last_wheel est juste une copie de wheels[3]


## Cas B - Pointeurs-observants
### 1. Dans le graphe d'ownership, comment distingue-t-on un pointeur d'une référence ?
un pointeur est un bloc en ligne continue, une référence est un bloc en pointillé

### 2. Comment est représenté un pointeur nul ?
par une fonction vide

### 3. En termes de code, quelles sont les deux différences principales entre un pointeur-observant et une référence ?
un pointeur-observant peut être vide alors qu'une référence non
un pointeur-observant est réassignable alors qu'une référence non


## Cas C - Insertions dans un std::vector

### 1. Essayez de représenter les transitions dans le graphe d'ownership après le dernier push_back si celui-ci déclenchait une réallocation mémoire.
voir ex1/graphes-cas_c.jpg 1er graphe

### 2. Quel problème relève-t-on dans le graphe ?
comme products[0] a été déplacé vers une nouvelle adresse mémoire, on pert la référence de first_product vers products[0]

et donc comportement indéfini car on a une référence (first_product) vers un bloc de donnée qui n'existe plus.

### 3. Modifiez le code ci-dessus afin que products contienne des pointeurs ownants. Pensez à ajouter un destructeur à Client pour libérer la mémoire allouée dynamiquement
voir fichier ex1/cas_c.cpp

### 4.
voir ex1/graphes-cas_c.jpg 2ème graphe

### 5.
non
ce qui change c'est juste l'emplacement de la case qui contient son adresse


<br>


# Exercice 2 - La meilleure signature (15min)
voir dossier ex2


<br>


# Exercice 3 - Gestion des resources (55min)








































