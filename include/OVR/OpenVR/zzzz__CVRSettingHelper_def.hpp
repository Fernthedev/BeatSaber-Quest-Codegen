#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CVRSettingHelper)
// Forward declare root types
namespace OVR::OpenVR {
struct CVRSettingHelper;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::CVRSettingHelper);
// Type: OVR.OpenVR::CVRSettingHelper
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8719))
// CS Name: ::OVR.OpenVR::CVRSettingHelper
struct CORDL_TYPE CVRSettingHelper : public ::bs_hook::ValueTypeWrapper<0x8> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field m_pSettings offset 0x0
 __declspec(property(get=__get_m_pSettings, put=__set_m_pSettings)) ::cordl_internals::intptr_t  m_pSettings;

constexpr void __set_m_pSettings(::cordl_internals::intptr_t  value) ;

constexpr ::cordl_internals::intptr_t& __get_m_pSettings() ;

constexpr ::cordl_internals::intptr_t const& __get_m_pSettings() const;

// Ctor Parameters [CppParam { name: "m_pSettings", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
constexpr CVRSettingHelper(::cordl_internals::intptr_t  m_pSettings) noexcept;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit CVRSettingHelper(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x8>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 CVRSettingHelper()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::CVRSettingHelper, 0x8>, "Size mismatch!");

} // namespace end def OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::CVRSettingHelper, "OVR.OpenVR", "CVRSettingHelper");
