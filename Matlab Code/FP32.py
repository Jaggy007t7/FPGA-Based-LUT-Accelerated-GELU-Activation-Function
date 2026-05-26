import numpy as np
import os

# ---------------------------------------------------
# Get current script directory
# ---------------------------------------------------
script_dir = os.path.dirname(os.path.abspath(__file__))

# Input CSV path
input_csv = os.path.join(script_dir, "GELU_samples.csv")

# ---------------------------------------------------
# Load CSV
# CSV contains single row of decimal values
# ---------------------------------------------------
data = np.loadtxt(input_csv, delimiter=',')

# Convert to float32
float32_data = data.astype(np.float32)

# Convert each number to IEEE-754 FP32 binary
binary_data = [
    format(np.frombuffer(num.tobytes(), dtype=np.uint32)[0], '032b')
    for num in float32_data
]

# ---------------------------------------------------
# Save output in DIFFERENT ROWS
# ---------------------------------------------------
output_csv = os.path.join(script_dir, "float32_output.csv")

np.savetxt(
    output_csv,
    np.array(binary_data, dtype=str),
    fmt='%s'
)

print("Conversion completed!")
print("Output saved to:", output_csv)