SET(KEYWORD "autoAssociativeMemory")

# Start a project.
PROJECT(${KEYWORD})

FIND_PACKAGE(YARP REQUIRED)
#FIND_PACKAGE(ICUB)
#FIND_PACKAGE(OpenCV REQUIRED)

FILE(GLOB folder_source src/*.cpp src/*.cc src/*.c)
FILE(GLOB folder_header include/iCub/*.h)
SOURCE_GROUP("Source Files" FILES ${folder_source})
SOURCE_GROUP("Header Files" FILES ${folder_header})

# this did not get ./include --giovanni
# Automatically add include directories if needed.
#FOREACH(header_file ${folder_header})
#  GET_FILENAME_COMPONENT(p ${header_file} PATH)
#  INCLUDE_DIRECTORIES(${p})
#ENDFOREACH(header_file ${folder_header})

INCLUDE_DIRECTORIES(./include)

# Set up our main executable.
IF (folder_source)
  ADD_EXECUTABLE(${KEYWORD} ${folder_source} ${folder_header})
ELSE (folder_source)
  MESSAGE(FATAL_ERROR "No source code files found. Please add something")
ENDIF (folder_source)

INSTALL_TARGETS(/bin ${KEYWORD})
