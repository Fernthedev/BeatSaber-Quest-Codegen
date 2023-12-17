#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(Livestreaming)
namespace Oculus::Platform::Models {
class LivestreamingStatus;
}
namespace Oculus::Platform {
template<typename T>
class __Message_1__Callback;
}
// Forward declare root types
namespace Oculus::Platform {
class Livestreaming;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Livestreaming);
// Type: Oculus.Platform::Livestreaming
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13364))
// CS Name: ::Oculus.Platform::Livestreaming*
class CORDL_TYPE Livestreaming : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Method SetStatusUpdateNotificationCallback addr 0x26feac0 size 0x74 virtual false final false
static inline void SetStatusUpdateNotificationCallback(::Oculus::Platform::__Message_1__Callback<::Oculus::Platform::Models::LivestreamingStatus*>*  callback) ;

// Ctor Parameters [CppParam { name: "", ty: "Livestreaming", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Livestreaming(Livestreaming && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Livestreaming", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Livestreaming(Livestreaming const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 Livestreaming()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Livestreaming, 0x10>, "Size mismatch!");

} // namespace end def Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::Livestreaming);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Livestreaming*, "Oculus.Platform", "Livestreaming");
