#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TerrainMapStatusCode)
// Forward declare root types
namespace UnityEngine::TerrainUtils {
struct TerrainMapStatusCode;
}
// Write type traits
MARK_VAL_T(::UnityEngine::TerrainUtils::TerrainMapStatusCode);
// Type: UnityEngine.TerrainUtils::TerrainMapStatusCode
namespace UnityEngine::TerrainUtils {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15476))
// CS Name: ::UnityEngine.TerrainUtils::TerrainMapStatusCode
struct CORDL_TYPE TerrainMapStatusCode : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TerrainMapStatusCode_Unwrapped
enum struct __TerrainMapStatusCode_Unwrapped : int32_t {
__E_OK = static_cast<int32_t>(0x0),
__E_Overlapping = static_cast<int32_t>(0x1),
__E_SizeMismatch = static_cast<int32_t>(0x4),
__E_EdgeAlignmentMismatch = static_cast<int32_t>(0x8),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field OK value: static_cast<int32_t>(0x0)
static ::UnityEngine::TerrainUtils::TerrainMapStatusCode const OK;

/// @brief Field Overlapping value: static_cast<int32_t>(0x1)
static ::UnityEngine::TerrainUtils::TerrainMapStatusCode const Overlapping;

/// @brief Field SizeMismatch value: static_cast<int32_t>(0x4)
static ::UnityEngine::TerrainUtils::TerrainMapStatusCode const SizeMismatch;

/// @brief Field EdgeAlignmentMismatch value: static_cast<int32_t>(0x8)
static ::UnityEngine::TerrainUtils::TerrainMapStatusCode const EdgeAlignmentMismatch;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __TerrainMapStatusCode_Unwrapped () const noexcept {
return std::bit_cast<__TerrainMapStatusCode_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TerrainMapStatusCode(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit TerrainMapStatusCode(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 TerrainMapStatusCode()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::TerrainUtils::TerrainMapStatusCode, 0x4>, "Size mismatch!");

} // namespace end def UnityEngine::TerrainUtils
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TerrainUtils::TerrainMapStatusCode, "UnityEngine.TerrainUtils", "TerrainMapStatusCode");
