# OpenRTK Precise GNSS

## Description

This project focuses on implementing Precise Point Positioning (PPP), Single Point Positioning (SPP), and Real-Time Kinematic (RTK) algorithms for postprocessing GNSS data. The main goal of this project is having a collection of high precision GNSS algorithms that are documented and implemented sustainably. The main implementation will be in C++ for best performance at a later point in this project.

## Table of Contents

- [OpenRTK Precise GNSS](#openrtk-precise-gnss)
  - [Description](#description)
  - [Table of Contents](#table-of-contents)
  - [Status (v0.2)](#status-v02)
  - [Installation](#installation)
  - [Documentation](#documentation)

## Status (v0.2)

- Basic RINEX file reader in C++ and json export
- LSQ version of SPP and PPP alrogithms in MATLAB running. They will be translated and merged into the C++ main project later.
- Precise Ephemeris data (SP3) files parser (version d) and json export
- Precise Clock data (CLK) files parser (version 3.00 and later) and json export
- Standalone Console Application to convert OBS, NAV, CLK and SP3 to json format

## Installation

Clone the repository:

   ```bash
   git clone https://github.com/AndreasArendt/OpenRTK.git
   cd OpenRTK
   ```

## Documentation                                                               
The full documentation is available at [Read the Docs](https://docopenrtk.readthedocs.io).

---

[![Documentation Status](https://readthedocs.org/projects/docopenrtk/badge/?version=latest)](https://docopenrtk.readthedocs.io/en/latest/?badge=latest)
