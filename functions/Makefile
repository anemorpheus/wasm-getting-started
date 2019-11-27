all: wasm

wasm:
	em++ functions.cpp -o functions.js -O3 -s EXPORTED_FUNCTIONS="[_addNumber, _factorial]" -s STANDALONE_WASM

serve:
	emrun ./functions.html

clean:
	rm -f functions.js functions.html functions.wasm
