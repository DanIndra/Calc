#Specifing which version of OS to run the calculator program on.
FROM ubuntu:18.04

#Making sure the downloaded version of the OS is up-to-date.
RUN apt-get update -y && apt-get upgrade -y

#Installing necessary packages to run the calculator program.
RUN apt-get install build-essential -y
RUN apt-get install make
RUN apt-get install g++
RUN apt-get install git
RUN apt-get install openssh-server openssh-client

#Creating the working directory for the code to be run in.
ADD /App
WORKDIR /App

#Running the makefile to create a executable so we can see the calculator in action.
RUN make
