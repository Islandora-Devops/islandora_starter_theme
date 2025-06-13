This is for customizing on top of the __Islandora starter Base Theme__ / Islandora - Bootstrap 4 based theme

Clone this to: __web/themes/contrib/islandora_starter_theme__

## Install Color theme
config/install/color.theme.islandora_starter_theme.yml
* Initial colors
* Logo
* CSS files

## CSS
Comes with precomiled SCSS files. 

### To compile locally:
You will need nodejs, npm, gulp, gulp-cli, sass installed.
```
$ cd codebase/web/themes/contrib/islandora_starter_theme
$ npm install
$ gulp styles
```

Last compiled with the following versions:
```
~/islandora_starter_theme# nodejs --version
v10.19.0
~/islandora_starter_theme# gulp --version
CLI version: 2.3.0
Local version: 4.0.2
```

### To compile with Docker:
You will start a Docker container that includes nodejs, npm, gulp, gulp-cli, sass already installed.
```shell
docker build -t idc_theme_build .
docker run --rm -v $(pwd):/usr/src/project islandora_starter_theme bash -c "bash autobuild.sh"
```
