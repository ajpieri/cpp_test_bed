pushd _build

mkdir windows

pushd windows

:generate
cmake ../../

:build
cmake --build . --config Release

:install
cmake --install .

popd
popd