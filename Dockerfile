FROM node:10.19.0 as build
ARG BUILD_CONTEXT

# Run to build the theme
# docker build -t idc_theme_build .
# docker run --rm -v $(pwd):/usr/src/project islandora_starter_theme bash -c "cd js && bash autobuild.sh"

RUN npm install -g gulp@4.0.2 gulp-cli

RUN mkdir -p /usr/src/project
WORKDIR /usr/src/project
