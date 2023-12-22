
//#include <GL/glut.h>
//
//float translationX = 0.0;
//float translationY = 0.0;
//float rotationAngle = 0.0;
//
//void display() {
//    glClear(GL_COLOR_BUFFER_BIT);
//
//    glPushMatrix(); // Save the current transformation matrix
//
//    // Apply translation
//    glTranslatef(translationX, translationY, 0.0);
//
//    // Apply rotation
//    glRotatef(rotationAngle, 0.0, 0.0, 1.0);
//
//    glBegin(GL_TRIANGLES);
//    glColor3f(0.0, 0.0, 1.0);
//    glVertex2f(0.0, 0.4);   // Vertex 1 (top)
//    glVertex2f(-0.4, -0.4);  // Vertex 2 (bottom-left)
//    glVertex2f(0.4, -0.4);   // Vertex 3 (bottom-right)
//    glEnd();
//
//    glPopMatrix(); // Restore the previous transformation matrix
//
//    glFlush();
//}
//
//void keyboard(unsigned char key, int x, int y) {
//    switch (key) {
//        case 'u':
//            translationY += 0.1; // Move up
//            break;
//        case 'd':
//            translationY -= 0.1; // Move down
//            break;
//        case 'l':
//            translationX -= 0.1; // Move left
//            break;
//        case 'r':
//            translationX += 0.1; // Move right
//            break;
//        case 'o':
//            rotationAngle += 5.0; // Rotate clockwise
//            break;
//        case 'c':
//            rotationAngle -= 5.0; // Rotate counterclockwise
//            break;
//    }
//
//    glutPostRedisplay(); // Request a redraw
//}
//
//int main(int argc, char** argv) {
//    glutInit(&argc, argv);
//    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
//    glutInitWindowSize(500, 500);
//    glutCreateWindow("OpenGL Triangle Example");
//
//    glutDisplayFunc(display);
//    glutKeyboardFunc(keyboard);
//
//    glClearColor(1.0, 1.0, 1.0, 1.0); // Set background color to white
//
//    glutMainLoop();
//
//    return 0;
//}




//  code for translating a unique figure

//# include<GL/glut.h>
//
//void display(){
//// Applying translation
//    glTranslatef(0.5,0.5,0.0);
//
//    glBegin(GL_QUADS);
//    glColor3f(0.0, 0.0, 1.0);
//    glVertex2f(-0.2, -0.2);
//    glVertex2f(0.2, -0.2);
//    glVertex2f(-0.2, 0.2);
//    glVertex2f(0.2, 0.2);
//    glEnd();
//
//    glutSwapBuffers();
//}
//// Let us now make the window
//int main (int argc, char** argv){
//    glutInit(&argc, argv);
//
////    set the display mode
//    glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB);
//
////  create a window
//    glutCreateWindow("Kushals work");
//
////  set the initial window size
//    glutInitWindowSize(500,500);
//
////  register the display call back function
//    glutDisplayFunc(display);
//
//// set clear color to white
//    glClearColor(1.0,1.0,1.0,1.0);
//
//// set the projection matrix
//    glMatrixMode(GL_PROJECTION);
//    gluOrtho2D(-1.0,1.0,-1.0,1.0);
//
//// enter the glut main event
//    glutMainLoop();
//
//    return 0;
//}





////  code for rotating a triangle
//
//float angle= 30.0;
//# include<GL/glut.h>
//// The code below makes a triangle
//void display(){
//
////// rotation
//    glRotatef(angle, 0.0,0.0,1.0);
//    
//    glBegin(GL_TRIANGLES);
//    glColor3f(0.0,0.0,1.0);
//    glVertex2f(-0.2, -0.2);
//    glVertex2f(0.2, -0.2);
//    glVertex2f(0.0, 0.2);
//    glEnd();
//    
//    glutSwapBuffers();
//}
//// Let us now make the window
//int main (int argc, char** argv){
//    glutInit(&argc, argv);
//    
////    set the display mode
//    glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB);
//    
////  create a window
//    glutCreateWindow("Kushals work");
//    
////  set the initial window size
//    glutInitWindowSize(500,500);
//    
////  register the display call back function
//    glutDisplayFunc(display);
//    
//// set clear color to white
//    glClearColor(1.0,1.0,1.0,1.0);
//    
//// set the projection matrix
//    glMatrixMode(GL_PROJECTION);
//    gluOrtho2D(-1.0,1.0,-1.0,1.0);
//    
//// enter the glut main event
//    glutMainLoop();
//    
//    return 0;
//}
//





//  code for scaling of a square

//# include<GL/glut.h>
//
//void display(){
////  applying scaling
//    glScalef(2.0,2.0,1.0);
//
//
//    glBegin(GL_QUADS);
//    glColor3f(0.0, 0.0, 1.0);
//    glVertex2f(-0.2, -0.2);
//    glVertex2f(0.2, -0.2);
//    glVertex2f(0.2, 0.2);
//    glVertex2f(-0.2, 0.2);
//    glEnd();
//
//    glutSwapBuffers();
//}
//// Let us now make the window
//int main (int argc, char** argv){
//    glutInit(&argc, argv);
//
////    set the display mode
//    glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB);
//
////  create a window
//    glutCreateWindow("Kushals work");
//
////  set the initial window size
//    glutInitWindowSize(500,500);
//
////  register the display call back function
//    glutDisplayFunc(display);
//
//// set clear color to white
//    glClearColor(1.0,1.0,1.0,1.0);
//
//// set the projection matrix
//    glMatrixMode(GL_PROJECTION);
//    gluOrtho2D(-1.0,1.0,-1.0,1.0);
//
//// enter the glut main event
//    glutMainLoop();
//
//    return 0;
//}





//                  Combination of the all transformations

#include <GL/glut.h>

float translationX = 0.0;
float translationY = 0.0;
float rotationAngle = 0.0;
float scalingFactor = 1.0;

void display() {
    glClear(GL_COLOR_BUFFER_BIT);

    glPushMatrix(); // Save the current transformation matrix

    // Apply translation
    glTranslatef(translationX, translationY, 0.0);

    // Apply rotation and scaling together
    glRotatef(rotationAngle, 0.0, 0.0, 1.0);
    glScalef(scalingFactor, scalingFactor, 1.0);


    glBegin(GL_TRIANGLES);
    glColor3f(0.6, 0.3, 0.0);  // Brown color
    glVertex2f(0.0, 0.4);   // Vertex 1 (top)
    glVertex2f(-0.4, -0.4);  // Vertex 2 (bottom-left)
    glVertex2f(0.4, -0.4);   // Vertex 3 (bottom-right)
    glEnd();

    glPopMatrix();

    glFlush();
}

void keyboard(unsigned char key, int x, int y) {
    switch (key) {
        case 'u':
            translationY += 0.1; // Move up
            break;
        case 'd':
            translationY -= 0.1; // Move down
            break;
        case 'l':
            translationX -= 0.1; // Move left
            break;
        case 'r':
            translationX += 0.1; // Move right
            break;
        case 'o':
            rotationAngle += 5.0; // Rotate anti-clockwise
            break;
        case 'c':
            rotationAngle -= 5.0; // Rotate clockwise
            break;
        case 's':
            scalingFactor += 0.1; // Scale up
            break;
        case 'h':
            scalingFactor -= 0.1; // Scale down
            break;
        case 'q':
            rotationAngle += 5.0; // Rotate anticlockwise &
            scalingFactor += 0.1; // Scale up
            break;
        case 'w':
            rotationAngle -= 5.0; // Rotate clockwise &
            scalingFactor -= 0.1; // Scale down
            break;
        case 't':
            scalingFactor += 0.1; // Scale up &
            rotationAngle -= 5.0; // Rotate anticlockwise
            break;
        case 'b':
            scalingFactor -= 0.1; // Scale down &
            rotationAngle += 5.0; // Rotate clockwise
            break;
    }

    glutPostRedisplay();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutCreateWindow("OpenGL Triangle Example");

    glutDisplayFunc(display);
    glutKeyboardFunc(keyboard);

    glClearColor(0.7, 0.7, 1.0, 1.0); // Set background color to light blue

    glutMainLoop();

    return 0;
}




// Scaling first and then rotating

//#include <GL/glut.h>
//
//float angle = 0.0f; // Initial rotation angle
//float scale = 1.0f; // Initial scale factor
//
//void display() {
//    glClear(GL_COLOR_BUFFER_BIT);
//
//    glPushMatrix(); // Save the current matrix
//    glScalef(scale, scale, 1.0); // Scale uniformly
//    glRotatef(angle, 0.0, 0.0, 1.0); // Rotate around the z-axis
//
//
//    glBegin(GL_TRIANGLES);
//    glColor3f(1.0, 0.0, 0.0); // Red
//    glVertex2f(0.0, 1.0);
//
//    glColor3f(0.0, 1.0, 0.0); // Green
//    glVertex2f(-1.0, -1.0);
//
//    glColor3f(0.0, 0.0, 1.0); // Blue
//    glVertex2f(1.0, -1.0);
//    glEnd();
//
//    glPopMatrix(); // Restore the previous matrix
//
//    glFlush();
//}
//
//void update(int value) {
//    angle -= 2.0f; // Update the rotation angle
//    if (angle > 360.0) {
//        angle -= 360.0;
//    }
//
//    
//    scale += 0.01f; // Update the scale factor
// 
//    glutPostRedisplay(); // Request a redraw
//    glutTimerFunc(200, update, 0); // Call update function
//}
//
//int main(int argc, char** argv) {
//    glutInit(&argc, argv);
//    glutCreateWindow("OpenGL Rotating and Scaling Triangle");
//    glutInitWindowSize(400, 400);
//    glutDisplayFunc(display);
//
//    glMatrixMode(GL_PROJECTION);
//    glLoadIdentity();
//    gluOrtho2D(-2.0, 2.0, -2.0, 2.0);
//
//    glutTimerFunc(200, update, 0); // Set up a timer-based update
//
//    glutMainLoop();
//    return 0;
//}





//// Rotating first and then scaling
//
//#include <GL/glut.h>
//
//float angle = 0.0f; // Initial rotation angle
//float scale = 1.0f; // Initial scale factor
//
//void display() {
//    glClear(GL_COLOR_BUFFER_BIT);
//
//    glPushMatrix(); // Save the current matrix
//    glRotatef(angle, 0.0, 0.0, 1.0); // Rotate around the z-axis
//    glScalef(scale, scale, 1.0); // Scale uniformly
//
//
//
//    glBegin(GL_TRIANGLES);
//    glColor3f(1.0, 0.0, 0.0);
//    glVertex2f(0.0, 1.0);
//
//    glColor3f(0.0, 1.0, 0.0);
//    glVertex2f(-1.0, -1.0);
//
//    glColor3f(0.0, 0.0, 1.0);
//    glVertex2f(1.0, -1.0);
//    glEnd();
//
//    glPopMatrix(); // Restore the previous matrix
//
//    glFlush();
//}
//
//void update(int value) {
//    angle += 2.0f; // Update the rotation angle
//    if (angle > 360.0) {
//        angle -= 360.0;
//    }
//
//    scale += 0.01f; // Update the scale factor
//
//    glutPostRedisplay(); // Request a redraw
//    glutTimerFunc(25, update, 0); // Call update function every 16 milliseconds
//}
//
//int main(int argc, char** argv) {
//    glutInit(&argc, argv);
//    glutCreateWindow("OpenGL Rotating and Scaling Triangle");
//    glutInitWindowSize(400, 400);
//    glutDisplayFunc(display);
//
//    glMatrixMode(GL_PROJECTION);
//    glLoadIdentity();
//    gluOrtho2D(-2.0, 2.0, -2.0, 2.0);
//
//    glutTimerFunc(30, update, 0); // Set up a timer-based update
//
//    glutMainLoop();
//    return 0;
//}
//
//





//                          3D cube


//#include <GL/glut.h>
//
//void display() {
//    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
//
//    glMatrixMode(GL_MODELVIEW);
//    gluLookAt(3.0, 3.0, 5.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);
//
//    glutWireCube(1.0); // Draw a wireframe cube
//
//    glutSwapBuffers();
//}
//
//void reshape(int width, int height) {
//    glViewport(0, 0, width, height);
//    glMatrixMode(GL_PROJECTION);
//    glLoadIdentity();
//    gluPerspective(45.0, (double)width / height, 0.1, 100.0);
//    glMatrixMode(GL_MODELVIEW);
//}
//
//int main(int argc, char** argv) {
//    glutInit(&argc, argv);
//    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
//    glutCreateWindow("Simple 3D Object");
//    glEnable(GL_DEPTH_TEST);
//
//    glutDisplayFunc(display);
//    glutReshapeFunc(reshape);
//
//    glutMainLoop();
//    return 0;
//}




