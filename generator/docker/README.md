# ra-ci-docbuilder

## Description
ra-ci-docbuilder is a Docker image for building HTML and PDF documentation from AsciiDoc documents while respecting RA's corporate identity (CI) guidelines. This is done by using compiled SCSS stylesheets for HTML and a customized Asciidoctor PDF theme for PDF output.

## Installation
You need to [install Docker](https://docs.docker.com/get-docker/) on your system.
RA employees should have a look at the [Docker instructions in our Infothek](https://infothek.office.rac.de/portfolio-item/docker/).

## Usage

### Build the image

As long as the `Dockerfile` does not change, this only needs to be done once.

On Windows, you can use the versioned batch file `build.bat`.

Otherwise, run

    :\> docker build --no-cache --tag ratools/ra-ci-docbuilder .

within the root folder of this repo (where the `Dockerfile` resides).

If everything went well, you now will find an image called `ratools/ra-ci-docbuilder` on your system:

    :\> docker images
    REPOSITORY                       TAG                      IMAGE ID       CREATED         SIZE
    ratools/ra-ci-docbuilder         latest                   baef5d341579   2 minutes ago     213MB

### Run the image for AsciiDoc conversion

Once the image has been built, you can run it in a fire-and-forget manner by calling

    :\> docker run --rm --volume LOCAL_DOCUMENTS_DIR:/documents ratools/ra-ci-docbuilder COMMAND REVISION LANGUAGE FILENAME

This will create a temporary container from the image and run `COMMAND` in it (see section [Commands](#Commands) below). As soon as the container has finished its job, it will exit and will be deleted completely.

The most important argument in the above Docker commandline is the specification of the `/documents` volume.
Here, you need to pass the absolute path of your documents folder on the host machine (e.g. `D:\Projects\Foo\Docs`) that contains your AsciiDoc file(s) as well as all images referenced within the AsciiDoc file(s).
The structure of this folder is arbitrary, as long as the image directory is specified relatively within the AsciiDoc file(s).

As mandatory positional arguments you need to pass
* the revision/version number/string
* the language code, like `en` or `de` (this is used for having the [built-in labels translated properly](https://docs.asciidoctor.org/asciidoctor/latest/localization-support/#customizing-labels))
* the filename of the AsciiDoc document, as a relative path to the `/documents` volume.

#### Commands

Currently the commands are realized as Linux shell scripts:

* `adoc2html.sh`: Creates HTML only.
* `adoc2pdf.sh`: Creates PDF only.
* `adoc2all.sh`: Creates HTML as well as PDF.

> **TODO/TO CONSIDER:** This could be done differently. For example, [ratools/ra-asciidoc-converter](https://gitlab.office.rac.de/ratools/ra-asciidoc-converter) could be integrated into this image. Also, we could introduce a convention for a config file that just needs to reside next to the AsciiDoc file(s) and that specifies the output formats (PDF, HTML, ...) and also some other tweaks (PDF A4 vs. PDF Letter, HTML with/without embedded images).

#### Example commandline

So, using the given example parameters, the above commandline will look like this:

    :\> docker run --rm --volume D:\Projects\Foo\Docs:/documents ratools/ra-ci-docbuilder ./adoc2all.sh 12345 en main.adoc
