/* map xaudio2 API to faudio API */
typedef uint32_t HRESULT;
typedef uint32_t UINT32;
typedef uint32_t DWORD;
typedef uint8_t BOOL;

#define WINAPI FAUDIOCALL

#define TRUE 1
#define FALSE 0

#define S_OK 0
#define XAUDIO2_E_INVALID_CALL FAUDIO_E_INVALID_CALL

#define XAUDIO2_DEFAULT_PROCESSOR FAUDIO_DEFAULT_PROCESSOR
#define XAUDIO2_COMMIT_NOW FAUDIO_COMMIT_NOW
#define XAUDIO2_END_OF_STREAM FAUDIO_END_OF_STREAM

#define WAVE_FORMAT_PCM FAUDIO_FORMAT_PCM
#define WAVE_FORMAT_IEEE_FLOAT FAUDIO_FORMAT_IEEE_FLOAT

#define AudioCategory_GameEffects FAudioStreamCategory_GameEffects

#define GlobalDefaultDevice FAudioGlobalDefaultDevice
#define NotDefaultDevice FAudioNotDefaultDevice

#define XAudio2Create FAudioCreate

typedef FAudioBuffer XAUDIO2_BUFFER;
typedef FAudioDeviceDetails XAUDIO2_DEVICE_DETAILS;
typedef FAudioEffectChain XAUDIO2_EFFECT_CHAIN;
typedef FAudioEffectDescriptor XAUDIO2_EFFECT_DESCRIPTOR;
typedef FAudioVoiceDetails XAUDIO2_VOICE_DETAILS;
typedef FAudioVoiceDetails XAUDIO27_VOICE_DETAILS;
typedef FAudioVoiceState XAUDIO2_VOICE_STATE;
typedef FAudioWaveFormatEx WAVEFORMATEX;
typedef FAudioPerformanceData XAUDIO2_PERFORMANCE_DATA;

typedef FAudioEngineCallback IXAudio2EngineCallback;
typedef FAudioVoiceCallback IXAudio2VoiceCallback;

typedef FAPO IXAPO;

typedef FAudio IXAudio27;
#define IXAudio27_CreateMasteringVoice FAudio_CreateMasteringVoice
#define IXAudio27_CreateSourceVoice FAudio_CreateSourceVoice
#define IXAudio27_CreateSubmixVoice FAudio_CreateSubmixVoice
#define IXAudio27_GetDeviceCount FAudio_GetDeviceCount
#define IXAudio27_GetDeviceDetails FAudio_GetDeviceDetails
#define IXAudio27_GetPerformanceData FAudio_GetPerformanceData
#define IXAudio27_Initialize FAudio_Initialize
#define IXAudio27_RegisterForCallbacks FAudio_RegisterForCallbacks
#define IXAudio27_Release FAudio_Release
#define IXAudio27_StartEngine FAudio_StartEngine
#define IXAudio27_StopEngine FAudio_StopEngine
#define IXAudio27_UnregisterForCallbacks FAudio_UnregisterForCallbacks

typedef FAudio IXAudio2;
#define IXAudio2_CreateMasteringVoice FAudio_CreateMasteringVoice8
#define IXAudio2_CreateSourceVoice FAudio_CreateSourceVoice
#define IXAudio2_CreateSubmixVoice FAudio_CreateSubmixVoice
#define IXAudio2_GetPerformanceData FAudio_GetPerformanceData
#define IXAudio2_RegisterForCallbacks FAudio_RegisterForCallbacks
#define IXAudio2_Release FAudio_Release
#define IXAudio2_StartEngine FAudio_StartEngine
#define IXAudio2_StopEngine FAudio_StopEngine
#define IXAudio2_UnregisterForCallbacks FAudio_UnregisterForCallbacks

typedef FAudioMasteringVoice IXAudio2MasteringVoice;
#define IXAudio2MasteringVoice_DestroyVoice FAudioVoice_DestroyVoice
#define IXAudio2MasteringVoice_GetChannelMask FAudioMasteringVoice_GetChannelMask
#define IXAudio2MasteringVoice_SetEffectChain FAudioVoice_SetEffectChain
#define IXAudio2MasteringVoice_SetVolume FAudioVoice_SetVolume

typedef FAudioSourceVoice IXAudio27SourceVoice;
#define IXAudio27SourceVoice_DestroyVoice FAudioVoice_DestroyVoice
#define IXAudio27SourceVoice_ExitLoop FAudioSourceVoice_ExitLoop
#define IXAudio27SourceVoice_FlushSourceBuffers FAudioSourceVoice_FlushSourceBuffers
#define IXAudio27SourceVoice_GetState(a,b) FAudioSourceVoice_GetState(a,b,0)
#define IXAudio27SourceVoice_GetVoiceDetails FAudioVoice_GetVoiceDetails
#define IXAudio27SourceVoice_SetChannelVolumes FAudioVoice_SetChannelVolumes
#define IXAudio27SourceVoice_SetSourceSampleRate FAudioSourceVoice_SetSourceSampleRate
#define IXAudio27SourceVoice_Start FAudioSourceVoice_Start
#define IXAudio27SourceVoice_Stop FAudioSourceVoice_Stop
#define IXAudio27SourceVoice_SubmitSourceBuffer FAudioSourceVoice_SubmitSourceBuffer

typedef FAudioSourceVoice IXAudio2SourceVoice;
#define IXAudio2SourceVoice_DestroyVoice FAudioVoice_DestroyVoice
#define IXAudio2SourceVoice_ExitLoop FAudioSourceVoice_ExitLoop
#define IXAudio2SourceVoice_FlushSourceBuffers FAudioSourceVoice_FlushSourceBuffers
#define IXAudio2SourceVoice_GetState FAudioSourceVoice_GetState
#define IXAudio2SourceVoice_GetVoiceDetails FAudioVoice_GetVoiceDetails
#define IXAudio2SourceVoice_SetChannelVolumes FAudioVoice_SetChannelVolumes
#define IXAudio2SourceVoice_SetSourceSampleRate FAudioSourceVoice_SetSourceSampleRate
#define IXAudio2SourceVoice_SetVolume FAudioVoice_SetVolume
#define IXAudio2SourceVoice_Start FAudioSourceVoice_Start
#define IXAudio2SourceVoice_Stop FAudioSourceVoice_Stop
#define IXAudio2SourceVoice_SubmitSourceBuffer FAudioSourceVoice_SubmitSourceBuffer

typedef FAudioSubmixVoice IXAudio27SubmixVoice;
#define IXAudio27SubmixVoice_GetVoiceDetails FAudioVoice_GetVoiceDetails
#define IXAudio27SubmixVoice_DestroyVoice FAudioVoice_DestroyVoice

typedef FAudioSubmixVoice IXAudio2SubmixVoice;
#define IXAudio2SubmixVoice_GetVoiceDetails FAudioVoice_GetVoiceDetails
#define IXAudio2SubmixVoice_DestroyVoice FAudioVoice_DestroyVoice
