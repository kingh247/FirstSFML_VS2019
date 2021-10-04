/* 
* A basic SFML application to build upon - Darryl Charles
* SFML Documentation https://www.sfml-dev.org/documentation/2.5.1/ 
*/
#include <SFML/Graphics.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode(200, 200), "SFML works!");    // render a 200x200 Window
    sf::CircleShape shape(100.f);                                       // create a circle object called shape
    shape.setFillColor(sf::Color::Green);                               // colour shape Green

    while (window.isOpen())                                             // This is the Windows application loop - infinite loop until closed
    {
        sf::Event event;                                                // Windows is event driven
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();                                                 // Clear render buffer
        window.draw(shape);                                             // Draw the shape to the buffer (in this case at default position)
        window.display();                                               // Display the graphics from the buffer to the display
    }

    return 0;
}