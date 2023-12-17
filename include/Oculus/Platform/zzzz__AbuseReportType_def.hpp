#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AbuseReportType)
// Forward declare root types
namespace Oculus::Platform {
struct AbuseReportType;
}
// Write type traits
MARK_VAL_T(::Oculus::Platform::AbuseReportType);
// Type: Oculus.Platform::AbuseReportType
namespace Oculus::Platform {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13222))
// CS Name: ::Oculus.Platform::AbuseReportType
struct CORDL_TYPE AbuseReportType : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __AbuseReportType_Unwrapped
enum struct __AbuseReportType_Unwrapped : int32_t {
__E_Unknown = static_cast<int32_t>(0x0),
__E_Object = static_cast<int32_t>(0x1),
__E_User = static_cast<int32_t>(0x2),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Unknown value: static_cast<int32_t>(0x0)
static ::Oculus::Platform::AbuseReportType const Unknown;

/// @brief Field Object value: static_cast<int32_t>(0x1)
static ::Oculus::Platform::AbuseReportType const Object;

/// @brief Field User value: static_cast<int32_t>(0x2)
static ::Oculus::Platform::AbuseReportType const User;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __AbuseReportType_Unwrapped () const noexcept {
return std::bit_cast<__AbuseReportType_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AbuseReportType(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit AbuseReportType(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 AbuseReportType()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::AbuseReportType, 0x4>, "Size mismatch!");

} // namespace end def Oculus::Platform
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::AbuseReportType, "Oculus.Platform", "AbuseReportType");
