#ifndef CAMERA_HPP
#define CAMERA_HPP

#include <Enums.hpp>
#include <glm.hpp>

class Camera
{
    Camera();
    ~Camera();

    void updateDrawMode(DrawMode & mode);
    void updatePosition(glm::vec4 & point);
    void updateDirection(glm::vec4 & dir);

    void translatePosition(glm::mat4x4 & trans);
    void rotatePosition(glm::mat4x4 & rot);
    
    DrawMode currentDrawMode();
    glm::vec4 currentPostion();
    glm::vec4 currentDirection();
};

#endif