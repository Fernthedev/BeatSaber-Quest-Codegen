#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TraceEventType)
// Forward declare root types
namespace System::Diagnostics {
struct TraceEventType;
}
// Write type traits
MARK_VAL_T(::System::Diagnostics::TraceEventType);
// Type: System.Diagnostics::TraceEventType
namespace System::Diagnostics {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8939))
// CS Name: ::System.Diagnostics::TraceEventType
struct CORDL_TYPE TraceEventType : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TraceEventType_Unwrapped
enum struct __TraceEventType_Unwrapped : int32_t {
__E_Critical = static_cast<int32_t>(0x1),
__E_Error = static_cast<int32_t>(0x2),
__E_Warning = static_cast<int32_t>(0x4),
__E_Information = static_cast<int32_t>(0x8),
__E_Verbose = static_cast<int32_t>(0x10),
__E_Start = static_cast<int32_t>(0x100),
__E_Stop = static_cast<int32_t>(0x200),
__E_Suspend = static_cast<int32_t>(0x400),
__E_Resume = static_cast<int32_t>(0x800),
__E_Transfer = static_cast<int32_t>(0x1000),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Critical value: static_cast<int32_t>(0x1)
static ::System::Diagnostics::TraceEventType const Critical;

/// @brief Field Error value: static_cast<int32_t>(0x2)
static ::System::Diagnostics::TraceEventType const Error;

/// @brief Field Warning value: static_cast<int32_t>(0x4)
static ::System::Diagnostics::TraceEventType const Warning;

/// @brief Field Information value: static_cast<int32_t>(0x8)
static ::System::Diagnostics::TraceEventType const Information;

/// @brief Field Verbose value: static_cast<int32_t>(0x10)
static ::System::Diagnostics::TraceEventType const Verbose;

/// @brief Field Start value: static_cast<int32_t>(0x100)
static ::System::Diagnostics::TraceEventType const Start;

/// @brief Field Stop value: static_cast<int32_t>(0x200)
static ::System::Diagnostics::TraceEventType const Stop;

/// @brief Field Suspend value: static_cast<int32_t>(0x400)
static ::System::Diagnostics::TraceEventType const Suspend;

/// @brief Field Resume value: static_cast<int32_t>(0x800)
static ::System::Diagnostics::TraceEventType const Resume;

/// @brief Field Transfer value: static_cast<int32_t>(0x1000)
static ::System::Diagnostics::TraceEventType const Transfer;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __TraceEventType_Unwrapped () const noexcept {
return std::bit_cast<__TraceEventType_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr TraceEventType(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit TraceEventType(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 TraceEventType()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Diagnostics::TraceEventType, 0x4>, "Size mismatch!");

} // namespace end def System::Diagnostics
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::TraceEventType, "System.Diagnostics", "TraceEventType");
