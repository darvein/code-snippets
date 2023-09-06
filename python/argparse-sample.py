#!/usr/bin/python

import sys
import logging
import argparse
import subprocess
import string
from pprint import pprint

LEVELS = {'debug': logging.DEBUG,
          'info': logging.INFO,
          'warning': logging.WARNING,
          'error': logging.ERROR,
          'critical': logging.CRITICAL}

def main():
    """Main routine"""

    # Getting input params
    parser = argparse.ArgumentParser(description='Logs Check tool')
    parser.add_argument("-s", "--elastic-url",
                        dest="elastic_url",
                        help="elastic url",
                        metavar="ELASTIC_URL",
                        required=True)
    parser.add_argument("-u", "--elastic-user",
                        dest="elastic_user",
                        help="elastic user",
                        metavar="ELASTIC_USER",
                        required=True)
    parser.add_argument("-p", "--elastic-password",
                        dest="elastic_password",
                        help="elastic password",
                        metavar="ELASTIC_PASSWORD",
                        required=True)
    parser.add_argument("-r", "--log-range",
                        dest="log_range",
                        help="log range",
                        metavar="LOG_RANGE",
                        required=True)
    parser.add_argument("-o", "--log-threshold",
                        dest="log_threshold",
                        help="log threshold",
                        metavar="LOG_THRESHOLD",
                        required=True)
    parser.add_argument("-l", "--loglevel",
                        dest="loglevel",
                        help="logging level",
                        metavar="LOGLEVEL",
                        default="warning",
                        required=False)
    options = parser.parse_args()

    # Retrieving values
    log_threshold = int(options.log_threshold)
    log_level = options.loglevel

    # Setting log level
    level = LEVELS.get(log_level, logging.NOTSET)
    logging.basicConfig(level=level)


    # code logic here

if __name__ == '__main__':
    sys.exit(main())
