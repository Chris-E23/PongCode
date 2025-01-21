#include "constants.h"

typedef struct{
    int x; 
    int y; 
    float vertices[] = {
            // positions         // colors
            -0.5, 0.5, 0.0f,  1.0f, 1.0f, 1.0f,   1.0f, 1.0f, // bottom right
            -0.5, -0.5, 0.0f,  1.0f, 1.0f, 1.0f,   1.0f, 0.0f, // bottom left
            0.5, 0.5, 0.0f,  1.0f, 1.0f, 1.0f,   0.0f, 0.0f,
            0.5, -0.5,  0.0f,  1.0f, 1.0f, 1.0f,  0.0f, 1.0f// top 
        };
}POSITION; 

class paddle{
    POSITION currentPosition; 
    
    public:
        paddle(double x, double y){
            currentPosition.x = x;
            currentPosition.y = y;
        }
    void move(double x, double y){
        
    }
    void drawPaddle(){
      
        glGenVertexArrays(1, variables::SquareVBO);
        glGenBuffers(1, variables::SquareVBO);

        glBindVertexArray(variables::SquareVAO);

        glBindBuffer(GL_ARRAY_BUFFER, variables::SquareVBO);
        glBufferData(GL_ARRAY_BUFFER, sizeof(currentPosition.verti), vertices, GL_DYNAMIC_DRAW);
         
    }
   
    
}