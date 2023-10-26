#include <vector>
#include <iostream>

#include "Assists.h"
#include "Influence.h"
#include "Persona.h"
#include "Snare.h"
#include "Spot.h"

class Play {
 private:
  std::vector<Spot*> matrix;

 public:
  Play(/* args */);
  ~Play();

  void set_entities(std::vector<Spot*> mats) { matrix = mats; }

  std::vector<Spot*> initGame(int numPersonas, int numSnares, int matrixWidth,
                              int matrixHeight) {
    for (Spot* matrix : matrix) {
      delete matrix;
    }
    matrix.clear();

    for (int i = 0; i < numPersonas; i++) {
      std::tuple<int, int> loc =
          Assists::createRandomLoc(matrixWidth, matrixHeight);
      Persona* persona = new Persona(std::get<0>(loc), std::get<1>(loc));
      matrix.push_back(persona);
    }

    for (int i = 0; i < numSnares; i++) {
      std::tuple<int, int> loc =
          Assists::createRandomLoc(matrixWidth, matrixHeight);
      Snare* snare = new Snare(std::get<0>(loc), std::get<1>(loc));
      matrix.push_back(snare);
    }
    return matrix;
  }
  std::vector<Spot*>& getMatrix() { return matrix; }

  void playCycle(int maxCycles, double snareTriggerDistance) {
    for (int i = 0; i < maxCycles; i++) {
      for (Spot* persona : matrix) {
        if (persona->getCategory() == 'P') {
          Persona* persona = dynamic_cast<Persona*>(persona);
          persona->shift(1, 0);
          for (Spot* snare : matrix ) {
            if (snare->getCategory() == 'S') {
              Snare* snare = dynamic_cast<Snare*>(snare);
              if (Assists::evaluateDistance(persona->getLoc(),
                                            snare->getLoc()) <=
                  snareTriggerDistance) {
                snare->implement(*persona);
                matrix.erase(std::remove(matrix.begin(), matrix.end(), snare),
                            matrix.end());
                delete snare;
              }
            }
          }
        }
      }
      bool outside = true;
      for (Spot* matrix : matrix) {
        if (matrix->getCategory() != 'P') {
          outside = false;
          break;
        }
      }
      if (outside) {
        std::cout << "Persona has won the game!";
        break;
      }
      std::cout << "Maximum number of cycles reached. Game over.";
    }
  }
};