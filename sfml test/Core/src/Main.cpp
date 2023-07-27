#include "../Header/Main.h"

int main()
{
    sf::RenderWindow window(sf::VideoMode(MmapWidth, MmapHeight), "Testing Box");

    StateController StateCon(window);
   

    sf::Vector2i mousePosition;

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
           // ImGui::SFML::ProcessEvent(window, event);
            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }

        window.clear(sf::Color::Black);
        mousePosition = sf::Mouse::getPosition(window);

        

        DeltaClock.restart();
        
        
       // ImGui::SFML::Render(window); //abstract later
        window.display();
    }
  

    return 0;
}