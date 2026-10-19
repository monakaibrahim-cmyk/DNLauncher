# Dragon Nest Launcher Reference

[![Test Build](https://github.com/monakaibrahim-cmyk/DNLauncher/actions/workflows/test-build.yml/badge.svg)](https://github.com/monakaibrahim-cmyk/DNLauncher/actions/workflows/test-build.yml)

A reverse-engineering and research project focused on reconstructing and studying the Dragon Nest launcher update flow from decompiled code, opcode-level analysis, and leaked reference material.

This repository is not an official launcher, not a product release, and not a complete production-ready client. It is a codebase for analysis, experimentation, and reference reconstruction.

## Purpose

This project is intended to study how the Dragon Nest launcher works at a low level, including:

- launcher initialization and bootstrapping
- patch configuration parsing and update checks
- file download and verification logic
- MD5 and patch package validation
- UI flow and language selection
- launch orchestration for the game client
- logging, diagnostics, and error handling

The project is based on decompiled source, reverse-engineered structures, and leaked reference snippets and should be treated as an educational reconstruction rather than authoritative source code.

## Current state

This repository is best described as an incomplete research snapshot.

- It is reconstructed from decompiled components and leaked references.
- Some logic may be partial, outdated, or not fully accurate to the final live client.
- Resource files, runtime dependencies, and server-side components may be missing.
- Not all paths are guaranteed to be complete or production-safe.

Use this code for educational study, reverse-engineering exercises, compatibility analysis, or internal tooling experiments only.

## Project structure

- `Client/Launcher/` – main launcher application and patch logic
- `Client/WiseLog/` – logging utilities
- `Common/` – shared helpers, filesystem, XML utilities, and support libraries
- `Dumps/` – crash dump or debugging artifacts
- `Output/` and `Build/` – generated build outputs

## Technology stack

- C++
- MFC / Win32 desktop APIs
- Microsoft Visual Studio solution
- XML-based launcher configuration data
- zlib, tinyxml, and other bundled helper libraries

## Requirements

- Windows 10 or later
- Visual Studio 2022 with Desktop development with C++
- Windows SDK compatible with the project configuration
- Win32/x86 target build environment

## Build instructions

1. Open `DNLauncher.sln` in Visual Studio.
2. Select the `Release` configuration and `Win32` platform.
3. Build the solution.
4. The launcher output is expected under the project output directories, typically under `Output\Release\`.

## Important build notes

This project is tightly coupled to Windows native APIs and bundled project dependencies. A clean build may require:

- the same toolchain used by the original project
- additional proprietary assets or server-side configuration
- runtime game resources that are not included in this repository
- manual adjustment of include paths or external library references depending on environment

## Launcher workflow (reconstructed)

1. Initialize launcher state and validate runtime conditions.
2. Load update metadata and configuration from XML.
3. Check whether a patch is required.
4. Download patch data and verify integrity.
5. Validate hashes and apply patched files.
6. Launch the client or continue through launch configuration screens.

## Legal and safety notice

This project contains reverse-engineered reference code and dependencies derived from `leaked source` or decompiled material. It should not be used to redistribute protected assets, bypass licensing, or distribute unauthorized game files.

Please use this repository responsibly and in line with applicable laws and the rights of the original content owners.

This repository includes a GitHub Actions workflow to attempt a Windows MSBuild validation pass for the launcher project.

## Repository status

This is a reverse-engineering reference snapshot, not a polished or complete public release. It is intended to document the architecture, data flow, and patching patterns of a legacy launcher and to serve as a study artifact for researchers and engineers.

