#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(SetSaberFakeGlowColor)
namespace UnityEngine {
struct Color;
}
namespace GlobalNamespace {
struct SaberType;
}
namespace GlobalNamespace {
class ColorManager;
}
namespace GlobalNamespace {
class Parametric3SliceSpriteController;
}
namespace GlobalNamespace {
class SaberTypeObject;
}
// Forward declare root types
namespace GlobalNamespace {
class SetSaberFakeGlowColor;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SetSaberFakeGlowColor);
// Type: ::SetSaberFakeGlowColor
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5306))
// CS Name: ::SetSaberFakeGlowColor*
class CORDL_TYPE SetSaberFakeGlowColor : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x48};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x48 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field _tintColor offset 0x18
 __declspec(property(get=__get__tintColor, put=__set__tintColor)) ::UnityEngine::Color  _tintColor;

/// @brief Field _saberTypeObject offset 0x28
 __declspec(property(get=__get__saberTypeObject, put=__set__saberTypeObject)) ::GlobalNamespace::SaberTypeObject*  _saberTypeObject;

/// @brief Field _parametric3SliceSprite offset 0x30
 __declspec(property(get=__get__parametric3SliceSprite, put=__set__parametric3SliceSprite)) ::GlobalNamespace::Parametric3SliceSpriteController*  _parametric3SliceSprite;

/// @brief Field _colorManager offset 0x38
 __declspec(property(get=__get__colorManager, put=__set__colorManager)) ::GlobalNamespace::ColorManager*  _colorManager;

/// @brief Field _saberType offset 0x40
 __declspec(property(get=__get__saberType, put=__set__saberType)) ::GlobalNamespace::SaberType  _saberType;

 __declspec(property(put=set_saberType)) ::GlobalNamespace::SaberType  saberType;

constexpr void __set__tintColor(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get__tintColor() ;

constexpr ::UnityEngine::Color const& __get__tintColor() const;

constexpr void __set__saberTypeObject(::GlobalNamespace::SaberTypeObject*  value) ;

constexpr ::GlobalNamespace::SaberTypeObject* __get__saberTypeObject() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::SaberTypeObject*> __get__saberTypeObject() const;

constexpr void __set__parametric3SliceSprite(::GlobalNamespace::Parametric3SliceSpriteController*  value) ;

constexpr ::GlobalNamespace::Parametric3SliceSpriteController* __get__parametric3SliceSprite() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::Parametric3SliceSpriteController*> __get__parametric3SliceSprite() const;

constexpr void __set__colorManager(::GlobalNamespace::ColorManager*  value) ;

constexpr ::GlobalNamespace::ColorManager* __get__colorManager() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::ColorManager*> __get__colorManager() const;

constexpr void __set__saberType(::GlobalNamespace::SaberType  value) ;

constexpr ::GlobalNamespace::SaberType& __get__saberType() ;

constexpr ::GlobalNamespace::SaberType const& __get__saberType() const;

/// @brief Method set_saberType addr 0x22644b0 size 0xc virtual false final false
inline void set_saberType(::GlobalNamespace::SaberType  value) ;

/// @brief Method Start addr 0x22649ec size 0x80 virtual false final false
inline void Start() ;

/// @brief Method SetColors addr 0x2264990 size 0x5c virtual false final false
inline void SetColors() ;

static inline ::GlobalNamespace::SetSaberFakeGlowColor* New_ctor() ;

/// @brief Method .ctor addr 0x2264a6c size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "SetSaberFakeGlowColor", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SetSaberFakeGlowColor(SetSaberFakeGlowColor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SetSaberFakeGlowColor", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SetSaberFakeGlowColor(SetSaberFakeGlowColor const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SetSaberFakeGlowColor()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SetSaberFakeGlowColor, 0x48>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SetSaberFakeGlowColor);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SetSaberFakeGlowColor*, "", "SetSaberFakeGlowColor");
