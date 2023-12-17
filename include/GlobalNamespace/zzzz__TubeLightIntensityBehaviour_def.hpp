#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Playables/zzzz__PlayableBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(TubeLightIntensityBehaviour)
namespace GlobalNamespace {
class DirectionalLight;
}
namespace GlobalNamespace {
class TubeBloomPrePassLight;
}
namespace UnityEngine::Playables {
struct Playable;
}
namespace UnityEngine::Playables {
struct FrameData;
}
namespace System {
class Object;
}
// Forward declare root types
namespace GlobalNamespace {
class TubeLightIntensityBehaviour;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::TubeLightIntensityBehaviour);
// Type: ::TubeLightIntensityBehaviour
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10425))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6024))
// CS Name: ::TubeLightIntensityBehaviour*
class CORDL_TYPE TubeLightIntensityBehaviour : public ::UnityEngine::Playables::PlayableBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x58};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x58 - sizeof(::UnityEngine::Playables::PlayableBehaviour)]{};

/// @brief Field _noPredefinedStartValue offset 0x10
 __declspec(property(get=__get__noPredefinedStartValue, put=__set__noPredefinedStartValue)) bool  _noPredefinedStartValue;

/// @brief Field _startLightIntensity offset 0x14
 __declspec(property(get=__get__startLightIntensity, put=__set__startLightIntensity)) float_t  _startLightIntensity;

/// @brief Field _startLaserIntensity offset 0x18
 __declspec(property(get=__get__startLaserIntensity, put=__set__startLaserIntensity)) float_t  _startLaserIntensity;

/// @brief Field _endLightIntensity offset 0x1c
 __declspec(property(get=__get__endLightIntensity, put=__set__endLightIntensity)) float_t  _endLightIntensity;

/// @brief Field _endLaserIntensity offset 0x20
 __declspec(property(get=__get__endLaserIntensity, put=__set__endLaserIntensity)) float_t  _endLaserIntensity;

/// @brief Field _disableWhenFinished offset 0x24
 __declspec(property(get=__get__disableWhenFinished, put=__set__disableWhenFinished)) bool  _disableWhenFinished;

/// @brief Field _blend offset 0x28
 __declspec(property(get=__get__blend, put=__set__blend)) float_t  _blend;

/// @brief Field _initialized offset 0x2c
 __declspec(property(get=__get__initialized, put=__set__initialized)) bool  _initialized;

/// @brief Field _originalLightIntensity offset 0x30
 __declspec(property(get=__get__originalLightIntensity, put=__set__originalLightIntensity)) float_t  _originalLightIntensity;

/// @brief Field _originalLaserIntensity offset 0x34
 __declspec(property(get=__get__originalLaserIntensity, put=__set__originalLaserIntensity)) float_t  _originalLaserIntensity;

/// @brief Field _tubeLights offset 0x38
 __declspec(property(get=__get__tubeLights, put=__set__tubeLights)) ::ArrayW<::GlobalNamespace::TubeBloomPrePassLight*,::Array<::GlobalNamespace::TubeBloomPrePassLight*>*>  _tubeLights;

/// @brief Field _directionalLights offset 0x40
 __declspec(property(get=__get__directionalLights, put=__set__directionalLights)) ::ArrayW<::GlobalNamespace::DirectionalLight*,::Array<::GlobalNamespace::DirectionalLight*>*>  _directionalLights;

/// @brief Field _started offset 0x48
 __declspec(property(get=__get__started, put=__set__started)) bool  _started;

/// @brief Field _finished offset 0x49
 __declspec(property(get=__get__finished, put=__set__finished)) bool  _finished;

/// @brief Field _firstFrameLightIntensity offset 0x4c
 __declspec(property(get=__get__firstFrameLightIntensity, put=__set__firstFrameLightIntensity)) float_t  _firstFrameLightIntensity;

/// @brief Field _firstFrameLaserIntensity offset 0x50
 __declspec(property(get=__get__firstFrameLaserIntensity, put=__set__firstFrameLaserIntensity)) float_t  _firstFrameLaserIntensity;

constexpr void __set__noPredefinedStartValue(bool  value) ;

constexpr bool& __get__noPredefinedStartValue() ;

constexpr bool const& __get__noPredefinedStartValue() const;

constexpr void __set__startLightIntensity(float_t  value) ;

constexpr float_t& __get__startLightIntensity() ;

constexpr float_t const& __get__startLightIntensity() const;

constexpr void __set__startLaserIntensity(float_t  value) ;

constexpr float_t& __get__startLaserIntensity() ;

constexpr float_t const& __get__startLaserIntensity() const;

constexpr void __set__endLightIntensity(float_t  value) ;

constexpr float_t& __get__endLightIntensity() ;

constexpr float_t const& __get__endLightIntensity() const;

constexpr void __set__endLaserIntensity(float_t  value) ;

constexpr float_t& __get__endLaserIntensity() ;

constexpr float_t const& __get__endLaserIntensity() const;

constexpr void __set__disableWhenFinished(bool  value) ;

constexpr bool& __get__disableWhenFinished() ;

constexpr bool const& __get__disableWhenFinished() const;

constexpr void __set__blend(float_t  value) ;

constexpr float_t& __get__blend() ;

constexpr float_t const& __get__blend() const;

constexpr void __set__initialized(bool  value) ;

constexpr bool& __get__initialized() ;

constexpr bool const& __get__initialized() const;

constexpr void __set__originalLightIntensity(float_t  value) ;

constexpr float_t& __get__originalLightIntensity() ;

constexpr float_t const& __get__originalLightIntensity() const;

constexpr void __set__originalLaserIntensity(float_t  value) ;

constexpr float_t& __get__originalLaserIntensity() ;

constexpr float_t const& __get__originalLaserIntensity() const;

constexpr void __set__tubeLights(::ArrayW<::GlobalNamespace::TubeBloomPrePassLight*,::Array<::GlobalNamespace::TubeBloomPrePassLight*>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::TubeBloomPrePassLight*,::Array<::GlobalNamespace::TubeBloomPrePassLight*>*>& __get__tubeLights() ;

constexpr ::ArrayW<::GlobalNamespace::TubeBloomPrePassLight*,::Array<::GlobalNamespace::TubeBloomPrePassLight*>*> const& __get__tubeLights() const;

constexpr void __set__directionalLights(::ArrayW<::GlobalNamespace::DirectionalLight*,::Array<::GlobalNamespace::DirectionalLight*>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::DirectionalLight*,::Array<::GlobalNamespace::DirectionalLight*>*>& __get__directionalLights() ;

constexpr ::ArrayW<::GlobalNamespace::DirectionalLight*,::Array<::GlobalNamespace::DirectionalLight*>*> const& __get__directionalLights() const;

constexpr void __set__started(bool  value) ;

constexpr bool& __get__started() ;

constexpr bool const& __get__started() const;

constexpr void __set__finished(bool  value) ;

constexpr bool& __get__finished() ;

constexpr bool const& __get__finished() const;

constexpr void __set__firstFrameLightIntensity(float_t  value) ;

constexpr float_t& __get__firstFrameLightIntensity() ;

constexpr float_t const& __get__firstFrameLightIntensity() const;

constexpr void __set__firstFrameLaserIntensity(float_t  value) ;

constexpr float_t& __get__firstFrameLaserIntensity() ;

constexpr float_t const& __get__firstFrameLaserIntensity() const;

/// @brief Method ProcessFrame addr 0x2318354 size 0x370 virtual true final false
inline void ProcessFrame(::UnityEngine::Playables::Playable  playable, ::UnityEngine::Playables::FrameData  info, ::System::Object*  playerData) ;

/// @brief Method EnableObjects addr 0x23186c4 size 0xd4 virtual false final false
inline void EnableObjects(bool  on) ;

/// @brief Method OnPlayableDestroy addr 0x2318798 size 0xcc virtual true final false
inline void OnPlayableDestroy(::UnityEngine::Playables::Playable  playable) ;

static inline ::GlobalNamespace::TubeLightIntensityBehaviour* New_ctor() ;

/// @brief Method .ctor addr 0x2318864 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "TubeLightIntensityBehaviour", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TubeLightIntensityBehaviour(TubeLightIntensityBehaviour && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TubeLightIntensityBehaviour", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TubeLightIntensityBehaviour(TubeLightIntensityBehaviour const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TubeLightIntensityBehaviour()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TubeLightIntensityBehaviour, 0x58>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::TubeLightIntensityBehaviour);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TubeLightIntensityBehaviour*, "", "TubeLightIntensityBehaviour");
