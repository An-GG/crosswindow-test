#include "CrossWindow/CrossWindow.h"


void xmain(int argc, const char** argv)
{
    // ð¼ïC Create Window Description
    xwin::WindowDesc windowDesc;
    windowDesc.name = "Test";
    windowDesc.title = "My Title";
    windowDesc.visible = true;
    windowDesc.width = 1280;
    windowDesc.height = 720;

    bool closed = false;

    // ð Initialize
    xwin::Window window;
    xwin::EventQueue eventQueue;

    if (!window.create(windowDesc, eventQueue))
    { return; }

    // ð Engine loop
    bool isRunning = true;

    while (isRunning)
    {
        // â»ï Update the event queue
        eventQueue.update();

        // ð Iterate through that queue:
        while (!eventQueue.empty())
        {
            const xwin::Event& event = eventQueue.front();

            if (event.type == xwin::EventType::MouseMove)
            {
                const xwin::MouseMoveData mouse = event.data.mouseMove;
            }
            if (event.type == xwin::EventType::Close)
            {
                window.close();
                isRunning = false;
            }

            eventQueue.pop();
        }
    }
}



                                                                                          
