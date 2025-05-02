#!/usr/bin/env bash

project_name='prog3_pc1b_lab101_v2025_01'
source_code='
  ui_builder.h
  pipeline_apply.h
  compose.h
  '
rm -f ${project_name}.zip
zip -r -S ${project_name} ${source_code}