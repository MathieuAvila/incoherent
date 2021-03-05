"""automatically import all dressing"""

import logging

dressingTypes = {}

def register_dressing_type(obj):
    """Registering a dressing"""
    dressingTypes[obj.get_name()] = obj
    logging.info("Registering dressing %s", obj.get_name())
