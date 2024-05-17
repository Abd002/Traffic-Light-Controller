Great! Here's an updated description for your GitHub repository, including the `delay_ms.v` module for managing timing:

---

## Traffic Light Controller with Debounce

This Verilog project implements a traffic light controller with robust button press handling using debounce logic. The system uses a finite state machine (FSM) to manage traffic light transitions based on pedestrian button presses and timeout signals. An additional `delay_ms.v` module is included to provide precise timing for the traffic light and debounce functionality.

### Features
- **Debounce Module**: Filters out noise from the button press, ensuring stable input to the FSM.
- **Finite State Machine (FSM)**: Controls traffic light states (green, yellow, red) and handles transitions.
- **Delay Module**: Provides millisecond-level timing for managing state transitions and debounce timing.
- **State Transitions**:
  - Green to Yellow on button press.
  - Yellow to Red on timeout.
  - Red to Extended Red or back to Green based on button press and timeout.

### Files
- `debounce.v`: Verilog module for debouncing the button press.
- `traffic_light_fsm.v`: Verilog module implementing the traffic light FSM.
- `delay_ms.v`: Verilog module for generating millisecond delays to time traffic light states and debounce intervals.

### How to Use
1. Clone the repository.
2. Synthesize the Verilog code using your preferred FPGA or simulation tool.
3. Integrate the debounce, FSM, and delay modules into your traffic light control system.


---

This enhanced description includes the `delay_ms.v` module, explaining its role and providing users with a comprehensive overview of the project's components and functionality.![Capture](https://github.com/Abd002/Traffic-Light-Controller/assets/88741327/bab1654f-f629-4087-8409-e2e3e6e8b778)
