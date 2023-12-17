#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AutomaticSFXVolume)
namespace GlobalNamespace {
class AutomaticSFXVolumeParamsSO;
}
namespace GlobalNamespace {
class AudioManagerSO;
}
namespace GlobalNamespace {
class __AutomaticSFXVolume__InitData;
}
// Forward declare root types
namespace GlobalNamespace {
class AutomaticSFXVolume;
}
namespace GlobalNamespace {
class __AutomaticSFXVolume__InitData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::AutomaticSFXVolume);
MARK_REF_PTR_T(::GlobalNamespace::__AutomaticSFXVolume__InitData);
// Type: ::InitData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4054))
// CS Name: ::AutomaticSFXVolume::InitData*
class CORDL_TYPE __AutomaticSFXVolume__InitData : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field volumeOffset offset 0x10
 __declspec(property(get=__get_volumeOffset, put=__set_volumeOffset)) float_t  volumeOffset;

/// @brief Field maxVolume offset 0x14
 __declspec(property(get=__get_maxVolume, put=__set_maxVolume)) float_t  maxVolume;

/// @brief Field adaptiveSfx offset 0x18
 __declspec(property(get=__get_adaptiveSfx, put=__set_adaptiveSfx)) bool  adaptiveSfx;

constexpr void __set_volumeOffset(float_t  value) ;

constexpr float_t& __get_volumeOffset() ;

constexpr float_t const& __get_volumeOffset() const;

constexpr void __set_maxVolume(float_t  value) ;

constexpr float_t& __get_maxVolume() ;

constexpr float_t const& __get_maxVolume() const;

constexpr void __set_adaptiveSfx(bool  value) ;

constexpr bool& __get_adaptiveSfx() ;

constexpr bool const& __get_adaptiveSfx() const;

static inline ::GlobalNamespace::__AutomaticSFXVolume__InitData* New_ctor(float_t  volumeOffset, bool  adaptiveSfx, float_t  maxVolume) ;

/// @brief Method .ctor addr 0x222c538 size 0x3c virtual false final false
inline void _ctor(float_t  volumeOffset, bool  adaptiveSfx, float_t  maxVolume) ;

// Ctor Parameters [CppParam { name: "", ty: "__AutomaticSFXVolume__InitData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__AutomaticSFXVolume__InitData(__AutomaticSFXVolume__InitData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__AutomaticSFXVolume__InitData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__AutomaticSFXVolume__InitData(__AutomaticSFXVolume__InitData const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __AutomaticSFXVolume__InitData()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__AutomaticSFXVolume__InitData, 0x20>, "Size mismatch!");

} // namespace end def GlobalNamespace
// Type: ::AutomaticSFXVolume
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4055))
// CS Name: ::AutomaticSFXVolume*
class CORDL_TYPE AutomaticSFXVolume : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using InitData = ::GlobalNamespace::__AutomaticSFXVolume__InitData;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x50};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x50 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field kBaseVolume offset 0x0
static constexpr float_t  kBaseVolume{0.4};

/// @brief Field _params offset 0x18
 __declspec(property(get=__get__params, put=__set__params)) ::GlobalNamespace::AutomaticSFXVolumeParamsSO*  _params;

/// @brief Field _audioManager offset 0x20
 __declspec(property(get=__get__audioManager, put=__set__audioManager)) ::GlobalNamespace::AudioManagerSO*  _audioManager;

/// @brief Field _initData offset 0x28
 __declspec(property(get=__get__initData, put=__set__initData)) ::GlobalNamespace::__AutomaticSFXVolume__InitData*  _initData;

/// @brief Field _sampleRate offset 0x30
 __declspec(property(get=__get__sampleRate, put=__set__sampleRate)) float_t  _sampleRate;

/// @brief Field _volume offset 0x34
 __declspec(property(get=__get__volume, put=__set__volume)) float_t  _volume;

/// @brief Field _envelope offset 0x38
 __declspec(property(get=__get__envelope, put=__set__envelope)) float_t  _envelope;

/// @brief Field _attackSamples offset 0x3c
 __declspec(property(get=__get__attackSamples, put=__set__attackSamples)) float_t  _attackSamples;

/// @brief Field _releaseSamples offset 0x40
 __declspec(property(get=__get__releaseSamples, put=__set__releaseSamples)) float_t  _releaseSamples;

/// @brief Field _attackCoef offset 0x44
 __declspec(property(get=__get__attackCoef, put=__set__attackCoef)) float_t  _attackCoef;

/// @brief Field _releaseCoef offset 0x48
 __declspec(property(get=__get__releaseCoef, put=__set__releaseCoef)) float_t  _releaseCoef;

/// @brief Field _maxVolume offset 0x4c
 __declspec(property(get=__get__maxVolume, put=__set__maxVolume)) float_t  _maxVolume;

constexpr void __set__params(::GlobalNamespace::AutomaticSFXVolumeParamsSO*  value) ;

constexpr ::GlobalNamespace::AutomaticSFXVolumeParamsSO* __get__params() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AutomaticSFXVolumeParamsSO*> __get__params() const;

constexpr void __set__audioManager(::GlobalNamespace::AudioManagerSO*  value) ;

constexpr ::GlobalNamespace::AudioManagerSO* __get__audioManager() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::AudioManagerSO*> __get__audioManager() const;

constexpr void __set__initData(::GlobalNamespace::__AutomaticSFXVolume__InitData*  value) ;

constexpr ::GlobalNamespace::__AutomaticSFXVolume__InitData* __get__initData() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__AutomaticSFXVolume__InitData*> __get__initData() const;

constexpr void __set__sampleRate(float_t  value) ;

constexpr float_t& __get__sampleRate() ;

constexpr float_t const& __get__sampleRate() const;

constexpr void __set__volume(float_t  value) ;

constexpr float_t& __get__volume() ;

constexpr float_t const& __get__volume() const;

constexpr void __set__envelope(float_t  value) ;

constexpr float_t& __get__envelope() ;

constexpr float_t const& __get__envelope() const;

constexpr void __set__attackSamples(float_t  value) ;

constexpr float_t& __get__attackSamples() ;

constexpr float_t const& __get__attackSamples() const;

constexpr void __set__releaseSamples(float_t  value) ;

constexpr float_t& __get__releaseSamples() ;

constexpr float_t const& __get__releaseSamples() const;

constexpr void __set__attackCoef(float_t  value) ;

constexpr float_t& __get__attackCoef() ;

constexpr float_t const& __get__attackCoef() const;

constexpr void __set__releaseCoef(float_t  value) ;

constexpr float_t& __get__releaseCoef() ;

constexpr float_t const& __get__releaseCoef() const;

constexpr void __set__maxVolume(float_t  value) ;

constexpr float_t& __get__maxVolume() ;

constexpr float_t const& __get__maxVolume() const;

/// @brief Method Start addr 0x222c278 size 0x4 virtual false final false
inline void Start() ;

/// @brief Method OnDisable addr 0x222c2f4 size 0x88 virtual false final false
inline void OnDisable() ;

/// @brief Method OnValidate addr 0x222c37c size 0x4 virtual false final false
inline void OnValidate() ;

/// @brief Method RecalculateParams addr 0x222c27c size 0x78 virtual false final false
inline void RecalculateParams() ;

/// @brief Method OnAudioFilterRead addr 0x222c380 size 0x154 virtual false final false
inline void OnAudioFilterRead(::ArrayW<float_t,::Array<float_t>*>  data, int32_t  channels) ;

/// @brief Method Update addr 0x222c4d4 size 0x50 virtual false final false
inline void Update() ;

static inline ::GlobalNamespace::AutomaticSFXVolume* New_ctor() ;

/// @brief Method .ctor addr 0x222c524 size 0x14 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "AutomaticSFXVolume", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AutomaticSFXVolume(AutomaticSFXVolume && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AutomaticSFXVolume", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AutomaticSFXVolume(AutomaticSFXVolume const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 AutomaticSFXVolume()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::AutomaticSFXVolume, 0x50>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::AutomaticSFXVolume);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::AutomaticSFXVolume*, "", "AutomaticSFXVolume");
NEED_NO_BOX(::GlobalNamespace::__AutomaticSFXVolume__InitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__AutomaticSFXVolume__InitData*, "", "AutomaticSFXVolume/InitData");
