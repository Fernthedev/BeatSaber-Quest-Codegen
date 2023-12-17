#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HighlightState)
namespace UnityEngine {
struct Color32;
}
namespace TMPro {
struct TMP_Offset;
}
namespace System {
class Object;
}
// Forward declare root types
namespace TMPro {
struct HighlightState;
}
// Write type traits
MARK_VAL_T(::TMPro::HighlightState);
// Type: TMPro::HighlightState
namespace TMPro {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12331))
// CS Name: ::TMPro::HighlightState
struct CORDL_TYPE HighlightState : public ::bs_hook::ValueTypeWrapper<0x14> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x14};

/// @brief Field color offset 0x0
 __declspec(property(get=__get_color, put=__set_color)) ::UnityEngine::Color32  color;

/// @brief Field padding offset 0x4
 __declspec(property(get=__get_padding, put=__set_padding)) ::TMPro::TMP_Offset  padding;

constexpr void __set_color(::UnityEngine::Color32  value) ;

constexpr ::UnityEngine::Color32& __get_color() ;

constexpr ::UnityEngine::Color32 const& __get_color() const;

constexpr void __set_padding(::TMPro::TMP_Offset  value) ;

constexpr ::TMPro::TMP_Offset& __get_padding() ;

constexpr ::TMPro::TMP_Offset const& __get_padding() const;

/// @brief Method .ctor addr 0x2c01c08 size 0x10 virtual false final false
inline void _ctor(::UnityEngine::Color32  color, ::TMPro::TMP_Offset  padding) ;

/// @brief Method op_Equality addr 0x2c01c18 size 0xc8 virtual false final false
static inline bool op_Equality(::TMPro::HighlightState  lhs, ::TMPro::HighlightState  rhs) ;

/// @brief Method op_Inequality addr 0x2c01ce0 size 0x48 virtual false final false
static inline bool op_Inequality(::TMPro::HighlightState  lhs, ::TMPro::HighlightState  rhs) ;

/// @brief Method GetHashCode addr 0x2c01d28 size 0x6c virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method Equals addr 0x2c01d94 size 0x80 virtual true final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals addr 0x2c01e14 size 0xa4 virtual false final false
inline bool Equals(::TMPro::HighlightState  other) ;

// Ctor Parameters [CppParam { name: "color", ty: "::UnityEngine::Color32", modifiers: "", def_value: None }, CppParam { name: "padding", ty: "::TMPro::TMP_Offset", modifiers: "", def_value: None }]
constexpr HighlightState(::UnityEngine::Color32  color, ::TMPro::TMP_Offset  padding) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit HighlightState(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x14>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 HighlightState()  = default;


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::TMPro::HighlightState, 0x14>, "Size mismatch!");

} // namespace end def TMPro
DEFINE_IL2CPP_ARG_TYPE(::TMPro::HighlightState, "TMPro", "HighlightState");
