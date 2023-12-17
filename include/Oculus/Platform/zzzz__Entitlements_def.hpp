#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Entitlements)
namespace Oculus::Platform {
class Request;
}
// Forward declare root types
namespace Oculus::Platform {
class Entitlements;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Entitlements);
// Type: Oculus.Platform::Entitlements
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13360))
// CS Name: ::Oculus.Platform::Entitlements*
class CORDL_TYPE Entitlements : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method IsUserEntitledToApplication addr 0x26fcbc4 size 0x144 virtual false final false
static inline ::Oculus::Platform::Request* IsUserEntitledToApplication() ;

// Ctor Parameters [CppParam { name: "", ty: "Entitlements", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Entitlements(Entitlements && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Entitlements", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Entitlements(Entitlements const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Entitlements()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Entitlements, 0x10>, "Size mismatch!");

} // namespace end def Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::Entitlements);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Entitlements*, "Oculus.Platform", "Entitlements");
