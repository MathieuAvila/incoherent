"""
interface definition for any structural element
"""

class ElementalStructure():

    """
    Gives "interface" to what's must be implemented for a structure
    Should never been called here, will assert ("abstract type").

    Also provides helpers to create subclasses
    """

    _name = "structure"

    def __init__(self, element:None):
        """ nothing"""
        self._element = element

    def get_class(self):
        """ get my class for selector"""
        raise "subclass me"

    def get_instance(self, element:None):
        """ Return instance for a given gate """
        raise "subclass me"

    def get_name(self):
        """ name accessor"""
        return self._name

    def check_structure(self):
        """check everything is as expected.
        """
        raise "subclass me"

    def instantiate(self):
        """ performs parameters selection. Parameters should be enough to generate specific file"""
        raise "subclass me"

    def create_structure(self, components):
        """ create from instance """
        raise "subclass me"