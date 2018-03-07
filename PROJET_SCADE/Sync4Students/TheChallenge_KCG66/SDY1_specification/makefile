GCC = /mingw64/bin/gcc -m64
MKDIR = /usr/bin/mkdir
CP = /usr/bin/cp
RM = /usr/bin/rm
LS = /usr/bin/ls
SED = /usr/bin/sed

includes = -Ui386 -I./Include -I./Include/oglx -I./Code -I./Specific  -Ic:/Program\ Files/ANSYS\ Inc/v180/SCADE/SCADE -Ic:/Program\ Files/ANSYS\ Inc/v180/SCADE/SCADE\ Test/Rapid\ Prototyper/Widgets/include
libs = -lopengl32 -lws2_32 -lkernel32 -luser32 -lgdi32

cg_sources = $(wildcard ./Code/*.c)
specific_sources = $(wildcard ./Specific/*.c)
dllsources = $(cg_sources) $(specific_sources)

static_libs =  c:/Program\ Files/ANSYS\ Inc/v180/SCADE/SCADE\ Test/Rapid\ Prototyper/Widgets/lib/libwidgetsWin.a $(wildcard ./Lib/*.o) $(wildcard ./Lib/*.a) $(wildcard ./Lib/*.lib)

all: clean dlldef

dll:: sources.lst
	$(GCC) $(includes) -DDLL_EXPORTS  @sources.lst -mwindows -mwin32 -shared -o ../SDY1_specification.dll $(static_libs) $(libs)

dlldef:: sources.lst
	$(GCC) $(includes) -DDLL_EXPORTS  @sources.lst -mwindows -mwin32 -shared -Wl,--output-def,../SDY1_specification.def,--out-implib,../SDY1_specification.a -o ../SDY1_specification.dll $(static_libs) $(libs)

exe:: sources.lst
	$(GCC) $(includes) -DDLL_EXPORTS  @sources.lst -mwindows -mwin32 -o ../SDY1_specification.exe $(static_libs) $(libs)

fmu:: sources.lst
	$(MKDIR) -p fmu/binaries/win64
	$(CP) modelDescription.xml fmu/modelDescription.xml
	$(GCC) $(includes) -DDLL_EXPORTS  @sources.lst -mwindows -mwin32 -shared -o fmu/binaries/win64/SDY1_specification.dll $(static_libs) $(libs)

sources.lst::
	$(LS) -Q $(dllsources)  | $(SED) -e 's!"/\([A-Za-z]\)/!"\1:/!' >sources.lst

clean::
	-$(RM) -f *.o
