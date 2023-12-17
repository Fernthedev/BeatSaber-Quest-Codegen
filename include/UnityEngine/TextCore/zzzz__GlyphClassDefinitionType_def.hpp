#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GlyphClassDefinitionType)
// Forward declare root types
namespace UnityEngine::TextCore {
struct GlyphClassDefinitionType;
}
// Write type traits
MARK_VAL_T(::UnityEngine::TextCore::GlyphClassDefinitionType);
// Type: UnityEngine.TextCore::GlyphClassDefinitionType
namespace UnityEngine::TextCore {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15527))
// CS Name: ::UnityEngine.TextCore::GlyphClassDefinitionType
struct CORDL_TYPE GlyphClassDefinitionType : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GlyphClassDefinitionType_Unwrapped
enum struct __GlyphClassDefinitionType_Unwrapped : int32_t {
__E_Undefined = static_cast<int32_t>(0x0),
__E_Base = static_cast<int32_t>(0x1),
__E_Ligature = static_cast<int32_t>(0x2),
__E_Mark = static_cast<int32_t>(0x3),
__E_Component = static_cast<int32_t>(0x4),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Undefined value: static_cast<int32_t>(0x0)
static ::UnityEngine::TextCore::GlyphClassDefinitionType const Undefined;

/// @brief Field Base value: static_cast<int32_t>(0x1)
static ::UnityEngine::TextCore::GlyphClassDefinitionType const Base;

/// @brief Field Ligature value: static_cast<int32_t>(0x2)
static ::UnityEngine::TextCore::GlyphClassDefinitionType const Ligature;

/// @brief Field Mark value: static_cast<int32_t>(0x3)
static ::UnityEngine::TextCore::GlyphClassDefinitionType const Mark;

/// @brief Field Component value: static_cast<int32_t>(0x4)
static ::UnityEngine::TextCore::GlyphClassDefinitionType const Component;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __GlyphClassDefinitionType_Unwrapped () const noexcept {
return std::bit_cast<__GlyphClassDefinitionType_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GlyphClassDefinitionType(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit GlyphClassDefinitionType(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 GlyphClassDefinitionType()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::GlyphClassDefinitionType, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine::TextCore
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::GlyphClassDefinitionType, "UnityEngine.TextCore", "GlyphClassDefinitionType");
