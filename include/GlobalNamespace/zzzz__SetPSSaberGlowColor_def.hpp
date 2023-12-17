#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(SetPSSaberGlowColor)
namespace UnityEngine {
class ParticleSystem;
}
namespace GlobalNamespace {
class SaberTypeObject;
}
namespace GlobalNamespace {
class ColorManager;
}
// Forward declare root types
namespace GlobalNamespace {
class SetPSSaberGlowColor;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SetPSSaberGlowColor);
// Type: ::SetPSSaberGlowColor
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5303))
// CS Name: ::SetPSSaberGlowColor*
class CORDL_TYPE SetPSSaberGlowColor : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _saber offset 0x18
 __declspec(property(get=__get__saber, put=__set__saber)) ::GlobalNamespace::SaberTypeObject*  _saber;

/// @brief Field _colorManager offset 0x20
 __declspec(property(get=__get__colorManager, put=__set__colorManager)) ::GlobalNamespace::ColorManager*  _colorManager;

/// @brief Field _particleSystem offset 0x28
 __declspec(property(get=__get__particleSystem, put=__set__particleSystem)) ::UnityEngine::ParticleSystem*  _particleSystem;

constexpr void __set__saber(::GlobalNamespace::SaberTypeObject*  value) ;

constexpr ::GlobalNamespace::SaberTypeObject* __get__saber() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SaberTypeObject*> __get__saber() const;

constexpr void __set__colorManager(::GlobalNamespace::ColorManager*  value) ;

constexpr ::GlobalNamespace::ColorManager* __get__colorManager() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorManager*> __get__colorManager() const;

constexpr void __set__particleSystem(::UnityEngine::ParticleSystem*  value) ;

constexpr ::UnityEngine::ParticleSystem* __get__particleSystem() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::ParticleSystem*> __get__particleSystem() const;

/// @brief Method Start addr 0x22647f0 size 0x84 virtual false final false
inline void Start() ;

static inline ::GlobalNamespace::SetPSSaberGlowColor* New_ctor() ;

/// @brief Method .ctor addr 0x2264874 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "SetPSSaberGlowColor", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SetPSSaberGlowColor(SetPSSaberGlowColor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SetPSSaberGlowColor", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SetPSSaberGlowColor(SetPSSaberGlowColor const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SetPSSaberGlowColor()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SetPSSaberGlowColor, 0x30>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SetPSSaberGlowColor);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SetPSSaberGlowColor*, "", "SetPSSaberGlowColor");
