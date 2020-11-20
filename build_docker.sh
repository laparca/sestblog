#!/bin/bash
DOCKER_IMAGE=sesblog_builder:1.0

pushd $(dirname $0) >& /dev/null

DOCKER_ID=$(docker image ls ${DOCKER_IMAGE} -q)
if [ -z "${DOCKER_ID}" ]; then
    if ! docker build --tag ${DOCKER_IMAGE} - < Dockerfile; then
        echo "Error building docker image" 1>&2
        exit 1
    fi
fi

docker run --rm -u $(id -u) -v $(pwd):/code -t ${DOCKER_IMAGE} bash -c "cd /code && ./build.sh"
 

