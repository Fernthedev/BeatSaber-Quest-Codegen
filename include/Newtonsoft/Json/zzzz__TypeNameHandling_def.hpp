#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TypeNameHandling)
// Forward declare root types
namespace Newtonsoft::Json {
struct TypeNameHandling;
}
// Write type traits
MARK_VAL_T(::Newtonsoft::Json::TypeNameHandling);
// Type: Newtonsoft.Json::TypeNameHandling
namespace Newtonsoft::Json {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11840))
// CS Name: ::Newtonsoft.Json::TypeNameHandling
struct CORDL_TYPE TypeNameHandling : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TypeNameHandling_Unwrapped
enum struct __TypeNameHandling_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Objects = static_cast<int32_t>(0x1),
__E_Arrays = static_cast<int32_t>(0x2),
__E_All = static_cast<int32_t>(0x3),
__E_Auto = static_cast<int32_t>(0x4),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field None value: static_cast<int32_t>(0x0)
static ::Newtonsoft::Json::TypeNameHandling const None;

/// @brief Field Objects value: static_cast<int32_t>(0x1)
static ::Newtonsoft::Json::TypeNameHandling const Objects;

/// @brief Field Arrays value: static_cast<int32_t>(0x2)
static ::Newtonsoft::Json::TypeNameHandling const Arrays;

/// @brief Field All value: static_cast<int32_t>(0x3)
static ::Newtonsoft::Json::TypeNameHandling const All;

/// @brief Field Auto value: static_cast<int32_t>(0x4)
static ::Newtonsoft::Json::TypeNameHandling const Auto;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __TypeNameHandling_Unwrapped () const noexcept {
return std::bit_cast<__TypeNameHandling_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TypeNameHandling(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit TypeNameHandling(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 TypeNameHandling()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::TypeNameHandling, 0x4>, "Size mismatch!");

} // namespace end def Newtonsoft::Json
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::TypeNameHandling, "Newtonsoft.Json", "TypeNameHandling");
