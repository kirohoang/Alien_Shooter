# Alien Shooter
A simple alien shooter game made by kirodev using sfml.

## Login Dialog
- Login using username and password.
  - using sql to store (SQLite or PosgreSQL)
## Main Screen
- Play Button, Exit Button, Settings Button.
- Multi-language
## Settings Screen
- Resolutions settings (maybe auto detect on player window)
- Settings fps (V-Sync, Limit Frame)
- Audio
## Game Stage
- Choosing Stage and Bosses:
  - After pressed start will appear choosing stage screen (5 main stages + 1 special stage)
  - Need to finish the previous to unlock the next stage
  - By the end of all stage will have bosses.
- Map Design (The Solar System):
  - Earth
  - Mars (Alien with cold appearence, ice skill, slow motion)
  - Saturn (Meteor, Dust Stone)
  - Uranus
  - OutOrder (Special Stage: Darkness, cosmics, cold, mystery entity)
  - Sun (So hot, )
## Player & Aliens\
- Player will always have 3 hearts
- Alien will randomly around 3 -> 6 hearts
- Bosses will have 10 hearts and after stage by stage Boss's heart will increasing 10
## Temporary Powers for player
- Multi-Shooter (gain 2 mores small gun left and right side of player for 10 seconds)
- Extra Heart (gain 1 more heart)
- Rapid-Fire (Shooting super fast for 5 seconds)
- Important: Multi-Shooterand Rapid-Fire could use at the same time
## Audio
- DIY follow 8bit style
  - Music in the background (only one track)
  - Normal stage music (2 - 3 different tracks)
  - Bosses Stage music (2 - 3 tracks)