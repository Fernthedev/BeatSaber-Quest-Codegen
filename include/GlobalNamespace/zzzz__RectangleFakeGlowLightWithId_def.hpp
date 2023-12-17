#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__LightWithIdMonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(RectangleFakeGlowLightWithId)
namespace GlobalNamespace {
class RectangleFakeGlow;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class RectangleFakeGlowLightWithId;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::RectangleFakeGlowLightWithId);
// Type: ::RectangleFakeGlowLightWithId
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14542))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4991))
// CS Name: ::RectangleFakeGlowLightWithId*
class CORDL_TYPE RectangleFakeGlowLightWithId : public ::GlobalNamespace::LightWithIdMonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x40};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x40 - sizeof(::GlobalNamespace::LightWithIdMonoBehaviour)]{};

/// @brief Field _minAlpha offset 0x2c
 __declspec(property(get=__get__minAlpha, put=__set__minAlpha)) float_t  _minAlpha;

/// @brief Field _alphaMul offset 0x30
 __declspec(property(get=__get__alphaMul, put=__set__alphaMul)) float_t  _alphaMul;

/// @brief Field _rectangleFakeGlow offset 0x38
 __declspec(property(get=__get__rectangleFakeGlow, put=__set__rectangleFakeGlow)) ::GlobalNamespace::RectangleFakeGlow*  _rectangleFakeGlow;

 __declspec(property(get=get_color)) ::UnityEngine::Color  color;

constexpr void __set__minAlpha(float_t  value) ;

constexpr float_t& __get__minAlpha() ;

constexpr float_t const& __get__minAlpha() const;

constexpr void __set__alphaMul(float_t  value) ;

constexpr float_t& __get__alphaMul() ;

constexpr float_t const& __get__alphaMul() const;

constexpr void __set__rectangleFakeGlow(::GlobalNamespace::RectangleFakeGlow*  value) ;

constexpr ::GlobalNamespace::RectangleFakeGlow* __get__rectangleFakeGlow() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::RectangleFakeGlow*> __get__rectangleFakeGlow() const;

/// @brief Method get_color addr 0x23b5220 size 0x20 virtual false final false
inline ::UnityEngine::Color get_color() ;

/// @brief Method ColorWasSet addr 0x23b5240 size 0x2c virtual true final false
inline void ColorWasSet(::UnityEngine::Color  color) ;

static inline ::GlobalNamespace::RectangleFakeGlowLightWithId* New_ctor() ;

/// @brief Method .ctor addr 0x23b526c size 0x10 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "RectangleFakeGlowLightWithId", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RectangleFakeGlowLightWithId(RectangleFakeGlowLightWithId && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RectangleFakeGlowLightWithId", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RectangleFakeGlowLightWithId(RectangleFakeGlowLightWithId const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 RectangleFakeGlowLightWithId()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::RectangleFakeGlowLightWithId, 0x40>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::RectangleFakeGlowLightWithId);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RectangleFakeGlowLightWithId*, "", "RectangleFakeGlowLightWithId");
