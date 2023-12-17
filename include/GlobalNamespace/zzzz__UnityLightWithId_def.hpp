#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__LightWithIdMonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(UnityLightWithId)
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Light;
}
// Forward declare root types
namespace GlobalNamespace {
class UnityLightWithId;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::UnityLightWithId);
// Type: ::UnityLightWithId
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14542))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14559))
// CS Name: ::UnityLightWithId*
class CORDL_TYPE UnityLightWithId : public ::GlobalNamespace::LightWithIdMonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x40};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x40 - sizeof(::GlobalNamespace::LightWithIdMonoBehaviour)]{};

/// @brief Field _light offset 0x30
 __declspec(property(get=__get__light, put=__set__light)) ::UnityEngine::Light*  _light;

/// @brief Field _intensity offset 0x38
 __declspec(property(get=__get__intensity, put=__set__intensity)) float_t  _intensity;

/// @brief Field _minAlpha offset 0x3c
 __declspec(property(get=__get__minAlpha, put=__set__minAlpha)) float_t  _minAlpha;

 __declspec(property(get=get_color)) ::UnityEngine::Color  color;

constexpr void __set__light(::UnityEngine::Light*  value) ;

constexpr ::UnityEngine::Light* __get__light() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Light*> __get__light() const;

constexpr void __set__intensity(float_t  value) ;

constexpr float_t& __get__intensity() ;

constexpr float_t const& __get__intensity() const;

constexpr void __set__minAlpha(float_t  value) ;

constexpr float_t& __get__minAlpha() ;

constexpr float_t const& __get__minAlpha() const;

/// @brief Method get_color addr 0x21140b0 size 0x1c virtual false final false
inline ::UnityEngine::Color get_color() ;

/// @brief Method ColorWasSet addr 0x21140cc size 0x4c virtual true final false
inline void ColorWasSet(::UnityEngine::Color  color) ;

static inline ::GlobalNamespace::UnityLightWithId* New_ctor() ;

/// @brief Method .ctor addr 0x2114118 size 0x10 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "UnityLightWithId", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UnityLightWithId(UnityLightWithId && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnityLightWithId", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnityLightWithId(UnityLightWithId const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 UnityLightWithId()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::UnityLightWithId, 0x40>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::UnityLightWithId);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::UnityLightWithId*, "", "UnityLightWithId");
