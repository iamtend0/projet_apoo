CC= g++
EXEC= Exec
FLAGS= -Wall
all : $(EXEC)

$(EXEC): main.o Date.o Diplome.o Entreprise.o Etudiant.o EtudiantPremierCycle.o EtudiantSecondCycle.o Experiences.o Inscription.o RendezVous.o
		$(CC) $^ -o $@

%o: %.cpp
		$(CC) -c $^ -o $@ $(FLAGS)

clean:
		rm -rf *.o
