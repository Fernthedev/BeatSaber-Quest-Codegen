#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(G_AudioMonitor)
namespace UnityEngine {
struct FFTWindow;
}
namespace UnityEngine::SceneManagement {
struct LoadSceneMode;
}
namespace UnityEngine {
class AudioListener;
}
namespace Tayx::Graphy {
class GraphyManager;
}
namespace Tayx::Graphy {
struct __GraphyManager__LookForAudioListener;
}
namespace UnityEngine::SceneManagement {
struct Scene;
}
// Forward declare root types
namespace Tayx::Graphy::Audio {
class G_AudioMonitor;
}
// Write type traits
MARK_REF_PTR_T(::Tayx::Graphy::Audio::G_AudioMonitor);
// Type: Tayx.Graphy.Audio::G_AudioMonitor
namespace Tayx::Graphy::Audio {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15088))
// CS Name: ::Tayx.Graphy.Audio::G_AudioMonitor*
class CORDL_TYPE G_AudioMonitor : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x50};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x50 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field m_refValue offset 0x0
static constexpr float_t  m_refValue{1.0};

/// @brief Field m_graphyManager offset 0x18
 __declspec(property(get=__get_m_graphyManager, put=__set_m_graphyManager)) ::Tayx::Graphy::GraphyManager*  m_graphyManager;

/// @brief Field m_audioListener offset 0x20
 __declspec(property(get=__get_m_audioListener, put=__set_m_audioListener)) ::UnityEngine::AudioListener*  m_audioListener;

/// @brief Field m_findAudioListenerInCameraIfNull offset 0x28
 __declspec(property(get=__get_m_findAudioListenerInCameraIfNull, put=__set_m_findAudioListenerInCameraIfNull)) ::Tayx::Graphy::__GraphyManager__LookForAudioListener  m_findAudioListenerInCameraIfNull;

/// @brief Field m_FFTWindow offset 0x2c
 __declspec(property(get=__get_m_FFTWindow, put=__set_m_FFTWindow)) ::UnityEngine::FFTWindow  m_FFTWindow;

/// @brief Field m_spectrumSize offset 0x30
 __declspec(property(get=__get_m_spectrumSize, put=__set_m_spectrumSize)) int32_t  m_spectrumSize;

/// @brief Field <Spectrum>k__BackingField offset 0x38
 __declspec(property(get=__get__Spectrum_k__BackingField, put=__set__Spectrum_k__BackingField)) ::ArrayW<float_t,::Array<float_t>*>  _Spectrum_k__BackingField;

/// @brief Field <SpectrumHighestValues>k__BackingField offset 0x40
 __declspec(property(get=__get__SpectrumHighestValues_k__BackingField, put=__set__SpectrumHighestValues_k__BackingField)) ::ArrayW<float_t,::Array<float_t>*>  _SpectrumHighestValues_k__BackingField;

/// @brief Field <MaxDB>k__BackingField offset 0x48
 __declspec(property(get=__get__MaxDB_k__BackingField, put=__set__MaxDB_k__BackingField)) float_t  _MaxDB_k__BackingField;

 __declspec(property(get=get_Spectrum, put=set_Spectrum)) ::ArrayW<float_t,::Array<float_t>*>  Spectrum;

 __declspec(property(get=get_SpectrumHighestValues, put=set_SpectrumHighestValues)) ::ArrayW<float_t,::Array<float_t>*>  SpectrumHighestValues;

 __declspec(property(get=get_MaxDB, put=set_MaxDB)) float_t  MaxDB;

 __declspec(property(get=get_SpectrumDataAvailable)) bool  SpectrumDataAvailable;

constexpr void __set_m_graphyManager(::Tayx::Graphy::GraphyManager*  value) ;

constexpr ::Tayx::Graphy::GraphyManager* __get_m_graphyManager() ;

constexpr ::cordl_internals::to_const_pointer<::Tayx::Graphy::GraphyManager*> __get_m_graphyManager() const;

constexpr void __set_m_audioListener(::UnityEngine::AudioListener*  value) ;

constexpr ::UnityEngine::AudioListener* __get_m_audioListener() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AudioListener*> __get_m_audioListener() const;

constexpr void __set_m_findAudioListenerInCameraIfNull(::Tayx::Graphy::__GraphyManager__LookForAudioListener  value) ;

constexpr ::Tayx::Graphy::__GraphyManager__LookForAudioListener& __get_m_findAudioListenerInCameraIfNull() ;

constexpr ::Tayx::Graphy::__GraphyManager__LookForAudioListener const& __get_m_findAudioListenerInCameraIfNull() const;

constexpr void __set_m_FFTWindow(::UnityEngine::FFTWindow  value) ;

constexpr ::UnityEngine::FFTWindow& __get_m_FFTWindow() ;

constexpr ::UnityEngine::FFTWindow const& __get_m_FFTWindow() const;

constexpr void __set_m_spectrumSize(int32_t  value) ;

constexpr int32_t& __get_m_spectrumSize() ;

constexpr int32_t const& __get_m_spectrumSize() const;

constexpr void __set__Spectrum_k__BackingField(::ArrayW<float_t,::Array<float_t>*>  value) ;

constexpr ::ArrayW<float_t,::Array<float_t>*>& __get__Spectrum_k__BackingField() ;

constexpr ::ArrayW<float_t,::Array<float_t>*> const& __get__Spectrum_k__BackingField() const;

constexpr void __set__SpectrumHighestValues_k__BackingField(::ArrayW<float_t,::Array<float_t>*>  value) ;

constexpr ::ArrayW<float_t,::Array<float_t>*>& __get__SpectrumHighestValues_k__BackingField() ;

constexpr ::ArrayW<float_t,::Array<float_t>*> const& __get__SpectrumHighestValues_k__BackingField() const;

constexpr void __set__MaxDB_k__BackingField(float_t  value) ;

constexpr float_t& __get__MaxDB_k__BackingField() ;

constexpr float_t const& __get__MaxDB_k__BackingField() const;

/// @brief Method get_Spectrum addr 0x2a0a304 size 0x8 virtual false final false
inline ::ArrayW<float_t,::Array<float_t>*> get_Spectrum() ;

/// @brief Method set_Spectrum addr 0x2a0a30c size 0x8 virtual false final false
inline void set_Spectrum(::ArrayW<float_t,::Array<float_t>*>  value) ;

/// @brief Method get_SpectrumHighestValues addr 0x2a0a314 size 0x8 virtual false final false
inline ::ArrayW<float_t,::Array<float_t>*> get_SpectrumHighestValues() ;

/// @brief Method set_SpectrumHighestValues addr 0x2a0a31c size 0x8 virtual false final false
inline void set_SpectrumHighestValues(::ArrayW<float_t,::Array<float_t>*>  value) ;

/// @brief Method get_MaxDB addr 0x2a0a324 size 0x8 virtual false final false
inline float_t get_MaxDB() ;

/// @brief Method set_MaxDB addr 0x2a0a32c size 0x8 virtual false final false
inline void set_MaxDB(float_t  value) ;

/// @brief Method get_SpectrumDataAvailable addr 0x2a09578 size 0x60 virtual false final false
inline bool get_SpectrumDataAvailable() ;

/// @brief Method Awake addr 0x2a0a334 size 0x4 virtual false final false
inline void Awake() ;

/// @brief Method Update addr 0x2a0a338 size 0x1ec virtual false final false
inline void Update() ;

/// @brief Method OnDestroy addr 0x2a0a5d8 size 0xa4 virtual false final false
inline void OnDestroy() ;

/// @brief Method UpdateParameters addr 0x2a0a044 size 0xd0 virtual false final false
inline void UpdateParameters() ;

/// @brief Method lin2dB addr 0x2a09d90 size 0x30 virtual false final false
inline float_t lin2dB(float_t  linear) ;

/// @brief Method dBNormalized addr 0x2a09dc0 size 0x14 virtual false final false
inline float_t dBNormalized(float_t  db) ;

/// @brief Method FindAudioListener addr 0x2a0a524 size 0xb4 virtual false final false
inline ::UnityEngine::AudioListener* FindAudioListener() ;

/// @brief Method OnSceneLoaded addr 0x2a0a67c size 0x24 virtual false final false
inline void OnSceneLoaded(::UnityEngine::SceneManagement::Scene  scene, ::UnityEngine::SceneManagement::LoadSceneMode  loadSceneMode) ;

/// @brief Method Init addr 0x2a036c8 size 0x12c virtual false final false
inline void Init() ;

static inline ::Tayx::Graphy::Audio::G_AudioMonitor* New_ctor() ;

/// @brief Method .ctor addr 0x2a0a6a0 size 0x1c virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "G_AudioMonitor", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
G_AudioMonitor(G_AudioMonitor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "G_AudioMonitor", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
G_AudioMonitor(G_AudioMonitor const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 G_AudioMonitor()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Tayx::Graphy::Audio::G_AudioMonitor, 0x50>, "Size mismatch!");

} // namespace end def Tayx::Graphy::Audio
NEED_NO_BOX(::Tayx::Graphy::Audio::G_AudioMonitor);
DEFINE_IL2CPP_ARG_TYPE(::Tayx::Graphy::Audio::G_AudioMonitor*, "Tayx.Graphy.Audio", "G_AudioMonitor");
