#
# Copyright (C) 2018 The Android Open Source Project
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#      http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#
"""Generates a compile_commands.json file for the given ndk-build project.

The compilation commands for this file are read from the files passed as
arguments to this script.
"""
from __future__ import print_function

import argparse
import json
import os


def parse_args():
    """Parses and returns command line arguments."""
    parser = argparse.ArgumentParser()

    parser.add_argument(
        '-o', '--output', type=os.path.realpath, help='Path to output file')

    parser.add_argument(
        'list_file',
        type=os.path.realpath,
        help=('A list file containing paths to the one or more JSON files'
              'containing compilation commands per source/target.'))

    return parser.parse_args()


def main():
    """Program entry point."""
    args = parse_args()

    all_commands = []
    with open(args.list_file) as list_file:
        command_files = list_file.read().split()

    for command_file_path in command_files:
        with open(command_file_path) as command_file:
            all_commands.append(json.load(command_file))

    with open(args.output, 'w') as out_file:
        json.dump(
            all_commands,
            out_file,
            sort_keys=True,
            indent=4,
            separators=(',', ': '))


if __name__ == '__main__':
    main()
