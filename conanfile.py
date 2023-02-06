from conans import ConanFile, CMake

class CppTestBedConan(ConanFile):
   settings = "os", "compiler", "build_type", "arch"
   generators = "cmake", "gcc", "txt", "cmake_find_package"
   
   def package(self):
      self.copy("*.h", dst="_deps")

   # def imports(self):
      # self.copy("*.dll", dst="bin", src="bin") # From bin to bin
      # self.copy("*.dylib*", dst="bin", src="lib") # From lib to bin