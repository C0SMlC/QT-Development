cmake_minimum_required(VERSION 3.5)

project(Assignment-II VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets)
find_package(Qt6 COMPONENTS Core Gui Widgets PrintSupport REQUIRED)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets )

set(PROJECT_SOURCES
    main.cpp
    mainwindow.cpp
    mainwindow.h
    mainwindow.ui
)

add_subdirectory(services)

#add_executable(Assignment-II main.cpp mainwindow.h mainwindow.cpp)





if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
  qt_add_executable(Assignment-II
    MANUAL_FINALIZATION
    ${PROJECT_SOURCES}


    services/service.h services/service.cpp


  )
# Define target properties for Android with Qt 6 as:
#  set_property(TARGET Assignment-II APPEND PROPERTY QT_ANDROID_PACKAGE_SOURCE_DIR
#         ${CMAKE_CURRENT_SOURCE_DIR}/android)
# For more information, see https://doc.qt.io/qt-6/qt-add-executable.html#target-creation
else()
  if(ANDROID)
    add_library(Assignment-II SHARED
      ${PROJECT_SOURCES}
    )
# Define properties for Android with Qt 5 after find_package() calls as:
#  set(ANDROID_PACKAGE_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/android")
  else()
    add_executable(Assignment-II
      ${PROJECT_SOURCES}
    )
  endif()
endif()


target_link_libraries(Assignment-II
PRIVATE
services)

target_include_directories(Assignment-II
PUBLIC
services
)

target_link_libraries(Assignment-II
  PRIVATE Qt::Core Qt::Gui Qt::Widgets Qt::PrintSupport
)

target_link_libraries(Assignment-II PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)

# Qt for iOS sets MACOSX_BUNDLE_GUI_IDENTIFIER automatically since Qt 6.1.
# If you are developing for iOS or macOS you should consider setting an
# explicit, fixed bundle identifier manually though.
if(${QT_VERSION} VERSION_LESS 6.1.0)
 set(BUNDLE_ID_OPTION MACOSX_BUNDLE_GUI_IDENTIFIER com.example.Assignment-II)
endif()
set_target_properties(Assignment-II PROPERTIES
  ${BUNDLE_ID_OPTION}
  MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
  MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
  MACOSX_BUNDLE TRUE
  WIN32_EXECUTABLE TRUE
)

include(GNUInstallDirs)
install(TARGETS Assignment-II
  BUNDLE DESTINATION .
  LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
  RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

if(QT_VERSION_MAJOR EQUAL 6)
  qt_finalize_executable(Assignment-II)
endif()
