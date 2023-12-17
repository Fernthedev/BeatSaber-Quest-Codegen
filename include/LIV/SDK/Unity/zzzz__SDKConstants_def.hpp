#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/value-wrapper-type.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(SDKConstants)
// Forward declare root types
namespace LIV::SDK::Unity {
struct SDKConstants;
}
// Write type traits
MARK_VAL_T(::LIV::SDK::Unity::SDKConstants);
// Type: LIV.SDK.Unity::SDKConstants
namespace LIV::SDK::Unity {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15099))
// CS Name: ::LIV.SDK.Unity::SDKConstants
struct CORDL_TYPE SDKConstants : public ::bs_hook::ValueTypeWrapper<0x1> {
public:
// Declarations
/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x1};

/// @brief Field SDK_ID offset 0x0
static constexpr ::ConstString  SDK_ID{u"7R9Y1V7WEROGDMRF6F3ESO2C6F858GCD"};

/// @brief Field SDK_VERSION offset 0x0
static constexpr ::ConstString  SDK_VERSION{u"1.5.4"};

/// @brief Field ENGINE_NAME offset 0x0
static constexpr ::ConstString  ENGINE_NAME{u"unity"};

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
// @brief Constructor that lets you initialize the internal array explicitly
constexpr explicit SDKConstants(std::array<std::byte, __IL2CPP_VALUE_TYPE_SIZE>  instance) noexcept : ::bs_hook::ValueTypeWrapper<0x1>(instance) {
}

// Ctor Parameters []
// @brief default ctor
 SDKConstants()  = default;


// Fields

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::LIV::SDK::Unity::SDKConstants, 0x1>, "Size mismatch!");

} // namespace end def LIV::SDK::Unity
DEFINE_IL2CPP_ARG_TYPE(::LIV::SDK::Unity::SDKConstants, "LIV.SDK.Unity", "SDKConstants");
