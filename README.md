#  Medminder

Helper program designed to get called over SSH from an iOS shortcut to help me 
with regulating doses of a medicine with a non-regular schedule. I designed it
to run on a Raspberry Pi on my home WiFi network. Because this is designed to
be a purely internal application for only one user, security is not a priority.

## Features
### Implemented
### Planned
1. Add new medications
1. Delete existing medications.
1. Mark doses as taken.
1. Refill existing medications.
1. See when a medication was last taken, or when it is next due.
1. Refill reminders when your medication is less than 7 days from empty.
1. Silence low refill reminders/not track remaining inventory.

## Usage
A manpage is available after installation.

```sh
man medminder
```

## Save Data File Structure
Save data is placed in a CSV file in `/home/$user/.medminder/scrips.csv` with a
header.

```csv
name, dose, inventory, lastDose, nextDose, interval
MyMeds, 2, 16, 2023-09-28, 2023-09-30, 3
```

| Parameter | Description |
| --- | --- |
| `name` | Human readable name of your medication. |
| `dose` | The number of units you take. The actual unit _type_ is not important. |
| `inventory` | The total number of units in your inventory. |
| `last_dose` | The date of your last dose. |
| `next_dose` | The date of your next dose. |
| `interval` | The number of days between doses. |