cmake_minimum_required(VERSION 3.5)

project(Resistencias LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(KF5_MIN_VERSION "5.2.0")

find_package(ECM 1.0.0 REQUIRED NO_MODULE)
set(CMAKE_MODULE_PATH ${ECM_MODULE_PATH} ${ECM_KDE_MODULE_DIR} ${CMAKE_CURRENT_SOURCE_DIR}/cmake)
find_package(QT NAMES Qt6 Qt5 COMPONENTS Widgets LinguistTools REQUIRED)
find_package(Qt${QT_VERSION_MAJOR} COMPONENTS Widgets LinguistTools REQUIRED)

find_package(KF5 ${KF5_MIN_VERSION} REQUIRED COMPONENTS
        CoreAddons
        I18n
        WidgetsAddons
        )

find_package(KF5WidgetsAddons REQUIRED)

set(TS_FILES Resistencias_es_MX.ts Trabajo_Bandas.cpp Trabajo_Bandas.h)
feature_summary(WHAT ALL INCLUDE_QUIET_PACKAGES FATAL_ON_MISSING_REQUIRED_PACKAGES)
add_executable(Resistencias
        main.cpp
        Mainwindow.cpp
        Mainwindow.h
        MainWindow.ui
        Resistencias.cpp
        Resistencias.h
        Resistencias.ui
        Resistencias2.cpp
        Resistencias2.h
        Resistencias2.ui
        leyohm.cpp
        leyohm.h
        leyohm.ui
        Iniciar_Bandas.cpp
        Iniciar_BandasT.cpp
        Iniciar_BandasT.h
        Iniciar_Bandas.h
        Trabajo_Bandas.cpp
        Trabajo_Bandas.h
        Trabajo_Bandas2.h
        Trabajo_Bandas2.cpp
        ${TS_FILES}
        )

target_link_libraries(Resistencias PRIVATE Qt${QT_VERSION_MAJOR}::Widgets
        KF5::WidgetsAddons
        )

qt5_create_translation(QM_FILES ${CMAKE_SOURCE_DIR} ${TS_FILES})
