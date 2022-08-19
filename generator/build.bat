@echo off
setlocal

set IMAGE_NAME_TAG=openscenario/osc-generator

docker image remove --force %IMAGE_NAME_TAG%
docker build --no-cache --tag %IMAGE_NAME_TAG% .

pause