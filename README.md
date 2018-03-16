# GoldenOaks NEAT library
 
 Library for creating NEAT networks operating on any vector space
 (any class with defined operators of addition and multiplication by float (class::operator+(class), class::operator*(float), and some activation function)
 
 General idea:
 Neuron takes a linear combination of its inputs (i.e. weighted sum) and applies its activation function (with arbitrary mutable parameters e.g. threshold for on/off activation).

 Goal: try it on a function space

 Paper on NEAT by Stanley and Miikkulainen: http://nn.cs.utexas.edu/downloads/papers/stanley.ec02.pdf
