cmake_minimum_required(VERSION 3.6 FATAL_ERROR)

project(QTC++ LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# hack for buggy CMake's FindwxWidgets script
if (DEFINED ENV_WX_CONFIG)
    set (ENV{WX_CONFIG} ${ENV_WX_CONFIG})
endif()

set(wxWidgets_USE_STATIC 1)

find_package(wxWidgets REQUIRED)

set(
	CODE
	about.cpp
	about.h
	about.ui
	audiencepolldialog.cpp
	audiencepolldialog.h
	audiencepolldialog.ui
	ExamTest.cpp
	ExamTest.h
	ExamTest.ui
	filehandle.cpp
	filehandle.h
	main.cpp
	question.cpp
	question.h
	questionentry.cpp
	questionentry.h
	questionentry.ui
	questions.txt
	resultofquestion.cpp
	resultofquestion.h
	resultofquestion.ui
	startscreen.cpp
	startscreen.h
	startscreen.ui
)

include(${wxWidgets_USE_FILE})

if (APPLE)
    # create bundle on apple compiles
    add_executable(cMain MACOSX_BUNDLE ${CODE} )
    # Set a custom plist file for the app bundle - needed for Mac OS Retina display
    set_target_properties(cMain PROPERTIES MACOSX_BUNDLE_INFO_PLIST ${CMAKE_CURRENT_SOURCE_DIR}/Info.plist)
else()
    # the WIN32 is needed for Windows in order for it to look for WinMain
    # instead of the cMain function. This is ignored on other systems,
    # so it works on all platforms
    add_executable(cMain WIN32 ${CODE})
endif()

target_link_libraries(cMain PRIVATE ${wxWidgets_LIBRARIES})