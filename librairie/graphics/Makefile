#construit le fichier binaire graphics.o
graphics.o: ../librairie/graphics/graphics.c ../librairie/graphics/graphics.h
	rm -f police.h
	touch police.h
	if test -e /usr/include/SDL_ttf.h;           then echo "#define SDL_TTF_OK" > police.h; fi
	if test -e /usr/include/SDL/SDL_ttf.h;       then echo "#define SDL_TTF_OK" > police.h; fi
	if test -e /usr/local/include/SDL_ttf.h;     then echo "#define SDL_TTF_OK" > police.h; fi
	if test -e /usr/local/include/SDL/SDL_ttf.h; then echo "#define SDL_TTF_OK" > police.h; fi
	gcc -Wall `sdl-config --cflags`  -c ../librairie/graphics/graphics.c

#ne pas oublier cette ligne pour la compilarion final
#`sdl-config --libs` -lm -lSDL_ttf

clean:
	rm -f *.o
	rm -f police.h
