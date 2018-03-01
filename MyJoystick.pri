# Created by Maciej Filipowicz
# Institute of Aviation
# 2018

## SDL Library include
INCLUDEPATH += $$PWD/lib/SDL2-2.0.7/i686-w64-mingw32/include/SDL2

INCLUDEPATH += $$PWD/src/MyJoysticks

win32-g++* {
    DEFINES += SDL_WIN
    DEFINES += SDL_MAIN_HANDLED
    LIBS += -L$$PWD/lib/SDL2-2.0.7/i686-w64-mingw32/bin -lSDL2
}


## MyJoystick project files include
HEADERS += \
    $$PWD/lib/SDL2-2.0.7/i686-w64-mingw32/include/SDL2/SDL.h \
    $$PWD/src/MyJoysticks/MyJoysticks/sdldevices.h \
    $$PWD/src/MyJoysticks/MyJoysticks/structs.h \
    $$PWD/src/MyJoysticks/MyJoysticks/keyboard.h \
    $$PWD/src/MyJoysticks/joysticksdevices.h \
    $$PWD/src/MyJoysticks/JoysticksGui.h

SOURCES += \
    $$PWD/src/MyJoysticks/MyJoysticks/sdldevices.cpp \
    $$PWD/src/MyJoysticks/MyJoysticks/keyboard.cpp \
    $$PWD/src/MyJoysticks/joysticksdevices.cpp \
    $$PWD/src/MyJoysticks/JoysticksGui.cpp

RESOURCES += \
    $$PWD/src/MyJoysticks/MyJoysticks.qrc

FORMS += \
    $$PWD/src/MyJoysticks/joysticksgui.ui

