README
====

## How to build, test and install

```
git submodule update --init --recursive
cmake -S . -B build
cmake --build build
cd build && ctest
cmake --install . --prefix ~/cbin
```

## How to uninstall

`cat build/install_manifest.txt | xargs rm`

## TODO

- [ ] add boost lib
- [ ] add http lib
- [ ] dynamic libs