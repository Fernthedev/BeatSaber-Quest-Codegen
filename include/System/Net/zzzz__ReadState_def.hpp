#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ReadState)
// Forward declare root types
namespace System::Net {
struct ReadState;
}
// Write type traits
MARK_VAL_T(::System::Net::ReadState);
// Type: System.Net::ReadState
namespace System::Net {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9214))
// CS Name: ::System.Net::ReadState
struct CORDL_TYPE ReadState : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ReadState_Unwrapped
enum struct __ReadState_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Status = static_cast<int32_t>(0x1),
__E_Headers = static_cast<int32_t>(0x2),
__E_Content = static_cast<int32_t>(0x3),
__E_Aborted = static_cast<int32_t>(0x4),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field None value: static_cast<int32_t>(0x0)
static ::System::Net::ReadState const None;

/// @brief Field Status value: static_cast<int32_t>(0x1)
static ::System::Net::ReadState const Status;

/// @brief Field Headers value: static_cast<int32_t>(0x2)
static ::System::Net::ReadState const Headers;

/// @brief Field Content value: static_cast<int32_t>(0x3)
static ::System::Net::ReadState const Content;

/// @brief Field Aborted value: static_cast<int32_t>(0x4)
static ::System::Net::ReadState const Aborted;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __ReadState_Unwrapped () const noexcept {
return std::bit_cast<__ReadState_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ReadState(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit ReadState(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 ReadState()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::ReadState, 0x4>, "Size mismatch!");

} // namespace end def System::Net
DEFINE_IL2CPP_ARG_TYPE(::System::Net::ReadState, "System.Net", "ReadState");
