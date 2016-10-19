INCLUDE := -isystem /usr/include/openmpi
LDFLAGS := -L /usr/lib/openmpi $(LDFLAGS)
LDLIBS := -lmpi -lmpi_cxx $(LDLIBS)

all: hello_world
