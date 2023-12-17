#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ReflectionPermissionFlag)
// Forward declare root types
namespace System::Security::Permissions {
struct ReflectionPermissionFlag;
}
// Write type traits
MARK_VAL_T(::System::Security::Permissions::ReflectionPermissionFlag);
// Type: System.Security.Permissions::ReflectionPermissionFlag
namespace System::Security::Permissions {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2903))
// CS Name: ::System.Security.Permissions::ReflectionPermissionFlag
struct CORDL_TYPE ReflectionPermissionFlag : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ReflectionPermissionFlag_Unwrapped
enum struct __ReflectionPermissionFlag_Unwrapped : int32_t {
__E_AllFlags = static_cast<int32_t>(0x7),
__E_MemberAccess = static_cast<int32_t>(0x2),
__E_NoFlags = static_cast<int32_t>(0x0),
__E_ReflectionEmit = static_cast<int32_t>(0x4),
__E_RestrictedMemberAccess = static_cast<int32_t>(0x8),
__E_TypeInformation = static_cast<int32_t>(0x1),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field AllFlags value: static_cast<int32_t>(0x7)
static ::System::Security::Permissions::ReflectionPermissionFlag const AllFlags;

/// @brief Field MemberAccess value: static_cast<int32_t>(0x2)
static ::System::Security::Permissions::ReflectionPermissionFlag const MemberAccess;

/// @brief Field NoFlags value: static_cast<int32_t>(0x0)
static ::System::Security::Permissions::ReflectionPermissionFlag const NoFlags;

/// @brief Field ReflectionEmit value: static_cast<int32_t>(0x4)
static ::System::Security::Permissions::ReflectionPermissionFlag const ReflectionEmit;

/// @brief Field RestrictedMemberAccess value: static_cast<int32_t>(0x8)
static ::System::Security::Permissions::ReflectionPermissionFlag const RestrictedMemberAccess;

/// @brief Field TypeInformation value: static_cast<int32_t>(0x1)
static ::System::Security::Permissions::ReflectionPermissionFlag const TypeInformation;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __ReflectionPermissionFlag_Unwrapped () const noexcept {
return std::bit_cast<__ReflectionPermissionFlag_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ReflectionPermissionFlag(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ReflectionPermissionFlag(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ReflectionPermissionFlag()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Permissions::ReflectionPermissionFlag, 0x4>, "Size mismatch!");

} // namespace end def System::Security::Permissions
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Permissions::ReflectionPermissionFlag, "System.Security.Permissions", "ReflectionPermissionFlag");
