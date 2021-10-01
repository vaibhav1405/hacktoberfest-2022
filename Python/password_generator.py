#uses python module random to generate random password of length 8

import random
import string

def random_password():
    random_source = string.ascii_letters  + string.digits + string.punctuation
    pas = random.choice(string.ascii_lowercase)
    pas += random.choice(string.ascii_uppercase)
    pas += random.choice(string.digits)
    pas += random.choice(string.punctuation)

    for i in range(4):
        password += random.choice(random_source)

    initial_pass = list(pas)
    random.SystemRandom().shuffle(initial_pass)
    pas = ''.join(initial_pass)
    return pas

print("Random Password is ",  random_password())

