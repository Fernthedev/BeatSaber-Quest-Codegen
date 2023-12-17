#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Playables/zzzz__PlayableBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(BloomFogParamsBehaviour)
namespace UnityEngine::Playables {
struct FrameData;
}
namespace UnityEngine::Playables {
struct Playable;
}
namespace GlobalNamespace {
class BloomFogEnvironmentParams;
}
namespace System {
class Object;
}
namespace GlobalNamespace {
class BloomFogSO;
}
// Forward declare root types
namespace GlobalNamespace {
class BloomFogParamsBehaviour;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BloomFogParamsBehaviour);
// Type: ::BloomFogParamsBehaviour
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10425))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6007))
// CS Name: ::BloomFogParamsBehaviour*
class CORDL_TYPE BloomFogParamsBehaviour : public ::UnityEngine::Playables::PlayableBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::UnityEngine::Playables::PlayableBehaviour)]{};

/// @brief Field _bloomFogParams offset 0x10
 __declspec(property(get=__get__bloomFogParams, put=__set__bloomFogParams)) ::GlobalNamespace::BloomFogEnvironmentParams*  _bloomFogParams;

/// @brief Field _blend offset 0x18
 __declspec(property(get=__get__blend, put=__set__blend)) float_t  _blend;

/// @brief Field _bloomFog offset 0x20
 __declspec(property(get=__get__bloomFog, put=__set__bloomFog)) ::GlobalNamespace::BloomFogSO*  _bloomFog;

/// @brief Field _initialized offset 0x28
 __declspec(property(get=__get__initialized, put=__set__initialized)) bool  _initialized;

constexpr void __set__bloomFogParams(::GlobalNamespace::BloomFogEnvironmentParams*  value) ;

constexpr ::GlobalNamespace::BloomFogEnvironmentParams* __get__bloomFogParams() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BloomFogEnvironmentParams*> __get__bloomFogParams() const;

constexpr void __set__blend(float_t  value) ;

constexpr float_t& __get__blend() ;

constexpr float_t const& __get__blend() const;

constexpr void __set__bloomFog(::GlobalNamespace::BloomFogSO*  value) ;

constexpr ::GlobalNamespace::BloomFogSO* __get__bloomFog() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BloomFogSO*> __get__bloomFog() const;

constexpr void __set__initialized(bool  value) ;

constexpr bool& __get__initialized() ;

constexpr bool const& __get__initialized() const;

/// @brief Method ProcessFrame addr 0x2315668 size 0x158 virtual true final false
inline void ProcessFrame(::UnityEngine::Playables::Playable  playable, ::UnityEngine::Playables::FrameData  info, ::System::Object*  playerData) ;

/// @brief Method OnPlayableDestroy addr 0x23157c0 size 0x90 virtual true final false
inline void OnPlayableDestroy(::UnityEngine::Playables::Playable  playable) ;

static inline ::GlobalNamespace::BloomFogParamsBehaviour* New_ctor() ;

/// @brief Method .ctor addr 0x2315850 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "BloomFogParamsBehaviour", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BloomFogParamsBehaviour(BloomFogParamsBehaviour && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BloomFogParamsBehaviour", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BloomFogParamsBehaviour(BloomFogParamsBehaviour const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 BloomFogParamsBehaviour()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BloomFogParamsBehaviour, 0x30>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BloomFogParamsBehaviour);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BloomFogParamsBehaviour*, "", "BloomFogParamsBehaviour");
