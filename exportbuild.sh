#Executable script to export the .tar file with the necessary files for the app
docker run -p 9090 calculator tar -cvzf build.tar.gz /App/buildinfo.txt /App/Calculator
