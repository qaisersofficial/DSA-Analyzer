# Contributing to DSA Analyzer

Thank you for contributing to **DSA Analyzer**. Please follow these conventions so our C++ codebase, instrumentation reports, and project deliverables stay clean and consistent.

## 1. Branching & Pull Requests
- Never commit directly to `main`; `main` is protected and requires a Pull Request (PR).
- Always branch off an up-to-date `main`:
  ```bash
  git checkout main
  git pull origin main
  git checkout -b feat/<short-module-name>

Keep commits small and focused on one logical change at a time.   

## 2. Project Scope Rules
Implement data structures and algorithms yourself using arrays, classes, and pointers, do not use ready-made STL containers such as std::vector. Enforce guardrails specified in the proposal, such as preventing Binary Search from running on unsorted data and operating on fresh copies of input data during comparisons.   
