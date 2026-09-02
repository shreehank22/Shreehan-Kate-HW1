# RBE 4540/595 — Homework 1

**Author:** Shreehan Kate (skate@wpi.edu)

## Contents

- **Part 1** — ROS 2 service/client pair that sums two 3D force vectors.
  - `src/force_sum_interface` — custom `ForceSum.srv` interface
  - `src/force_sum_py` — `server` (sums the vectors) and `client` (sends two
    hardcoded 3×1 force vectors, prints the result)
  - `ros2_beginner_tutorials/` — packages from the "Beginner: Client Libraries"
    tutorial (`py_pubsub`, `py_srvcli`)
- **Part 2** — Gripper selection write-up for a recycling sorting robot (PDF).
- **Part 3** — Feix grasp taxonomy: two grasp photos (thumb adducted / abducted)
  and a power-precision transition video.

## Build (Part 1)

```bash
source /opt/ros/jazzy/setup.bash
colcon build
source install/setup.bash
```

## Run

Terminal 1:
```bash
source install/setup.bash
ros2 run force_sum_py server
```

Terminal 2:
```bash
source install/setup.bash
ros2 run force_sum_py client
```

The client prints the two hardcoded force vectors and the summed result; the
server logs the incoming request and outgoing response. See the attached
terminal screenshot for a sample run.
