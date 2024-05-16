#include <vector>
#include <iostream>
#pragma once
namespace ariel{
class Graph{

    private:
    std:: vector <std:: vector<int>> g;
    int size;
    bool symmetric;
    bool weighted;


    public:
    void loadGraph(const std:: vector <std:: vector<int>>);//func of object graph
    void const printGraph(); //func of object graph
    // pahad elokim ishmor at oi va'avoi temperatura hazaya hashemesh asta li tov.
    std:: vector <std:: vector<int>> getGraph() const;
    bool getSymmetricMat() const;
    bool getWeighted() const;

    };
};

