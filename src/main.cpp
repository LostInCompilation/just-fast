#include "JustFastUi/JustFastUi.h"
#include <ftxui/component/screen_interactive.hpp>

int main(int argc, const char* argv[])
{
    auto screen = ftxui::ScreenInteractive::Fullscreen();

    JustFastUi ui;
    ui.setQuitFunction([&screen]() {screen.ExitLoopClosure(); exit(0); });

    screen.Loop(&ui);
    return 0;
}