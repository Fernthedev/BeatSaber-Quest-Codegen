#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PlatformUserModelUtils)
// Forward declare root types
namespace GlobalNamespace {
class PlatformUserModelUtils;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PlatformUserModelUtils);
// Type: ::PlatformUserModelUtils
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15994))
// CS Name: ::PlatformUserModelUtils*
class CORDL_TYPE PlatformUserModelUtils : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Field kMinimalTokenLength offset 0x0
static constexpr int32_t  kMinimalTokenLength{static_cast<int32_t>(0x40)};

/// @brief Method ValidateXPlatformAccessToken addr 0x2800140 size 0x14 virtual false final false
static inline bool ValidateXPlatformAccessToken(::StringW  token) ;

// Ctor Parameters [CppParam { name: "", ty: "PlatformUserModelUtils", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PlatformUserModelUtils(PlatformUserModelUtils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlatformUserModelUtils", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlatformUserModelUtils(PlatformUserModelUtils const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 PlatformUserModelUtils()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PlatformUserModelUtils, 0x10>, "Size mismatch!");

} // namespace end def GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PlatformUserModelUtils);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PlatformUserModelUtils*, "", "PlatformUserModelUtils");
