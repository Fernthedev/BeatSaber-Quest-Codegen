#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CIELabColor)
namespace UnityEngine {
struct Color;
}
namespace UnityEngine::ProBuilder {
class XYZColor;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
class CIELabColor;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::ProBuilder::CIELabColor);
// Type: UnityEngine.ProBuilder::CIELabColor
namespace UnityEngine::ProBuilder {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12115))
// CS Name: ::UnityEngine.ProBuilder::CIELabColor*
class CORDL_TYPE CIELabColor : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field L offset 0x10
 __declspec(property(get=__get_L, put=__set_L)) float_t  L;

/// @brief Field a offset 0x14
 __declspec(property(get=__get_a, put=__set_a)) float_t  a;

/// @brief Field b offset 0x18
 __declspec(property(get=__get_b, put=__set_b)) float_t  b;

constexpr void __set_L(float_t  value) ;

constexpr float_t& __get_L() ;

constexpr float_t const& __get_L() const;

constexpr void __set_a(float_t  value) ;

constexpr float_t& __get_a() ;

constexpr float_t const& __get_a() const;

constexpr void __set_b(float_t  value) ;

constexpr float_t& __get_b() ;

constexpr float_t const& __get_b() const;

static inline ::UnityEngine::ProBuilder::CIELabColor* New_ctor(float_t  L, float_t  a, float_t  b) ;

/// @brief Method .ctor addr 0x2b3da4c size 0x3c virtual false final false
inline void _ctor(float_t  L, float_t  a, float_t  b) ;

/// @brief Method FromXYZ addr 0x2b3da88 size 0x54 virtual false final false
static inline ::UnityEngine::ProBuilder::CIELabColor* FromXYZ(::UnityEngine::ProBuilder::XYZColor*  xyz) ;

/// @brief Method FromRGB addr 0x2b3dc40 size 0x8c virtual false final false
static inline ::UnityEngine::ProBuilder::CIELabColor* FromRGB(::UnityEngine::Color  col) ;

/// @brief Method ToString addr 0x2b3dccc size 0xc4 virtual true final false
inline ::StringW ToString() ;

// Ctor Parameters [CppParam { name: "", ty: "CIELabColor", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CIELabColor(CIELabColor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CIELabColor", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CIELabColor(CIELabColor const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 CIELabColor()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::ProBuilder::CIELabColor, 0x20>, "Size mismatch!");

} // namespace end def UnityEngine::ProBuilder
NEED_NO_BOX(::UnityEngine::ProBuilder::CIELabColor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::CIELabColor*, "UnityEngine.ProBuilder", "CIELabColor");
