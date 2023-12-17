#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(SetBlocksBladeSaberGlowColor)
namespace GlobalNamespace {
class BlocksBlade;
}
namespace GlobalNamespace {
class SaberTypeObject;
}
namespace GlobalNamespace {
class ColorManager;
}
// Forward declare root types
namespace GlobalNamespace {
class SetBlocksBladeSaberGlowColor;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SetBlocksBladeSaberGlowColor);
// Type: ::SetBlocksBladeSaberGlowColor
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5302))
// CS Name: ::SetBlocksBladeSaberGlowColor*
class CORDL_TYPE SetBlocksBladeSaberGlowColor : public ::UnityEngine::MonoBehaviour {
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

/// @brief Field _blocksBlade offset 0x28
 __declspec(property(get=__get__blocksBlade, put=__set__blocksBlade)) ::GlobalNamespace::BlocksBlade*  _blocksBlade;

constexpr void __set__saber(::GlobalNamespace::SaberTypeObject*  value) ;

constexpr ::GlobalNamespace::SaberTypeObject* __get__saber() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SaberTypeObject*> __get__saber() const;

constexpr void __set__colorManager(::GlobalNamespace::ColorManager*  value) ;

constexpr ::GlobalNamespace::ColorManager* __get__colorManager() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorManager*> __get__colorManager() const;

constexpr void __set__blocksBlade(::GlobalNamespace::BlocksBlade*  value) ;

constexpr ::GlobalNamespace::BlocksBlade* __get__blocksBlade() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BlocksBlade*> __get__blocksBlade() const;

/// @brief Method Start addr 0x22647a8 size 0x40 virtual false final false
inline void Start() ;

static inline ::GlobalNamespace::SetBlocksBladeSaberGlowColor* New_ctor() ;

/// @brief Method .ctor addr 0x22647e8 size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "SetBlocksBladeSaberGlowColor", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SetBlocksBladeSaberGlowColor(SetBlocksBladeSaberGlowColor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SetBlocksBladeSaberGlowColor", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SetBlocksBladeSaberGlowColor(SetBlocksBladeSaberGlowColor const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SetBlocksBladeSaberGlowColor()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SetBlocksBladeSaberGlowColor, 0x30>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SetBlocksBladeSaberGlowColor);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SetBlocksBladeSaberGlowColor*, "", "SetBlocksBladeSaberGlowColor");
