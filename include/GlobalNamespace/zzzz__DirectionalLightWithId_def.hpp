#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__LightWithIdMonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(DirectionalLightWithId)
namespace GlobalNamespace {
class DirectionalLight;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class DirectionalLightWithId;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::DirectionalLightWithId);
// Type: ::DirectionalLightWithId
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14542))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14523))
// CS Name: ::DirectionalLightWithId*
class CORDL_TYPE DirectionalLightWithId : public ::GlobalNamespace::LightWithIdMonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x40};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x40 - sizeof(::GlobalNamespace::LightWithIdMonoBehaviour)]{};

/// @brief Field _light offset 0x30
 __declspec(property(get=__get__light, put=__set__light)) ::GlobalNamespace::DirectionalLight*  _light;

/// @brief Field _intensity offset 0x38
 __declspec(property(get=__get__intensity, put=__set__intensity)) float_t  _intensity;

/// @brief Field _minIntensity offset 0x3c
 __declspec(property(get=__get__minIntensity, put=__set__minIntensity)) float_t  _minIntensity;

constexpr void __set__light(::GlobalNamespace::DirectionalLight*  value) ;

constexpr ::GlobalNamespace::DirectionalLight* __get__light() ;

constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::DirectionalLight*> __get__light() const;

constexpr void __set__intensity(float_t  value) ;

constexpr float_t& __get__intensity() ;

constexpr float_t const& __get__intensity() const;

constexpr void __set__minIntensity(float_t  value) ;

constexpr float_t& __get__minIntensity() ;

constexpr float_t const& __get__minIntensity() const;

/// @brief Method ColorWasSet addr 0x210f098 size 0x34 virtual true final false
inline void ColorWasSet(::UnityEngine::Color  color) ;

static inline ::GlobalNamespace::DirectionalLightWithId* New_ctor() ;

/// @brief Method .ctor addr 0x210f0cc size 0x18 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "DirectionalLightWithId", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DirectionalLightWithId(DirectionalLightWithId && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DirectionalLightWithId", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DirectionalLightWithId(DirectionalLightWithId const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 DirectionalLightWithId()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DirectionalLightWithId, 0x40>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::DirectionalLightWithId);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DirectionalLightWithId*, "", "DirectionalLightWithId");
