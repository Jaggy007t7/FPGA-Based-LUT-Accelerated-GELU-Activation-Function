# fpga-gelu-activation
#FPGA-friendly implementation of the GELU activation function in Verilog with resource and performance optimizations.


# GELU Activation Function Implementation

import math
import numpy as np

# Exact GELU (using normal CDF)
def gelu_exact(x):
    return x * 0.5 * (1 + math.erf(x / math.sqrt(2)))

# Approximate GELU (used in practice)
def gelu_approx(x):
    return 0.5 * x * (1 + math.tanh(
        math.sqrt(2 / math.pi) * (x + 0.044715 * x**3)
    ))

# Vectorized version using NumPy
def gelu_numpy(x):
    return 0.5 * x * (1 + np.tanh(
        np.sqrt(2 / np.pi) * (x + 0.044715 * np.power(x, 3))
    ))

# Example usage
x_values = np.linspace(-3, 3, 100)
y_values = gelu_numpy(x_values)

print("Sample Output:", y_values[:5])
