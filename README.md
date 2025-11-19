# CareSim – C++ Medical Device Training Prototype (Unreal Engine 5)

> A lightweight, object-oriented training prototype that explores how first-person simulations can help new healthcare professionals build confidence with emergency medical devices.

---

## 🩺 Motivation · Real-World Problem

In real emergency settings, new nurses, medical students and first responders are often confronted with crash carts full of unfamiliar devices — med kits, defibrillators, monitors and more — all under intense time pressure.

Even when they understand the *theory*, very practical questions remain:

- *Where do I stand, what do I press, in what order do I use this device?*  
- *How do I perform basic actions without fumbling or hesitating?*

That hesitation can translate into **delays, misuse and avoidable stress** during critical moments.

**CareSim** is a small but focused Unreal Engine 5 C++ prototype that experiments with a **unified interaction model** for common emergency devices, with the long-term vision of supporting low-risk, repeatable practice before a learner ever touches real equipment.

---

## 🎮 High-Level Overview

CareSim is a **first-person training sandbox** built in **Unreal Engine 5** with an emphasis on:

- Clean, **object-oriented C++ design** (base class, inheritance, polymorphism)  
- A consistent interaction pattern for multiple devices  
- A workflow that could be extended into richer training scenarios

At its core, the prototype allows a learner to:

1. Walk around a simple environment  
2. Look at a device (e.g., Med Kit, Defibrillator)  
3. Press **E** to interact  
4. Trigger device-specific behavior via a shared C++ interface

---

## 🧩 Core Features

Current prototype capabilities:

- **First-person interaction loop**
  - Player looks at an object and presses **E** to attempt an interaction
  - A C++ line trace determines what the player is targeting

- **Unified interaction base class**
  - `AInteractableBase` encapsulates shared behavior for all interactable devices
  - Each device exposes a human-readable `DisplayName`
  - A virtual `Interact(AActor* InstigatorActor)` method defines the common contract

- **Specialized medical devices (polymorphism in action)**
  - `AMedKit`  
    - Inherits from `AInteractableBase`  
    - Sets `DisplayName` to `"Med Kit"`  
    - Overrides `Interact` to simulate “restoring health” and logs a device-specific message
  - `ADefibrillator`  
    - Inherits from `AInteractableBase`  
    - Sets `DisplayName` to `"Defibrillator"`  
    - Overrides `Interact` to simulate delivering a shock and logs a distinct message

- **Simple feedback loop for learners**
  - Interaction outcomes are surfaced via logs and on-screen messages  
  - Makes it easy to reason about what the player did and which device responded

---

## 🛠 Architecture · Object-Oriented Design

CareSim is intentionally small, but structured to showcase **good C++ OOP practices** inside Unreal:

```text
AInteractableBase (AActor)
  ├── AMedKit : AInteractableBase
  └── ADefibrillator : AInteractableBase

Player Character (e.g., ACareSimCharacter)
  └── void Interact()
        └── Line trace → cast to AInteractableBase → call Interact(this)
