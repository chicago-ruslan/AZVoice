/*
 * AZVoice Include File
 * Created by the developers of the plugin: vk.com/chicago_ruslan, vk.com/nikitius02, vk.com/sqzee
 * Plugin version: v10.0.0
 *
 * This include provides native functions to interact with the AZVoice plugin.
 * Below is a description of each function and its parameters.
 *
 * The basis for creating this plugin was SampVoice:
 * https://github.com/CyberMor/sampvoice
 */

/*
 * Initializes the AZVoice plugin.
 * @param port: The port number to be used for the voice server.
 */
native InitializationAZVoice(port);

/*
 * Initializes a voice note for a specific player.
 * @param playerid: The ID of the player.
 * @param noteID: The ID of the voice note.
 * @param noteName: The name of the voice note.
 */
native InitializationAZVoiceNote(playerid, noteID, const noteName[]);

/*
 * Creates a dynamic voice stream.
 * @param playerid: The ID of the player.
 * @param streamBloom: The bloom effect for the stream (default is 0xFFFFFFFF).
 * @param streamTitle: The title of the stream (default is "Локальный").
 * @param toggle: Whether the stream is enabled or not (default is false).
 */
native AZVoiceCreateDynamicStream(playerid, const streamBloom[] = 0xFFFFFFFF, const streamTitle[] = "Локальный", bool:toggle = false);

/*
 * Toggles the voice note for a specific player.
 * @param playerid: The ID of the player.
 * @param toggle: Whether to enable or disable the voice note.
 * @param note: The note to be toggled.
 */
native AZVoiceNote(playerid, bool:toggle, note);

/*
 * Sets the volume for a specific player.
 * @param playerid: The ID of the player.
 * @param volume: The volume level to be set (default is 100.0).
 */
native AZVoiceSetVolume(playerid, Float:volume = 100.0);

/*
 * Callback function triggered when a player streams in.
 * @param playerid: The ID of the player.
 * @param toggle: Whether the stream is enabled or not.
 */

forward OnAZVoiceStreamIn(playerid, bool:toggle);