import time
import string
import random
import os
import data
import logging
import logging.config
import yaml
from pathlib import Path
# The absolute path
# This function takes as input any path (relativate path to pkutree/), and returns the absolute path
def abs_path(path_in_repo):
    data_path = Path(data.__path__[0])
    base_path = str(data_path.parent.absolute())
    return os.path.join(base_path, path_in_repo)


def setup_logging(default_path=abs_path('config/logging_cfg.yaml'), default_level=logging.INFO):
    path = default_path
    if os.path.exists(path):
        with open(path, 'r', encoding='utf-8') as f:
            config = yaml.load(f, Loader=yaml.FullLoader)
            logging.config.dictConfig(config)
    else:
        logging.basicConfig(level=default_level)
    return


def get_randomstr(length=11):
    ran_str = ''.join(random.sample(string.ascii_letters + string.digits, length))
    return ran_str