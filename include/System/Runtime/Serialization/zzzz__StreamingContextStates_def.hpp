#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(StreamingContextStates)
// Forward declare root types
namespace System::Runtime::Serialization {
struct StreamingContextStates;
}
// Write type traits
MARK_VAL_T(::System::Runtime::Serialization::StreamingContextStates);
// Type: System.Runtime.Serialization::StreamingContextStates
namespace System::Runtime::Serialization {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3236))
// CS Name: ::System.Runtime.Serialization::StreamingContextStates
struct CORDL_TYPE StreamingContextStates : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __StreamingContextStates_Unwrapped
enum struct __StreamingContextStates_Unwrapped : int32_t {
__E_CrossProcess = static_cast<int32_t>(0x1),
__E_CrossMachine = static_cast<int32_t>(0x2),
__E_File = static_cast<int32_t>(0x4),
__E_Persistence = static_cast<int32_t>(0x8),
__E_Remoting = static_cast<int32_t>(0x10),
__E_Other = static_cast<int32_t>(0x20),
__E_Clone = static_cast<int32_t>(0x40),
__E_CrossAppDomain = static_cast<int32_t>(0x80),
__E_All = static_cast<int32_t>(0xff),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field CrossProcess value: static_cast<int32_t>(0x1)
static ::System::Runtime::Serialization::StreamingContextStates const CrossProcess;

/// @brief Field CrossMachine value: static_cast<int32_t>(0x2)
static ::System::Runtime::Serialization::StreamingContextStates const CrossMachine;

/// @brief Field File value: static_cast<int32_t>(0x4)
static ::System::Runtime::Serialization::StreamingContextStates const File;

/// @brief Field Persistence value: static_cast<int32_t>(0x8)
static ::System::Runtime::Serialization::StreamingContextStates const Persistence;

/// @brief Field Remoting value: static_cast<int32_t>(0x10)
static ::System::Runtime::Serialization::StreamingContextStates const Remoting;

/// @brief Field Other value: static_cast<int32_t>(0x20)
static ::System::Runtime::Serialization::StreamingContextStates const Other;

/// @brief Field Clone value: static_cast<int32_t>(0x40)
static ::System::Runtime::Serialization::StreamingContextStates const Clone;

/// @brief Field CrossAppDomain value: static_cast<int32_t>(0x80)
static ::System::Runtime::Serialization::StreamingContextStates const CrossAppDomain;

/// @brief Field All value: static_cast<int32_t>(0xff)
static ::System::Runtime::Serialization::StreamingContextStates const All;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __StreamingContextStates_Unwrapped () const noexcept {
return std::bit_cast<__StreamingContextStates_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr StreamingContextStates(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit StreamingContextStates(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 StreamingContextStates()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Runtime::Serialization::StreamingContextStates, 0x4>, "Size mismatch!");

} // namespace end def System::Runtime::Serialization
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::StreamingContextStates, "System.Runtime.Serialization", "StreamingContextStates");
