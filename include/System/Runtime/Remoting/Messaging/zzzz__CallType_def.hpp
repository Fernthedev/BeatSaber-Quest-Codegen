#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CallType)
// Forward declare root types
namespace System::Runtime::Remoting::Messaging {
struct CallType;
}
// Write type traits
MARK_VAL_T(::System::Runtime::Remoting::Messaging::CallType);
// Type: System.Runtime.Remoting.Messaging::CallType
namespace System::Runtime::Remoting::Messaging {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3181))
// CS Name: ::System.Runtime.Remoting.Messaging::CallType
struct CORDL_TYPE CallType : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __CallType_Unwrapped
enum struct __CallType_Unwrapped : int32_t {
__E_Sync = static_cast<int32_t>(0x0),
__E_BeginInvoke = static_cast<int32_t>(0x1),
__E_EndInvoke = static_cast<int32_t>(0x2),
__E_OneWay = static_cast<int32_t>(0x3),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Sync value: static_cast<int32_t>(0x0)
static ::System::Runtime::Remoting::Messaging::CallType const Sync;

/// @brief Field BeginInvoke value: static_cast<int32_t>(0x1)
static ::System::Runtime::Remoting::Messaging::CallType const BeginInvoke;

/// @brief Field EndInvoke value: static_cast<int32_t>(0x2)
static ::System::Runtime::Remoting::Messaging::CallType const EndInvoke;

/// @brief Field OneWay value: static_cast<int32_t>(0x3)
static ::System::Runtime::Remoting::Messaging::CallType const OneWay;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __CallType_Unwrapped () const noexcept {
return std::bit_cast<__CallType_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr CallType(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit CallType(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 CallType()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Remoting::Messaging::CallType, 0x4>, "Size mismatch!");

} // namespace end def System::Runtime::Remoting::Messaging
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Messaging::CallType, "System.Runtime.Remoting.Messaging", "CallType");
