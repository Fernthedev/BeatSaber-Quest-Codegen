#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MergeArrayHandling)
// Forward declare root types
namespace Newtonsoft::Json::Linq {
struct MergeArrayHandling;
}
// Write type traits
MARK_VAL_T(::Newtonsoft::Json::Linq::MergeArrayHandling);
// Type: Newtonsoft.Json.Linq::MergeArrayHandling
namespace Newtonsoft::Json::Linq {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11972))
// CS Name: ::Newtonsoft.Json.Linq::MergeArrayHandling
struct CORDL_TYPE MergeArrayHandling : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __MergeArrayHandling_Unwrapped
enum struct __MergeArrayHandling_Unwrapped : int32_t {
__E_Concat = static_cast<int32_t>(0x0),
__E_Union = static_cast<int32_t>(0x1),
__E_Replace = static_cast<int32_t>(0x2),
__E_Merge = static_cast<int32_t>(0x3),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Concat value: static_cast<int32_t>(0x0)
static ::Newtonsoft::Json::Linq::MergeArrayHandling const Concat;

/// @brief Field Union value: static_cast<int32_t>(0x1)
static ::Newtonsoft::Json::Linq::MergeArrayHandling const Union;

/// @brief Field Replace value: static_cast<int32_t>(0x2)
static ::Newtonsoft::Json::Linq::MergeArrayHandling const Replace;

/// @brief Field Merge value: static_cast<int32_t>(0x3)
static ::Newtonsoft::Json::Linq::MergeArrayHandling const Merge;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __MergeArrayHandling_Unwrapped () const noexcept {
return std::bit_cast<__MergeArrayHandling_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr MergeArrayHandling(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit MergeArrayHandling(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 MergeArrayHandling()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::Linq::MergeArrayHandling, 0x4>, "Size mismatch!");

} // namespace end def Newtonsoft::Json::Linq
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::MergeArrayHandling, "Newtonsoft.Json.Linq", "MergeArrayHandling");
