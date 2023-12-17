#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PointLight)
namespace UnityEngine {
struct Color;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class PointLight;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PointLight);
// Type: ::PointLight
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14498))
// CS Name: ::PointLight*
class CORDL_TYPE PointLight : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::UnityEngine::MonoBehaviour)]{};

/// @brief Field kMaxLights offset 0x0
static constexpr int32_t  kMaxLights{static_cast<int32_t>(0x1)};

/// @brief Field color offset 0x18
 __declspec(property(get=__get_color, put=__set_color)) ::UnityEngine::Color  color;

/// @brief Field intensity offset 0x28
 __declspec(property(get=__get_intensity, put=__set_intensity)) float_t  intensity;

constexpr void __set_color(::UnityEngine::Color  value) ;

constexpr ::UnityEngine::Color& __get_color() ;

constexpr ::UnityEngine::Color const& __get_color() const;

constexpr void __set_intensity(float_t  value) ;

constexpr float_t& __get_intensity() ;

constexpr float_t const& __get_intensity() const;

static inline void setStaticF__lights(::System::Collections::Generic::List_1<::GlobalNamespace::PointLight*>*  value) ;

static inline ::System::Collections::Generic::List_1<::GlobalNamespace::PointLight*>* getStaticF__lights() ;

/// @brief Method get_lights addr 0x210bf24 size 0x58 virtual false final false
static inline ::System::Collections::Generic::List_1<::GlobalNamespace::PointLight*>* get_lights() ;

/// @brief Method OnEnable addr 0x210bf7c size 0xd0 virtual false final false
inline void OnEnable() ;

/// @brief Method OnDisable addr 0x210c04c size 0x80 virtual false final false
inline void OnDisable() ;

static inline ::GlobalNamespace::PointLight* New_ctor() ;

/// @brief Method .ctor addr 0x210c0cc size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "PointLight", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PointLight(PointLight && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PointLight", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PointLight(PointLight const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 PointLight()  = default;
public:


// Fields

// Static field _lights


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PointLight, 0x30>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PointLight);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PointLight*, "", "PointLight");
