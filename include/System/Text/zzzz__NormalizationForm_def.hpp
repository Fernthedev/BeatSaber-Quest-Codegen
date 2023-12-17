#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/enum-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NormalizationForm)
// Forward declare root types
namespace System::Text {
struct NormalizationForm;
}
// Write type traits
MARK_VAL_T(::System::Text::NormalizationForm);
// Type: System.Text::NormalizationForm
namespace System::Text {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2852))
// CS Name: ::System.Text::NormalizationForm
struct CORDL_TYPE NormalizationForm : public ::bs_hook::EnumTypeWrapper<0x4> {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __NormalizationForm_Unwrapped
enum struct __NormalizationForm_Unwrapped : int32_t {
__E_FormC = static_cast<int32_t>(0x1),
__E_FormD = static_cast<int32_t>(0x2),
__E_FormKC = static_cast<int32_t>(0x5),
__E_FormKD = static_cast<int32_t>(0x6),
};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field FormC value: static_cast<int32_t>(0x1)
static ::System::Text::NormalizationForm const FormC;

/// @brief Field FormD value: static_cast<int32_t>(0x2)
static ::System::Text::NormalizationForm const FormD;

/// @brief Field FormKC value: static_cast<int32_t>(0x5)
static ::System::Text::NormalizationForm const FormKC;

/// @brief Field FormKD value: static_cast<int32_t>(0x6)
static ::System::Text::NormalizationForm const FormKD;

/// @brief Field value__ offset 0x0
 __declspec(property(get=__get_value__, put=__set_value__)) int32_t  value__;

/// @brief Conversion into unwrapped enum value
constexpr operator __NormalizationForm_Unwrapped () const noexcept {
return std::bit_cast<__NormalizationForm_Unwrapped>(this->::bs_hook::EnumTypeWrapper<0x4>::instance);
}

constexpr void __set_value__(int32_t  value) ;

constexpr int32_t& __get_value__() ;

constexpr int32_t const& __get_value__() const;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr NormalizationForm(int32_t  value__) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit NormalizationForm(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::EnumTypeWrapper<0x4>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 NormalizationForm()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Text::NormalizationForm, 0x4>, "Size mismatch!");

} // namespace end def System::Text
DEFINE_IL2CPP_ARG_TYPE(::System::Text::NormalizationForm, "System.Text", "NormalizationForm");
