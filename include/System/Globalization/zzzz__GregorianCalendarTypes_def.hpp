#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GregorianCalendarTypes)
// Forward declare root types
namespace System::Globalization {
struct GregorianCalendarTypes;
}
// Write type traits
MARK_VAL_T(::System::Globalization::GregorianCalendarTypes);
// Type: System.Globalization::GregorianCalendarTypes
namespace System::Globalization {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3701))
// CS Name: ::System.Globalization::GregorianCalendarTypes
struct CORDL_TYPE GregorianCalendarTypes : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GregorianCalendarTypes_Unwrapped
enum struct __GregorianCalendarTypes_Unwrapped : int32_t {
__E_Localized = static_cast<int32_t>(0x1),
__E_USEnglish = static_cast<int32_t>(0x2),
__E_MiddleEastFrench = static_cast<int32_t>(0x9),
__E_Arabic = static_cast<int32_t>(0xa),
__E_TransliteratedEnglish = static_cast<int32_t>(0xb),
__E_TransliteratedFrench = static_cast<int32_t>(0xc),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field Localized value: static_cast<int32_t>(0x1)
static ::System::Globalization::GregorianCalendarTypes const Localized;

/// @brief Field USEnglish value: static_cast<int32_t>(0x2)
static ::System::Globalization::GregorianCalendarTypes const USEnglish;

/// @brief Field MiddleEastFrench value: static_cast<int32_t>(0x9)
static ::System::Globalization::GregorianCalendarTypes const MiddleEastFrench;

/// @brief Field Arabic value: static_cast<int32_t>(0xa)
static ::System::Globalization::GregorianCalendarTypes const Arabic;

/// @brief Field TransliteratedEnglish value: static_cast<int32_t>(0xb)
static ::System::Globalization::GregorianCalendarTypes const TransliteratedEnglish;

/// @brief Field TransliteratedFrench value: static_cast<int32_t>(0xc)
static ::System::Globalization::GregorianCalendarTypes const TransliteratedFrench;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __GregorianCalendarTypes_Unwrapped () const noexcept {
return std::bit_cast<__GregorianCalendarTypes_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr GregorianCalendarTypes(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit GregorianCalendarTypes(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 GregorianCalendarTypes()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Globalization::GregorianCalendarTypes, 0x4>, "Size mismatch!");

} // namespace end def System::Globalization
DEFINE_IL2CPP_ARG_TYPE(::System::Globalization::GregorianCalendarTypes, "System.Globalization", "GregorianCalendarTypes");
