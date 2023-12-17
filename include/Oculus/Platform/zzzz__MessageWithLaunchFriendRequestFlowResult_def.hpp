#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/Models/zzzz__LaunchFriendRequestFlowResult_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MessageWithLaunchFriendRequestFlowResult)
namespace Oculus::Platform::Models {
class LaunchFriendRequestFlowResult;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithLaunchFriendRequestFlowResult;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithLaunchFriendRequestFlowResult);
// Type: Oculus.Platform::MessageWithLaunchFriendRequestFlowResult
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13262)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13262), inst: 4589 }), TypeDefinitionIndex(TypeDefinitionIndex(13443))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13294))
// CS Name: ::Oculus.Platform::MessageWithLaunchFriendRequestFlowResult*
class CORDL_TYPE MessageWithLaunchFriendRequestFlowResult : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::LaunchFriendRequestFlowResult*> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::Oculus::Platform::Message_1<::Oculus::Platform::Models::LaunchFriendRequestFlowResult*>)]{};

static inline ::Oculus::Platform::MessageWithLaunchFriendRequestFlowResult* New_ctor(::cordl_internals::intptr_t  c_message) ;

/// @brief Method .ctor addr 0x26ef190 size 0x58 virtual false final false
inline void _ctor(::cordl_internals::intptr_t  c_message) ;

/// @brief Method GetLaunchFriendRequestFlowResult addr 0x26f1e50 size 0x3c virtual true final false
inline ::Oculus::Platform::Models::LaunchFriendRequestFlowResult* GetLaunchFriendRequestFlowResult() ;

/// @brief Method GetDataFromMessage addr 0x26f1e8c size 0x9c virtual true final false
inline ::Oculus::Platform::Models::LaunchFriendRequestFlowResult* GetDataFromMessage(::cordl_internals::intptr_t  c_message) ;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithLaunchFriendRequestFlowResult", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MessageWithLaunchFriendRequestFlowResult(MessageWithLaunchFriendRequestFlowResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithLaunchFriendRequestFlowResult", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MessageWithLaunchFriendRequestFlowResult(MessageWithLaunchFriendRequestFlowResult const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MessageWithLaunchFriendRequestFlowResult()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithLaunchFriendRequestFlowResult, 0x30>, "Size mismatch!");

} // namespace end def Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithLaunchFriendRequestFlowResult);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithLaunchFriendRequestFlowResult*, "Oculus.Platform", "MessageWithLaunchFriendRequestFlowResult");
