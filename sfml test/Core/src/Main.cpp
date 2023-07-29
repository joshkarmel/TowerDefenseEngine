#include "../Header/Main.h"

int main()
{
    RenderWindow window(VideoMode(MmapWidth, MmapHeight), "Testing Box");

    StateController StateCon(window);
    GuiController GuiCon(window,StateCon);
    GFXController GFXCon(window);
   

    Vector2i mousePosition;

    while (window.isOpen()) {
        Event event;
        while (window.pollEvent(event)) {
            ImGui::SFML::ProcessEvent(window, event);
            if (event.type == Event::Closed) {
                window.close();
            }
        }
        //GuiCon.renderFrame(DeltaClock);
        window.clear(Color::Black);
        deltaTime = DeltaClock.getElapsedTime().asSeconds();
        mousePosition = Mouse::getPosition(window);
        //ImGui::SFML::Render();
        //UPDATE
        StateCon.update(mousePosition);

        ImGui::SFML::Update(window, sf::seconds(1.0f / 60.0f));


        //DRAW
        

        DeltaClock.restart();
        
        GuiCon.renderFrame(DeltaClock);

        window.display();
    }
    ImGui::SFML::Shutdown();

    return 0;
}