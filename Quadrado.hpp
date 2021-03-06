#pragma once
#include "Forms.hpp"

class Quadrado : public Forms
{
public:
    Ponto ponto1;
    Ponto ponto2;
    Ponto ponto3;
    Ponto ponto4;

    Color cor1;
    Color cor2;
    Color cor3;
    Color cor4;

    

    Quadrado();
    void setQuadrado(vector<GLfloat> pontos);
    void setCores(vector<GLfloat> cores);
    vector<float> getColor();
    void printer();
    void render();
};