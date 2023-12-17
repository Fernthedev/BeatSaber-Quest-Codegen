#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XsdDateTimeFlags)
// Forward declare root types
namespace System::Xml::Schema {
struct XsdDateTimeFlags;
}
// Write type traits
MARK_VAL_T(::System::Xml::Schema::XsdDateTimeFlags);
// Type: System.Xml.Schema::XsdDateTimeFlags
namespace System::Xml::Schema {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11759))
// CS Name: ::System.Xml.Schema::XsdDateTimeFlags
struct CORDL_TYPE XsdDateTimeFlags : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __XsdDateTimeFlags_Unwrapped
enum struct __XsdDateTimeFlags_Unwrapped : int32_t {
__E_DateTime = static_cast<int32_t>(0x1),
__E_Time = static_cast<int32_t>(0x2),
__E_Date = static_cast<int32_t>(0x4),
__E_GYearMonth = static_cast<int32_t>(0x8),
__E_GYear = static_cast<int32_t>(0x10),
__E_GMonthDay = static_cast<int32_t>(0x20),
__E_GDay = static_cast<int32_t>(0x40),
__E_GMonth = static_cast<int32_t>(0x80),
__E_XdrDateTimeNoTz = static_cast<int32_t>(0x100),
__E_XdrDateTime = static_cast<int32_t>(0x200),
__E_XdrTimeNoTz = static_cast<int32_t>(0x400),
__E_AllXsd = static_cast<int32_t>(0xff),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field DateTime value: static_cast<int32_t>(0x1)
static ::System::Xml::Schema::XsdDateTimeFlags const DateTime;

/// @brief Field Time value: static_cast<int32_t>(0x2)
static ::System::Xml::Schema::XsdDateTimeFlags const Time;

/// @brief Field Date value: static_cast<int32_t>(0x4)
static ::System::Xml::Schema::XsdDateTimeFlags const Date;

/// @brief Field GYearMonth value: static_cast<int32_t>(0x8)
static ::System::Xml::Schema::XsdDateTimeFlags const GYearMonth;

/// @brief Field GYear value: static_cast<int32_t>(0x10)
static ::System::Xml::Schema::XsdDateTimeFlags const GYear;

/// @brief Field GMonthDay value: static_cast<int32_t>(0x20)
static ::System::Xml::Schema::XsdDateTimeFlags const GMonthDay;

/// @brief Field GDay value: static_cast<int32_t>(0x40)
static ::System::Xml::Schema::XsdDateTimeFlags const GDay;

/// @brief Field GMonth value: static_cast<int32_t>(0x80)
static ::System::Xml::Schema::XsdDateTimeFlags const GMonth;

/// @brief Field XdrDateTimeNoTz value: static_cast<int32_t>(0x100)
static ::System::Xml::Schema::XsdDateTimeFlags const XdrDateTimeNoTz;

/// @brief Field XdrDateTime value: static_cast<int32_t>(0x200)
static ::System::Xml::Schema::XsdDateTimeFlags const XdrDateTime;

/// @brief Field XdrTimeNoTz value: static_cast<int32_t>(0x400)
static ::System::Xml::Schema::XsdDateTimeFlags const XdrTimeNoTz;

/// @brief Field AllXsd value: static_cast<int32_t>(0xff)
static ::System::Xml::Schema::XsdDateTimeFlags const AllXsd;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __XsdDateTimeFlags_Unwrapped () const noexcept {
return std::bit_cast<__XsdDateTimeFlags_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr XsdDateTimeFlags(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit XsdDateTimeFlags(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 XsdDateTimeFlags()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::XsdDateTimeFlags, 0x4>, "Size mismatch!");

} // namespace end def System::Xml::Schema
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::XsdDateTimeFlags, "System.Xml.Schema", "XsdDateTimeFlags");
