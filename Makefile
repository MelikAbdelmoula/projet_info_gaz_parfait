CXX = g++
CC  = $(CXX)

CXXFLAGS = -std=c++11  # C++11

# Partie commentÃ©e : choisissez les options que vous voulez avoir
#                    en dÃ©commentant la/les lignes correspondantes
#
CXXFLAGS += -pedantic -Wall         # pour les purs et durs
# CXXFLAGS += -g                    # pour debugger
# CXXFLAGS += -O2                   # pour optimiser la vitesse

all: testVecteur3D testParticule testEnceinte

#Vecteur3D
Vecteur3D.o: Vecteur3D.cc Vecteur3D.h

testVecteur3D.o: testVecteur3D.cc Vecteur3D.h

testVecteur3D: testVecteur3D.o Vecteur3D.o

#Particule
Particule.o : Particule.cc particule.h 

testParticule.o : testParticule.cc particule.h 

testParticule : testParticule.o Particule.o Vecteur3D.o

#Enceinte
Enceinte.o : Enceinte.cc enceinte.h

testEnceinte.o : Enceinte.cc enceinte.h

testEnceinte : testEnceinte.o Enceinte.o 
