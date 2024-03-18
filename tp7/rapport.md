# TP7

## Exercice 1 - Appels polymorphes (20min)

### I1
type statique : Tiger
type dynamique : Tiger
fonction appelée : Tiger::move()

### I2
type statique : Animal
type dynamique : Tiger
fonction appelée : Tiger::move()
--> car Animal::move() est virtual et Tiger::move() à la même signature que Animal::move()

### I3
type statique : Bird
type dynamique : Bird
fonction appelée : Bird::move()

### I4
type statique : Animal
type dynamique : Bird
fonction appelée : Animal::move()
--> Animal::move() est virtual mais Bird::move() n'a pas la même signature que Animal::move() 
car il y a un ```const``` à la fin de Bird::move().

### I5
type statique : Bird
type dynamique : Bird
fonction appelée : Bird::can_eat_plant()

### I6
type statique : Herbivore
type dynamique : Bird
fonction appelée : Herbivore::can_eat_plant()
--> Herbivore::can_eat_plant() est virtual mais Bird::can_eat_plant() n'a pas la même signature que Herbivore::can_eat_plant()
car il y a un ```const``` à la fin de Herbivore::can_eat_plant().

### I7
type statique : Carnivore
type dynamique : Bird
fonction appelée : Carnivore::can_eat_plant()
--> car Carnivore::can_eat_plant() n'est pas virtual

### I8
type statique : Tiger
type dynamique : Tiger
fonction appelée : Carnivore::can_eat_plant()
--> car il n'existe pas de fonction Tiger::can_eat_plant() donc 
c'est Carnivore::can_eat_plant() de la classe Parent donc Carnivore qui est appelée,

### I9
type statique : Tiger
type dynamique : Tiger
fonction appelée : Tiger::can_eat_meat()

### I10
type statique : Carnivore
type dynamique : Tiger
fonction appelée : Carnivore::can_eat_meat()
--> car Carnivore::can_eat_meat() n'est pas virtual

### I11
type statique : Bird
type dynamique : Bird
fonction appelée : Bird::type()

### I12
type statique : Animal
type dynamique : Bird
fonction appelée : Animal::type() 
--> car Animal::type() n'est pas virtual et même si c'était virtual ce serait qd même Animal::type() qui serait appelée 
car il y a ```const``` à la fin de Animal::type() et pas à la fin de Bird::type()

### I13
type statique : Animal
type dynamique : Tiger
fonction appelée : Animal::type() 
--> car Animal::type() n'est pas virtual



<br>



## Exercice 2 - Donjons (1h40)

## A. Existant
2.
#### Dans Dungeon.cpp, quel est le rôle de la fonction display ?
display dessine le rectangle

#### Dans Dungeon.cpp, quel est le rôle de la fonction update ?
update met à jour les entités (leurs intéractions, déplacement, etc.) dans le rectangle

#### Quelle variable du main porte l'ownership des entitées ?
all_entities