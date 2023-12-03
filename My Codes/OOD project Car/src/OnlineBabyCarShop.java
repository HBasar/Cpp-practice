import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

class Vehicle {
    protected String brand;
    protected String model;
    protected double price;

    public Vehicle(String brand, String model, double price) {
        this.brand = brand;
        this.model = model;
        this.price = price;
    }

    public String getBrand() {
        return brand;
    }

    public String getModel() {
        return model;
    }

    public double getPrice() {
        return price;
    }

    @Override
    public String toString() {
        return brand + " " + model + " - Price: $" + price;
    }
}

class Car extends Vehicle {
    private String color;

    public Car(String brand, String model, double price) {
        super(brand, model, price);
        this.color = "Not specified";
    }

    public String getColor() {
        return color;
    }

    public void setColor(String color) {
        this.color = color;
    }

    @Override
    public String toString() {
        return super.toString() + " (Color: " + color + ")";
    }
}

class Customer {
    private String name;
    private String phoneNumber;
    private String email;
    private String password;

    public Customer(String name, String phoneNumber, String email, String password) {
        this.name = name;
        this.phoneNumber = phoneNumber;
        this.email = email;
        this.password = password;
    }

    public String getName() {
        return name;
    }

    public String getPassword() {
        return password;
    }

    // Other getter methods for phoneNumber and email

    public void choosePaymentMethod() {
        // Add payment method selection logic if needed
    }
}

public class OnlineBabyCarShop {
    private static List<Car> cars = new ArrayList<>();
    private static List<Customer> customers = new ArrayList<>();
    private static Customer currentCustomer = null;
    private static Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) {
        initializeCars();
        showWelcomeMessage();

        boolean loggedIn = false;

        while (!loggedIn) {
            int choice = showMainMenu();

            switch (choice) {
                case 1:
                    registerAccount();
                    break;
                case 2:
                    currentCustomer = login();
                    if (currentCustomer != null) {
                        loggedIn = true;
                    }
                    break;
                case 3:
                    System.exit(0);
                    break;
                default:
                    System.out.println("Invalid choice. Please try again.");
                    System.out.println("=======================================");
            }
        }

        while (true) {
            showCarCategories();
            chooseCar();
            System.out.println("Do you want to continue shopping? (1. Yes / 2. No)");
            int continueShoppingChoice = scanner.nextInt();
            if (continueShoppingChoice != 1) {
                break;
            }
        }
        System.out.println("=======================================");
        System.out.println("Thank you for visiting. Goodbye!");
    }

    private static void initializeCars() {
        cars.add(new Car("Toyota", "Camry", 25000.0));
        cars.add(new Car("BMW", "X3", 40000.0));
        cars.add(new Car("Honda", "Civic", 22000.0));
        cars.add(new Car("Mercedes", "CLA", 35000.0));
        // Add more cars as needed
    }

    private static void showWelcomeMessage() {
        System.out.println("=======================================");
        System.out.println("Welcome to the Online Car Shop!");
    }

    private static int showMainMenu() {
        System.out.println("=======================================");
        System.out.println("1. Register an account");
        System.out.println("2. Log in");
        System.out.println("3. Exit");
        System.out.print("Enter your choice: ");
        return scanner.nextInt();
        
    }

    private static void registerAccount() {
        System.out.println("=======================================");
        System.out.print("Enter your name: ");
        scanner.nextLine(); // Consume the newline character
        String name = scanner.nextLine();
        System.out.print("Enter your phone number: ");
        String phoneNumber = scanner.next();
        System.out.print("Enter your email: ");
        String email = scanner.next();
        System.out.print("Enter your password: ");
        String password = scanner.next();
        System.out.println("=======================================");

        Customer newCustomer = new Customer(name, phoneNumber, email, password);
        customers.add(newCustomer);
        System.out.println("Account registered successfully!");
        System.out.println("=======================================");
    }

    private static Customer login() {
        System.out.println("=======================================");
        System.out.print("Enter your name: ");
        scanner.nextLine(); // Consume the newline character
        String name = scanner.nextLine();
        System.out.print("Enter your password: ");
        String password = scanner.nextLine();
        System.out.println("=======================================");

        for (Customer customer : customers) {
            if (customer.getName().equals(name) && customer.getPassword().equals(password)) {
                System.out.println("Login successful!");
                System.out.println("=======================================");
                return customer;
            }
        }

        System.out.println("Invalid credentials. Please try again.");
        System.out.println("=======================================");
        return null;
    }

    private static void showCarCategories() {
        System.out.println("=======================================");
        System.out.println("Available car categories:");

        for (int i = 0; i < cars.size(); i++) {
            System.out.println((i + 1) + ". " + cars.get(i).getBrand());
        }
    }

    private static void chooseCar() {
        System.out.println("=======================================");
        System.out.print("Choose a car category (enter the number): ");
        int categoryChoice = scanner.nextInt();

        if (categoryChoice < 1 || categoryChoice > cars.size()) {
            System.out.println("Invalid choice. Exiting.");
            System.out.println("=======================================");
            System.exit(0);
        }

        Car selectedCar = cars.get(categoryChoice - 1);
        System.out.println("=======================================");
        System.out.println("Selected car: " + selectedCar);

        // Choose the color
        System.out.print("Enter the color of the car: ");
        String color = scanner.next();
        selectedCar.setColor(color);
        System.out.println("=======================================");

        // Customer decides to buy or go back
        System.out.print("Do you want to buy this car? (1. Yes / 2. Go back): ");
        int buyChoice = scanner.nextInt();

        if (buyChoice == 1) {
            purchaseCar(selectedCar);
        }
    }

    private static void purchaseCar(Car car) {
        System.out.println("=======================================");
        System.out.print("Enter your address: ");
        String address = scanner.next();

        // Payment options
        System.out.println("Select a payment option:");
        System.out.println("1. Cash");
        System.out.println("2. Card");
        System.out.println("3. Bkash");
        System.out.println("4. Nagad");
        int paymentChoice = scanner.nextInt();
        switch (paymentChoice) {
            case 1:
            System.out.println("=======================================");
                System.out.println("Payment successful! Thank you for your purchase.");
                break;
            case 2:
                processCardPayment();
                break;
            case 3:
            case 4:
                processMobilePayment(paymentChoice);
                break;
            default:
            System.out.println("=======================================");
                System.out.println("Invalid choice. Exiting.");
                System.exit(0);
        }
        System.out.println("=======================================");
        System.out.println("Car details:\n" + car);
        System.out.println("Deliver to: " + address);
        System.out.println("Thank you for shopping with us, " + currentCustomer.getName() + "!");
        System.out.println("=======================================");
    }

    private static void processCardPayment() {
        System.out.println("=======================================");
        System.out.println("Enter card details for verification (for demonstration purposes):");
        System.out.print("Card number: ");
        String cardNumber = scanner.next();
        System.out.print("Expiration date: ");
        String expirationDate = scanner.next();
        System.out.print("CVV: ");
        String cvv = scanner.next();

        // For demonstration purposes, we're not performing actual card verification.
        System.out.println("=======================================");
        System.out.println("Card details verified. Payment successful!");
        System.out.println("=======================================");
    }

    private static void processMobilePayment(int paymentChoice) {
        System.out.println("=======================================");
        System.out.print("Enter your mobile number for verification (for demonstration purposes): ");
        String mobileNumber = scanner.next();

        // For demonstration purposes, we're not sending an actual verification code.
        System.out.println("Verification code sent to " + mobileNumber);

        System.out.print("Enter the verification code: ");
        String verificationCode = scanner.next();

        System.out.println("Verification successful! Payment completed.");
        System.out.println("=======================================");
    }
}