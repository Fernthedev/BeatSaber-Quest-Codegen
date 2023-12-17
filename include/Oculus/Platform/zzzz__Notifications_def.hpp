#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Notifications)
namespace Oculus::Platform {
class Request;
}
// Forward declare root types
namespace Oculus::Platform {
class Notifications;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Notifications);
// Type: Oculus.Platform::Notifications
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13367))
// CS Name: ::Oculus.Platform::Notifications*
class CORDL_TYPE Notifications : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method MarkAsRead addr 0x26fed94 size 0x14c virtual false final false
static inline ::Oculus::Platform::Request* MarkAsRead(uint64_t  notificationID) ;

// Ctor Parameters [CppParam { name: "", ty: "Notifications", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Notifications(Notifications && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Notifications", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Notifications(Notifications const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Notifications()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Notifications, 0x10>, "Size mismatch!");

} // namespace end def Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::Notifications);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Notifications*, "Oculus.Platform", "Notifications");
