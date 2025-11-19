# CareSim – C++ Medical Device Training Prototype (Unreal Engine 5)

CareSim is a small Unreal Engine 5 C++ project that explores how to build a reusable interaction system for emergency medical devices.

## Real-world problem

New nurses and first responders often face several different devices (med kits, defibrillators, monitors) in emergency rooms and crash carts. Under stress, even simple actions like turning a device on or using it correctly can cause hesitation or errors.

CareSim models a basic training environment where a learner can walk up to different devices and interact with them in a consistent way.

## Design

- First-person player character that can look at devices and press **E** to interact.
- `AInteractableBase` C++ class with a virtual `Interact(AActor* InstigatorActor)` method and a `DisplayName` property.
- `AMedKit` and `ADefibrillator` classes inherit from `AInteractableBase` and override `Interact` with device-specific behavior.
- A line trace from the player checks what the player is looking at and calls the correct `Interact` implementation.

## Tech Stack

- Unreal Engine 5 (C++ project)
- C++ object-oriented design (base class, inheritance, polymorphism)
- Basic first-person interaction logic


