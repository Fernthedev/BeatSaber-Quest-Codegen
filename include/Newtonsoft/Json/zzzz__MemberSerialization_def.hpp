#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MemberSerialization)
// Forward declare root types
namespace Newtonsoft::Json {
struct MemberSerialization;
}
// Write type traits
MARK_VAL_T(::Newtonsoft::Json::MemberSerialization);
// Type: Newtonsoft.Json::MemberSerialization
namespace Newtonsoft::Json {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11821))
// CS Name: ::Newtonsoft.Json::MemberSerialization
struct CORDL_TYPE MemberSerialization : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __MemberSerialization_Unwrapped
enum struct __MemberSerialization_Unwrapped : int32_t {
__E_OptOut = static_cast<int32_t>(0x0),
__E_OptIn = static_cast<int32_t>(0x1),
__E_Fields = static_cast<int32_t>(0x2),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field OptOut value: static_cast<int32_t>(0x0)
static ::Newtonsoft::Json::MemberSerialization const OptOut;

/// @brief Field OptIn value: static_cast<int32_t>(0x1)
static ::Newtonsoft::Json::MemberSerialization const OptIn;

/// @brief Field Fields value: static_cast<int32_t>(0x2)
static ::Newtonsoft::Json::MemberSerialization const Fields;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __MemberSerialization_Unwrapped () const noexcept {
return std::bit_cast<__MemberSerialization_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr MemberSerialization(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit MemberSerialization(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 MemberSerialization()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Newtonsoft::Json::MemberSerialization, 0x4>, "Size mismatch!");

} // namespace end def Newtonsoft::Json
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::MemberSerialization, "Newtonsoft.Json", "MemberSerialization");
