# AZVoice

**Created by:**
- [vk.com/chicago_ruslan](https://vk.com/chicago_ruslan)
- [vk.com/nikitius02](https://vk.com/nikitius02)
- [vk.com/sqzee](https://vk.com/sqzee)

**Description:**
AZVoice is a plugin for enhancing voice communication in SA-MP (San Andreas Multiplayer). This release includes the initial version of the plugin with essential features for initializing voice notes, creating dynamic voice streams, and managing volume settings.

**Features:**
- Initialization of the AZVoice plugin.
- Creation and management of dynamic voice streams.
- Initialization and toggling of voice notes for players.
- Volume control for individual players.

**Basis:**
This plugin is based on SampVoice, and you can find the original repository here: [SampVoice by CyberMor](https://github.com/CyberMor/sampvoice).

**Native Functions:**
- `InitializationAZVoice(port)`
- `InitializationAZVoiceNote(playerid, noteID, const noteName[])`
- `AZVoiceCreateDynamicStream(playerid, const streamBloom[] = 0xFFFFFFFF, const streamTitle[] = "Local", bool:toggle = false)`
- `AZVoiceNote(playerid, bool:toggle, note)`
- `AZVoiceSetVolume(playerid, Float:volume = 100.0)`
- `forward OnAZVoiceStreamIn(playerid, bool:toggle)`

**How to Use:**
To use these native functions, include the `AZVoice.inc` and `AZVoice.dll`/`AZVoice.so` file in your script and follow the descriptions provided in the comments for each function.
