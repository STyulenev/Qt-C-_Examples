include(protobuf/Protobuf.pri)

INCLUDEPATH += \
        $$PWD \
        $$PWD/view/include/

HEADERS += \
        $$files($$PWD/view/include/*.h)

SOURCES += \
        $$files($$PWD/view/*.cpp)
		
FORMS += \
        $$files($$PWD/view/ui/*.ui)
