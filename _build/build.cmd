pushd _build

mkdir windows

pushd windows

:dependencies
conan install ../../ --profile ../../conanprofile.txt --install-folder ../../_deps

:generate
cmake ../../

:build
cmake --build . --config Release

:install
cmake --install .

popd
popd