#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CloseExState)
// Forward declare root types
namespace System::Net {
struct CloseExState;
}
// Write type traits
MARK_VAL_T(::System::Net::CloseExState);
// Type: System.Net::CloseExState
namespace System::Net {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9104))
// CS Name: ::System.Net::CloseExState
struct CORDL_TYPE CloseExState : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __CloseExState_Unwrapped
enum struct __CloseExState_Unwrapped : int32_t {
__E_Normal = static_cast<int32_t>(0x0),
__E_Abort = static_cast<int32_t>(0x1),
__E_Silent = static_cast<int32_t>(0x2),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Normal value: static_cast<int32_t>(0x0)
static ::System::Net::CloseExState const Normal;

/// @brief Field Abort value: static_cast<int32_t>(0x1)
static ::System::Net::CloseExState const Abort;

/// @brief Field Silent value: static_cast<int32_t>(0x2)
static ::System::Net::CloseExState const Silent;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __CloseExState_Unwrapped () const noexcept {
return std::bit_cast<__CloseExState_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr CloseExState(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit CloseExState(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 CloseExState()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::CloseExState, 0x4>, "Size mismatch!");

} // namespace end def System::Net
DEFINE_IL2CPP_ARG_TYPE(::System::Net::CloseExState, "System.Net", "CloseExState");
