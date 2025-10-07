# Copilot Instructions for this Repository

Purpose: Help AI agents be productive quickly in this C++/mermaid coursework repo.

## Big Picture

- This repo is a set of small, self-contained exercises and notes, organized by topic (e.g., `1.Modelado_en_Orientado_a_Objetos/`, `2.Clases/`).
- C++ examples live in nested subfolders (e.g., `Paradigmas_Imperativos/Numeros_1-100/`). Each folder typically builds to a single `.exe` named after the folder or file.
- Diagrams and documentation (Markdown/Mermaid/PNG) are under `1.Modelado_en_Orientado_a_Objetos/*`. Example: `Actividad_CasoDeEstudio/flowchart LR.mmd`.

## Workflows

- Build single active file: VS Code task `build active` compiles the currently open file to `${fileDirname}/${fileBasenameNoExtension}.exe` using MSYS2 g++ (C++17, `-Wall -Wextra -Wpedantic -g`).
- Build current folder: `build folder` compiles all `*.cpp` in the folder to `${fileDirname}/${fileDirnameBasename}.exe`.
- Release build for folder: `build folder release` uses `-O2 -DNDEBUG`.
- Build all folders: `build all folders` searches for `*/main*.cpp` at the top level and builds each folder to `{dir}/{dir}.exe`.
- Clean: `clean all` deletes `*.exe` in each subfolder.
- Debug: `launch.json` provides three configs using `gdb` from MSYS2; common case is `Debug (carpeta actual)` which builds the folder target, then launches `${fileDirname}/${fileDirnameBasename}.exe`.

## Conventions and Patterns

- Compiler: `C:/msys64/ucrt64/bin/g++.exe`, standard `c++17`. Keep compatibility with MSYS2 GCC toolchain.
- Warnings-as-guidance: Code should be clean under `-Wall -Wextra -Wpedantic`. Prefer simple, educational examples without extra libraries.
- Output naming:
  - Single-file builds: `X.cpp` -> `X.exe` in the same directory.
  - Folder builds: all `*.cpp` -> `{folderName}.exe` in that directory. Ensure a `main*.cpp` exists for inclusion in the "build all" sweep when needed.
- Formatting: `.clang-format` uses LLVM style, 2-space indent, 100 column limit, Allman braces. Avoid one-line function bodies; let the formatter handle wrapping.
- Source layout: Keep each exercise self-contained in its folder (inputs/outputs localized). Avoid cross-folder includes.

## Files to Know

- `.vscode/tasks.json`: central build tasks; mirror flags when adding new scripts or tasks.
- `.vscode/launch.json`: debugging presets; update args in `Debug (carpeta con args)` when examples require input.
- `.vscode/c_cpp_properties.json`: IntelliSense and include paths for MSYS2.
- `.clang-format`: enforced style. Run VS Code format-on-save is enabled in `.vscode/settings.json`.

## How to Add a New Exercise (C++)

1. Create a new subfolder under the relevant topic, e.g., `1.Modelado_en_Orientado_a_Objetos/Paradigmas_Imperativos/Nuevo_Ejemplo/`.
2. Add one or more `.cpp` files with a `main()` (prefer naming main file `main_*.cpp` so `build all folders` can pick it up if placed at top-level).
3. Build with the VS Code task:
   - Single file: Run task `build active` while the file is open.
   - Folder: Run task `build folder` from any file in that folder.
4. Debug with `Debug (carpeta actual)`.

## Mermaid/Docs

- Mermaid files like `flowchart LR.mmd` are plain text; keep graphs minimal and focused. Store generated images alongside when needed.
- Markdown notes live next to exercises (e.g., `UML.md`, `Paradigmas_de_Programacion.md`).

## Examples from Repo

- `Numeros_1-100/Numeros_1-100.cpp`: demonstrates a simple sum function and printing the result.
- `Tablas_multiplicar/tablas.cpp`: reads input from `cin` and prints a multiplication table.

## Agent Tips

- When creating code, adhere to `.clang-format` style and keep code warnings-free under the configured flags.
- Prefer Spanish for user-facing strings to match existing examples (e.g., prompts and messages).
- Do not introduce external dependencies; stick to the C++ standard library.
- Place resulting `.exe` artifacts are ignored by `.gitignore`; do not commit binaries.

If any of the above doesn’t match your current context (e.g., different compiler path or folder patterns), ask for clarification before proceeding.
