# update

A tiny shell script for Arch Linux that walks you through updating **pacman**
and the **AUR**, one step at a time, instead of running everything blindly.

It prompts you at each stage so you stay in control of what gets updated and
which AUR helper runs.

## What it does

1. Asks:
   ```
   update
   (AUR/Pacman) :
   ```
   Type `pacman` to update official packages first.
2. Prints a big ASCII-art **"pacman"** banner, then runs `sudo pacman -Syu`,
   asking for your password and showing the usual sync / download / install
   output.
3. Once that finishes, it asks again:
   ```
   (AUR/Pacman) : aur
   ```
   Type `aur` to move on to AUR packages.
4. Prints a matching ASCII-art **"aur"** banner, then asks which AUR helper
   to use:
   ```
   (Paru/Yay) :
   ```
5. Runs the chosen helper (`paru` or `yay`) to sync and upgrade AUR and
   devel packages, including the package-exclusion prompt they normally
   show (e.g. `Packages to exclude (eg: 1 2 3, 1-3):`).

So a full run looks like:

```
update
(AUR/Pacman) : pacman
   ... pacman -Syu output ...
(AUR/Pacman) : aur
(Paru/Yay) : paru
   ... paru -Syu output ...
```

## Requirements

- Arch Linux (or an Arch-based distro)
- `sudo` privileges for the pacman step
- At least one AUR helper installed:
  - [`paru`](https://github.com/Morganamilo/paru)
  - [`yay`](https://github.com/Jguer/yay)

## Installation

```bash
git clone https://github.com/mtitla/update.git
cd update
chmod +x update.sh
```

Optionally put it in your `$PATH`:

```bash
sudo cp update.sh /usr/bin/update
```

## Usage

```bash
./update.sh
```

or, if installed to your `$PATH`:

```bash
update
```

Answer the two prompts as they come:

- `(AUR/Pacman) :` → type `pacman` first, then run it again and type `aur`
- `(Paru/Yay) :` → type whichever helper you want for that run

## Notes

- The script just drives `pacman` and your chosen AUR helper; it doesn't
  replace either one, both must already be installed.
- Since it asks separately for pacman and AUR, you can use it to update
  only one side if that's all you need that day.
- AUR packages aren't officially vetted by Arch, review the update list
  (and the exclusion prompt) before confirming.

## License

MIT
