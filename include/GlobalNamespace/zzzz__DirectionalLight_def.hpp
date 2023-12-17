#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(DirectionalLight)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class DirectionalLight;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::DirectionalLight);
// Type: ::DirectionalLight
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14496))
// CS Name: ::DirectionalLight*
class CORDL_TYPE DirectionalLight : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field kMaxLights offset 0x0
static constexpr int32_t  kMaxLights{static_cast<int32_t>(0x5)};

/// @brief Field color offset 0x18
 __declspec(property(get=__get_color, put=__set_color)) ::UnityEngine::Color  color;

/// @brief Field intensity offset 0x28
 __declspec(property(get=__get_intensity, put=__set_intensity)) float_t  intensity;

/// @brief Field radius offset 0x2c
 __declspec(property(get=__get_radius, put=__set_radius)) float_t  radius;

constexpr void __set_color(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get_color() ;

constexpr ::UnityEngine::Color const& __get_color() const;

constexpr void __set_intensity(float_t  value) ;

constexpr float_t& __get_intensity() ;

constexpr float_t const& __get_intensity() const;

constexpr void __set_radius(float_t  value) ;

constexpr float_t& __get_radius() ;

constexpr float_t const& __get_radius() const;

static inline void setStaticF__lights(::System::Collections::Generic::List_1<::GlobalNamespace::DirectionalLight*>*  value) ;

static inline ::System::Collections::Generic::List_1<::GlobalNamespace::DirectionalLight*>* getStaticF__lights() ;

static inline void setStaticF__mainLight(::GlobalNamespace::DirectionalLight*  value) ;

static inline ::GlobalNamespace::DirectionalLight* getStaticF__mainLight() ;

/// @brief Method get_lights addr 0x210b294 size 0x58 virtual false final false
static inline ::System::Collections::Generic::List_1<::GlobalNamespace::DirectionalLight*>* get_lights() ;

/// @brief Method OnEnable addr 0x210b2ec size 0xd0 virtual false final false
inline void OnEnable() ;

/// @brief Method OnDisable addr 0x210b3bc size 0x80 virtual false final false
inline void OnDisable() ;

static inline ::GlobalNamespace::DirectionalLight* New_ctor() ;

/// @brief Method .ctor addr 0x210b43c size 0x10 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "DirectionalLight", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DirectionalLight(DirectionalLight && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DirectionalLight", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DirectionalLight(DirectionalLight const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 DirectionalLight()  = default;
public:


// Fields

// Static field _lights

// Static field _mainLight


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DirectionalLight, 0x30>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::DirectionalLight);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DirectionalLight*, "", "DirectionalLight");
