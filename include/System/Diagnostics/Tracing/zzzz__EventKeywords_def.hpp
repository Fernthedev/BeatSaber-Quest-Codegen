#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EventKeywords)
// Forward declare root types
namespace System::Diagnostics::Tracing {
struct EventKeywords;
}
// Write type traits
MARK_VAL_T(::System::Diagnostics::Tracing::EventKeywords);
// Type: System.Diagnostics.Tracing::EventKeywords
namespace System::Diagnostics::Tracing {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3744))
// CS Name: ::System.Diagnostics.Tracing::EventKeywords
struct CORDL_TYPE EventKeywords : public ::bs_hook::EnumTypeWrapper<0x8> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int64_t;

/// @brief Nested struct __EventKeywords_Unwrapped
enum struct __EventKeywords_Unwrapped : int64_t {
__E_None = static_cast<int64_t>(0x0),
__E_All = static_cast<int64_t>(0xffffffffffffffff),
__E_MicrosoftTelemetry = static_cast<int64_t>(0x2000000000000),
__E_WdiContext = static_cast<int64_t>(0x2000000000000),
__E_WdiDiagnostic = static_cast<int64_t>(0x4000000000000),
__E_Sqm = static_cast<int64_t>(0x8000000000000),
__E_AuditFailure = static_cast<int64_t>(0x10000000000000),
__E_AuditSuccess = static_cast<int64_t>(0x20000000000000),
__E_CorrelationHint = static_cast<int64_t>(0x10000000000000),
__E_EventLogClassic = static_cast<int64_t>(0x80000000000000),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field None value: static_cast<int64_t>(0x0)
static ::System::Diagnostics::Tracing::EventKeywords const None;

/// @brief Field All value: static_cast<int64_t>(0xffffffffffffffff)
static ::System::Diagnostics::Tracing::EventKeywords const All;

/// @brief Field MicrosoftTelemetry value: static_cast<int64_t>(0x2000000000000)
static ::System::Diagnostics::Tracing::EventKeywords const MicrosoftTelemetry;

/// @brief Field WdiContext value: static_cast<int64_t>(0x2000000000000)
static ::System::Diagnostics::Tracing::EventKeywords const WdiContext;

/// @brief Field WdiDiagnostic value: static_cast<int64_t>(0x4000000000000)
static ::System::Diagnostics::Tracing::EventKeywords const WdiDiagnostic;

/// @brief Field Sqm value: static_cast<int64_t>(0x8000000000000)
static ::System::Diagnostics::Tracing::EventKeywords const Sqm;

/// @brief Field AuditFailure value: static_cast<int64_t>(0x10000000000000)
static ::System::Diagnostics::Tracing::EventKeywords const AuditFailure;

/// @brief Field AuditSuccess value: static_cast<int64_t>(0x20000000000000)
static ::System::Diagnostics::Tracing::EventKeywords const AuditSuccess;

/// @brief Field CorrelationHint value: static_cast<int64_t>(0x10000000000000)
static ::System::Diagnostics::Tracing::EventKeywords const CorrelationHint;

/// @brief Field EventLogClassic value: static_cast<int64_t>(0x80000000000000)
static ::System::Diagnostics::Tracing::EventKeywords const EventLogClassic;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int64_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __EventKeywords_Unwrapped () const noexcept {
return std::bit_cast<__EventKeywords_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x8>::instance);
}

constexpr void __set_value__(int64_t  value) ;

constexpr int64_t& __get_value__() ;

constexpr int64_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int64_t", modifiers: "", def_value: None }]
constexpr EventKeywords(int64_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit EventKeywords(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 EventKeywords()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Diagnostics::Tracing::EventKeywords, 0x8>, "Size mismatch!");

} // namespace end def System::Diagnostics::Tracing
DEFINE_IL2CPP_ARG_TYPE(::System::Diagnostics::Tracing::EventKeywords, "System.Diagnostics.Tracing", "EventKeywords");
