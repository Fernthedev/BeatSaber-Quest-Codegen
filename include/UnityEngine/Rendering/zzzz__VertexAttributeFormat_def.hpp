#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VertexAttributeFormat)
// Forward declare root types
namespace UnityEngine::Rendering {
struct VertexAttributeFormat;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::VertexAttributeFormat);
// Type: UnityEngine.Rendering::VertexAttributeFormat
namespace UnityEngine::Rendering {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10330))
// CS Name: ::UnityEngine.Rendering::VertexAttributeFormat
struct CORDL_TYPE VertexAttributeFormat : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __VertexAttributeFormat_Unwrapped
enum struct __VertexAttributeFormat_Unwrapped : int32_t {
__E_Float32 = static_cast<int32_t>(0x0),
__E_Float16 = static_cast<int32_t>(0x1),
__E_UNorm8 = static_cast<int32_t>(0x2),
__E_SNorm8 = static_cast<int32_t>(0x3),
__E_UNorm16 = static_cast<int32_t>(0x4),
__E_SNorm16 = static_cast<int32_t>(0x5),
__E_UInt8 = static_cast<int32_t>(0x6),
__E_SInt8 = static_cast<int32_t>(0x7),
__E_UInt16 = static_cast<int32_t>(0x8),
__E_SInt16 = static_cast<int32_t>(0x9),
__E_UInt32 = static_cast<int32_t>(0xa),
__E_SInt32 = static_cast<int32_t>(0xb),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Float32 value: static_cast<int32_t>(0x0)
static ::UnityEngine::Rendering::VertexAttributeFormat const Float32;

/// @brief Field Float16 value: static_cast<int32_t>(0x1)
static ::UnityEngine::Rendering::VertexAttributeFormat const Float16;

/// @brief Field UNorm8 value: static_cast<int32_t>(0x2)
static ::UnityEngine::Rendering::VertexAttributeFormat const UNorm8;

/// @brief Field SNorm8 value: static_cast<int32_t>(0x3)
static ::UnityEngine::Rendering::VertexAttributeFormat const SNorm8;

/// @brief Field UNorm16 value: static_cast<int32_t>(0x4)
static ::UnityEngine::Rendering::VertexAttributeFormat const UNorm16;

/// @brief Field SNorm16 value: static_cast<int32_t>(0x5)
static ::UnityEngine::Rendering::VertexAttributeFormat const SNorm16;

/// @brief Field UInt8 value: static_cast<int32_t>(0x6)
static ::UnityEngine::Rendering::VertexAttributeFormat const UInt8;

/// @brief Field SInt8 value: static_cast<int32_t>(0x7)
static ::UnityEngine::Rendering::VertexAttributeFormat const SInt8;

/// @brief Field UInt16 value: static_cast<int32_t>(0x8)
static ::UnityEngine::Rendering::VertexAttributeFormat const UInt16;

/// @brief Field SInt16 value: static_cast<int32_t>(0x9)
static ::UnityEngine::Rendering::VertexAttributeFormat const SInt16;

/// @brief Field UInt32 value: static_cast<int32_t>(0xa)
static ::UnityEngine::Rendering::VertexAttributeFormat const UInt32;

/// @brief Field SInt32 value: static_cast<int32_t>(0xb)
static ::UnityEngine::Rendering::VertexAttributeFormat const SInt32;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __VertexAttributeFormat_Unwrapped () const noexcept {
return std::bit_cast<__VertexAttributeFormat_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr VertexAttributeFormat(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit VertexAttributeFormat(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 VertexAttributeFormat()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::VertexAttributeFormat, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::VertexAttributeFormat, "UnityEngine.Rendering", "VertexAttributeFormat");
