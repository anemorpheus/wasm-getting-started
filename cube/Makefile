cpp:
	gcc Cube.c -o Cube.out -lGL -lGLU -lglut

wasm:
	emcc Cube.c -o Cube.html -s LEGACY_GL_EMULATION=1

serve:
	emrun ./Cube.html

clean:
	rm -f Cube.out Cube.js Cube.html Cube.wasm
