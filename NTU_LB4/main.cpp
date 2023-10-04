#include <iostream>
#include <cmath>

int main () 
{
    const int N = 15; 

    double X[N];
    double Y[N];

       /*_________Отримуємо 15 компонентів вектора X_________*/

    std::cout << "Введіть компоненти вектора X: " << std::endl; 
    for (int i = 0; i <= N; i += 1)
    {
        std::cout << "\nКомпонент " << i + 1 << " X[" << "i" << "]: "; 
        std::cin >> X[i];
    }

      /*_________Отримуємо 15 компонентів вектора Y_________*/

    std::cout << "\nВведіть компоненти вектора Y: " << std::endl; 
    for (int i = 0; i <= N; i += 1)
    {
        std::cout << "\nКомпонент " << i + 1 << " Y[" << "i" << "]: "; 
        std::cin >> Y[i];
    }

    double fullDot = 0;     //  <-\    |---------------------------------|
    double modulusX = 0;    //    <----| Скалярний - ДовжинаX - ДовжинаY |                                           
    double modulusY = 0;    //  <-/    |---------------------------------|

    for (int i = 0; i < N; i += 1) 
    {
        fullDot += X[i] * Y[i];           //  <-\   |-----------------------------------------------------------------------------|
        modulusX += X[i] * X[i];          //   <----| Обчислення скалярного добутку векторів X і Y , а також модулі цих векторів. |                                           
        modulusY += Y[i] * Y[i];          //  <-/   |-----------------------------------------------------------------------------|
    }
                                  
    modulusX = sqrt(modulusX);    // обчислення кореня X |
    modulusY = sqrt(modulusY);    // обчислення кореня Y |
                                                                            // ---------------------------------------------------------------------|
    double cosAngle = fullDot / (modulusX * modulusY);                      // <- Обчислення косинуса кута між векторами X і Y         (45)         |                                                                           
    double angleRad = acos(cosAngle);                                       // <- Обчислення кута між векторами (у радіанах)           (46)         |                      
    double angleDeg = angleRad * 180.0 / M_PI;                              // <- Обчислення кута між векторами (у градусах)           (47)         |         
    double crossProductMagnitude = modulusX * modulusY * sin(angleRad);     // <- Обчислення модуля векторного добутку векторів X і Y  (48)         |     
                                                                            // ---------------------------------------------------------------------|

    /*------------------------GET RESULT------------------------*/

    std::cout               
            << "Кут між векторами X і Y: " 
            << angleDeg 
            << " градусів\n";

    std::cout 
            << "Модуль векторного добутку X і Y: " 
            << crossProductMagnitude 
            << std::endl;

    return 0; 
}