# Name this initial stage "builder"
FROM ubuntu:latest AS builder
ARG DEBIAN_FRONTEND=noninteractive
RUN apt-get -y update && apt-get install -y
RUN apt-get -y install g++ cmake git
COPY . .
ADD ./_deps .
WORKDIR .
RUN mkdir ./build
RUN cmake -B/build -S . -D CMAKE_BUILD_TYPE=Release
RUN cmake --build /build 
# Create a new stage for our output container
FROM ubuntu:latest
WORKDIR .
# Copy the built binary over from previous stage
COPY --from=builder /build/CppTestBed ./
COPY entrypoint.sh ./
# Run the binary in the new container
# CMD ["./CppTestBed"]
ENTRYPOINT [ "./entrypoint.sh" ]