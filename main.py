from sympy import symbols, Function, Eq, dsolve, sin, sqrt, pi, solve, Integral
from sympy.abc import x, n, L

# Define wavefunction as a function of x
psi = Function('psi')

# Define constants
hbar, m, E = symbols('hbar m E', real=True, positive=True)

# Time-independent Schrodinger equation inside box (0 < x < L)
TISE = Eq(-hbar**2 / (2*m) * psi(x).diff(x, 2), E * psi(x))

# Solve the differential equation
sol = dsolve(TISE, psi(x))
print("General solution:")
print(sol)

# Apply boundary condition at x=0: psi(0) = 0
A, B, k = symbols('A B k')
solution = A*sin(k*x)
solution_at_0 = solution.subs(x, 0)
print("Boundary at x=0 -> B = 0:", solution_at_0)

# Apply boundary condition at x=L: sin(kL) = 0 -> k = n*pi/L
k_expr = n*pi/L

# Normalize wavefunction: ∫|ψ|² dx from 0 to L = 1
psi_n = sqrt(2/L) * sin(n*pi*x/L)
norm = Integral(psi_n**2, (x, 0, L)).doit()
print("Normalization check (should be 1):", norm)

# Energy eigenvalue
E_n = (hbar**2 * (n*pi/L)**2) / (2*m)
print("Energy levels:")
print(Eq(symbols('E_n'), E_n))
