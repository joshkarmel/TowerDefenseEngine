#include "../Header/Main.h"

int main()
{
    RenderWindow window(VideoMode(MmapWidth, MmapHeight), "Testing Box");

    StateController StateCon(window);
    GuiController GuiCon(window);
   

    Vector2i mousePosition;

    while (window.isOpen()) {
        Event event;
        while (window.pollEvent(event)) {
           // ImGui::SFML::ProcessEvent(window, event);
            if (event.type == Event::Closed) {
                window.close();
            }
        }

        window.clear(Color::Black);
        deltaTime = DeltaClock.getElapsedTime().asSeconds();
        mousePosition = Mouse::getPosition(window);


        //UPDATE
        StateCon.update(mousePosition);



        //DRAW
        GuiCon.renderFrame(DeltaClock);

        DeltaClock.restart();
        
        
       // ImGui::SFML::Render(window); //abstract later
        window.display();
    }
  

    return 0;
}