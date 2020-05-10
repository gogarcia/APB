#pragma once

//Headers
#include <Menu.h>


class FinalMenu : public Menu
{
    private:
        unsigned int titulo;
    
    public:
        FinalMenu() : Menu()
        {
            //Buttons
            Button* button = new Button(1, (char*)"resources/MenuElements/MAINMENU2.png", 
                                                (char*)"resources/MenuElements/MAINMENU1.png", 540, 300);
            buttons.push_back(button);            
            button = new Button(2, (char*)"resources/MenuElements/EXIT2.png",
                                                (char*)"resources/MenuElements/EXIT1.png", 540, 420);
            buttons.push_back(button);
            
            buttons.at(focus)->focus();
        
            titulo = Render::getInstance() -> createSprite("resources/Titulo.png");
            background = Render::getInstance() -> createSprite("resources/MenuElements/BACKGROUND_menu.png");
            

        }

        ~FinalMenu(){}
        
        void draw(){
            Menu::draw();
            Render::getInstance()->drawSprite(titulo);
        }

        void clear(){
            Menu::clear();
            Render::getInstance()->deleteSprite(titulo);
        }
};