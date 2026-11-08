cmake_minimum_required(VERSION 3.19)
project(LeakGuard LANGUAGES CXX)

find_package(Qt6 6.5 REQUIRED COMPONENTS Core Widgets)

qt_standard_project_setup()

qt_add_executable(LeakGuard
    WIN32 MACOSX_BUNDLE
    main.cpp
    mainwindow.cpp
    mainwindow.h
    mainwindow.ui
    res.qrc
    AttackSimulation/attacksimulationwindow.h AttackSimulation/attacksimulationwindow.cpp AttackSimulation/attacksimulationwindow.ui
    AttackSimulation/attacksimulationwindow.h AttackSimulation/attacksimulationwindow.cpp AttackSimulation/attacksimulationwindow.ui
    ReferenceMaterials/referencematerialswindow.h ReferenceMaterials/referencematerialswindow.cpp ReferenceMaterials/referencematerialswindow.ui
    LeakSearch/leaksearchwindow.h LeakSearch/leaksearchwindow.cpp LeakSearch/leaksearchwindow.ui
)

target_link_libraries(LeakGuard
    PRIVATE
        Qt::Core
        Qt::Widgets
)

install(TARGETS LeakGuard
    BUNDLE  DESTINATION .
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
)

qt_generate_deploy_app_script(
    TARGET LeakGuard
    OUTPUT_SCRIPT deploy_script
    NO_UNSUPPORTED_PLATFORM_ERROR
)
install(SCRIPT ${deploy_script})
