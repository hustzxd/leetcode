#!/usr/bin/env bash
BASE_DIR='0000'
NEW_DIR=$1

cd src
if [ ! -d ${NEW_DIR} ]; then
  cp -r ${BASE_DIR} ${NEW_DIR}
fi
cd ${NEW_DIR}
