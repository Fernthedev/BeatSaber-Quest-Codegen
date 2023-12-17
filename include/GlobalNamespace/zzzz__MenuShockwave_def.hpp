#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(MenuShockwave)
namespace UnityEngine {
struct __ParticleSystem__EmitParams;
}
namespace UnityEngine {
class ParticleSystem;
}
namespace GlobalNamespace {
class Signal;
}
namespace VRUIControls {
class VRPointer;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class MenuShockwave;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MenuShockwave);
// Type: ::MenuShockwave
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5478))
// CS Name: ::MenuShockwave*
class CORDL_TYPE MenuShockwave : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0xc0};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0xc0 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _shockwavePS offset 0x18
 __declspec(property(get=__get__shockwavePS, put=__set__shockwavePS)) ::UnityEngine::ParticleSystem*  _shockwavePS;

/// @brief Field _vrPointer offset 0x20
 __declspec(property(get=__get__vrPointer, put=__set__vrPointer)) ::VRUIControls::VRPointer*  _vrPointer;

/// @brief Field _buttonClickEvents offset 0x28
 __declspec(property(get=__get__buttonClickEvents, put=__set__buttonClickEvents)) ::ArrayW<::GlobalNamespace::Signal*,::Array<::GlobalNamespace::Signal*>*>  _buttonClickEvents;

/// @brief Field _shockwavePSEmitParams offset 0x30
 __declspec(property(get=__get__shockwavePSEmitParams, put=__set__shockwavePSEmitParams)) ::UnityEngine::__ParticleSystem__EmitParams  _shockwavePSEmitParams;

constexpr void __set__shockwavePS(::UnityEngine::ParticleSystem*  value) ;

constexpr ::UnityEngine::ParticleSystem* __get__shockwavePS() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ParticleSystem*> __get__shockwavePS() const;

constexpr void __set__vrPointer(::VRUIControls::VRPointer*  value) ;

constexpr ::VRUIControls::VRPointer* __get__vrPointer() ;

constexpr ::cordl_internals::to_const_pointer<::VRUIControls::VRPointer*> __get__vrPointer() const;

constexpr void __set__buttonClickEvents(::ArrayW<::GlobalNamespace::Signal*,::Array<::GlobalNamespace::Signal*>*>  value) ;

constexpr ::ArrayW<::GlobalNamespace::Signal*,::Array<::GlobalNamespace::Signal*>*>& __get__buttonClickEvents() ;

constexpr ::ArrayW<::GlobalNamespace::Signal*,::Array<::GlobalNamespace::Signal*>*> const& __get__buttonClickEvents() const;

constexpr void __set__shockwavePSEmitParams(::UnityEngine::__ParticleSystem__EmitParams  value) ;

constexpr ::UnityEngine::__ParticleSystem__EmitParams& __get__shockwavePSEmitParams() ;

constexpr ::UnityEngine::__ParticleSystem__EmitParams const& __get__shockwavePSEmitParams() const;

/// @brief Method Awake addr 0x2283630 size 0x10 virtual false final false
inline void Awake() ;

/// @brief Method OnEnable addr 0x2283640 size 0xd4 virtual false final false
inline void OnEnable() ;

/// @brief Method OnDisable addr 0x2283714 size 0xd4 virtual false final false
inline void OnDisable() ;

/// @brief Method HandleButtonClickEvent addr 0x22837e8 size 0x28 virtual false final false
inline void HandleButtonClickEvent() ;

/// @brief Method SpawnShockwave addr 0x2283810 size 0xa4 virtual false final false
inline void SpawnShockwave(::UnityEngine::Vector3  pos) ;

static inline ::GlobalNamespace::MenuShockwave* New_ctor() ;

/// @brief Method .ctor addr 0x22838b4 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "MenuShockwave", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MenuShockwave(MenuShockwave && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MenuShockwave", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MenuShockwave(MenuShockwave const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MenuShockwave()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MenuShockwave, 0xc0>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MenuShockwave);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MenuShockwave*, "", "MenuShockwave");
