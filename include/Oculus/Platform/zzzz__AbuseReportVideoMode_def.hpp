#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AbuseReportVideoMode)
// Forward declare root types
namespace Oculus::Platform {
struct AbuseReportVideoMode;
}
// Write type traits
MARK_VAL_T(::Oculus::Platform::AbuseReportVideoMode);
// Type: Oculus.Platform::AbuseReportVideoMode
namespace Oculus::Platform {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13223))
// CS Name: ::Oculus.Platform::AbuseReportVideoMode
struct CORDL_TYPE AbuseReportVideoMode : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __AbuseReportVideoMode_Unwrapped
enum struct __AbuseReportVideoMode_Unwrapped : int32_t {
__E_Unknown = static_cast<int32_t>(0x0),
__E_Collect = static_cast<int32_t>(0x1),
__E_Optional = static_cast<int32_t>(0x2),
__E_Skip = static_cast<int32_t>(0x3),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Unknown value: static_cast<int32_t>(0x0)
static ::Oculus::Platform::AbuseReportVideoMode const Unknown;

/// @brief Field Collect value: static_cast<int32_t>(0x1)
static ::Oculus::Platform::AbuseReportVideoMode const Collect;

/// @brief Field Optional value: static_cast<int32_t>(0x2)
static ::Oculus::Platform::AbuseReportVideoMode const Optional;

/// @brief Field Skip value: static_cast<int32_t>(0x3)
static ::Oculus::Platform::AbuseReportVideoMode const Skip;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __AbuseReportVideoMode_Unwrapped () const noexcept {
return std::bit_cast<__AbuseReportVideoMode_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr AbuseReportVideoMode(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit AbuseReportVideoMode(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 AbuseReportVideoMode()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::AbuseReportVideoMode, 0x4>, "Size mismatch!");

} // namespace end def Oculus::Platform
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::AbuseReportVideoMode, "Oculus.Platform", "AbuseReportVideoMode");
