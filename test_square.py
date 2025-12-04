from square import square
import pytest

def valid_case():
    assert square(4)==16
    assert square(5)==25
    assert square(-2)==4
    assert square(0)==0

valid_case()