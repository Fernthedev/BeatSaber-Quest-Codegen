#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TypeNameKind)
// Forward declare root types
namespace System {
struct TypeNameKind;
}
// Write type traits
MARK_VAL_T(::System::TypeNameKind);
// Type: System::TypeNameKind
namespace System {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2564))
// CS Name: ::System::TypeNameKind
struct CORDL_TYPE TypeNameKind : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TypeNameKind_Unwrapped
enum struct __TypeNameKind_Unwrapped : int32_t {
__E_Name = static_cast<int32_t>(0x0),
__E_ToString = static_cast<int32_t>(0x1),
__E_SerializationName = static_cast<int32_t>(0x2),
__E_FullName = static_cast<int32_t>(0x3),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Name value: static_cast<int32_t>(0x0)
static ::System::TypeNameKind const Name;

/// @brief Field ToString value: static_cast<int32_t>(0x1)
static ::System::TypeNameKind const ToString;

/// @brief Field SerializationName value: static_cast<int32_t>(0x2)
static ::System::TypeNameKind const SerializationName;

/// @brief Field FullName value: static_cast<int32_t>(0x3)
static ::System::TypeNameKind const FullName;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __TypeNameKind_Unwrapped () const noexcept {
return std::bit_cast<__TypeNameKind_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TypeNameKind(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit TypeNameKind(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 TypeNameKind()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::TypeNameKind, 0x4>, "Size mismatch!");

} // namespace end def System
DEFINE_IL2CPP_ARG_TYPE(::System::TypeNameKind, "System", "TypeNameKind");
