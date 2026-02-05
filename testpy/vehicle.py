class Vehicle:
    def __init__(self, make, model, year):
        self.make = make
        self.model = model
        self.year = year

    def start_engine(self):
        return f"The engine of the {self.year} {self.make} {self.model} is now running."

    def stop_engine(self):
        return f"The engine of the {self.year} {self.make} {self.model} has been turned off."

    def get_info(self):
        return f"{self.year} {self.make} {self.model}"
# Example usage:
if __name__ == "__main__":
    my_vehicle = Vehicle("Toyota", "Corolla", 2020)
    print(my_vehicle.get_info())
    print(my_vehicle.start_engine())
    print(my_vehicle.stop_engine())

    m_vehicle = Vehicle("Tesla", "MX60", 2027)
    print(m_vehicle.get_info())
    print(m_vehicle.start_engine())
    print(m_vehicle.stop_engine())