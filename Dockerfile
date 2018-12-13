#Specifing which version of OS to run the calculator program on.
FROM ubuntu:18.04

#Making sure the downloaded version of the OS is up-to-date.
RUN apt-get update -y && apt-get upgrade -y

#Installing necessary packages to run the calculator program.
RUN apt-get install build-essential -y make g++ git openssh-server openssh-client tar gzip

#Creating the working directory for the code to be run in.
ADD /App /App
WORKDIR /App

#Running the makefile to create a executable so we can see the calculator in action.
RUN make

#Esposing the port to allow connection in
EXPOSE 9090
