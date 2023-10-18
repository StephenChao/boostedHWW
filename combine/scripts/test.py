import importlib.util

package_name = "rhalphalib"
spec = importlib.util.find_spec(package_name)

if spec is not None:
    print(f"Package {package_name} is installed at: {spec.origin}")
else:
    print(f"Package {package_name} is not installed.")

