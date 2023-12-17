#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(LeaseState)
// Forward declare root types
namespace System::Runtime::Remoting::Lifetime {
struct LeaseState;
}
// Write type traits
MARK_VAL_T(::System::Runtime::Remoting::Lifetime::LeaseState);
// Type: System.Runtime.Remoting.Lifetime::LeaseState
namespace System::Runtime::Remoting::Lifetime {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3096))
// CS Name: ::System.Runtime.Remoting.Lifetime::LeaseState
struct CORDL_TYPE LeaseState : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __LeaseState_Unwrapped
enum struct __LeaseState_Unwrapped : int32_t {
__E_Null = static_cast<int32_t>(0x0),
__E_Initial = static_cast<int32_t>(0x1),
__E_Active = static_cast<int32_t>(0x2),
__E_Renewing = static_cast<int32_t>(0x3),
__E_Expired = static_cast<int32_t>(0x4),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Null value: static_cast<int32_t>(0x0)
static ::System::Runtime::Remoting::Lifetime::LeaseState const Null;

/// @brief Field Initial value: static_cast<int32_t>(0x1)
static ::System::Runtime::Remoting::Lifetime::LeaseState const Initial;

/// @brief Field Active value: static_cast<int32_t>(0x2)
static ::System::Runtime::Remoting::Lifetime::LeaseState const Active;

/// @brief Field Renewing value: static_cast<int32_t>(0x3)
static ::System::Runtime::Remoting::Lifetime::LeaseState const Renewing;

/// @brief Field Expired value: static_cast<int32_t>(0x4)
static ::System::Runtime::Remoting::Lifetime::LeaseState const Expired;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __LeaseState_Unwrapped () const noexcept {
return std::bit_cast<__LeaseState_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr LeaseState(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit LeaseState(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 LeaseState()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::Lifetime::LeaseState, 0x4>, "Size mismatch!");

} // namespace end def System::Runtime::Remoting::Lifetime
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Lifetime::LeaseState, "System.Runtime.Remoting.Lifetime", "LeaseState");
