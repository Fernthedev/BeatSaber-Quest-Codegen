#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/Models/zzzz__LaunchUnblockFlowResult_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MessageWithLaunchUnblockFlowResult)
namespace Oculus::Platform::Models {
class LaunchUnblockFlowResult;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithLaunchUnblockFlowResult;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithLaunchUnblockFlowResult);
// Type: Oculus.Platform::MessageWithLaunchUnblockFlowResult
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13262), inst: 4591 }), TypeDefinitionIndex(TypeDefinitionIndex(13262)), TypeDefinitionIndex(TypeDefinitionIndex(13446))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13297))
// CS Name: ::Oculus.Platform::MessageWithLaunchUnblockFlowResult*
class CORDL_TYPE MessageWithLaunchUnblockFlowResult : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::LaunchUnblockFlowResult*> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::Oculus::Platform::Message_1<::Oculus::Platform::Models::LaunchUnblockFlowResult*>)]{};

static inline ::Oculus::Platform::MessageWithLaunchUnblockFlowResult* New_ctor(::cordl_internals::intptr_t  c_message) ;

/// @brief Method .ctor addr 0x26ef240 size 0x58 virtual false final false
inline void _ctor(::cordl_internals::intptr_t  c_message) ;

/// @brief Method GetLaunchUnblockFlowResult addr 0x26f2130 size 0x3c virtual true final false
inline ::Oculus::Platform::Models::LaunchUnblockFlowResult* GetLaunchUnblockFlowResult() ;

/// @brief Method GetDataFromMessage addr 0x26f216c size 0x9c virtual true final false
inline ::Oculus::Platform::Models::LaunchUnblockFlowResult* GetDataFromMessage(::cordl_internals::intptr_t  c_message) ;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithLaunchUnblockFlowResult", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MessageWithLaunchUnblockFlowResult(MessageWithLaunchUnblockFlowResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithLaunchUnblockFlowResult", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MessageWithLaunchUnblockFlowResult(MessageWithLaunchUnblockFlowResult const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MessageWithLaunchUnblockFlowResult()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithLaunchUnblockFlowResult, 0x30>, "Size mismatch!");

} // namespace end def Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithLaunchUnblockFlowResult);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithLaunchUnblockFlowResult*, "Oculus.Platform", "MessageWithLaunchUnblockFlowResult");
