:generate
conan install . --profile ./conanprofile.txt --install-folder _deps

:build
docker build -t "cpp-test-bed" .