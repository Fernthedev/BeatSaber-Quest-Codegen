#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/Models/zzzz__LaunchBlockFlowResult_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MessageWithLaunchBlockFlowResult)
namespace Oculus::Platform::Models {
class LaunchBlockFlowResult;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithLaunchBlockFlowResult;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithLaunchBlockFlowResult);
// Type: Oculus.Platform::MessageWithLaunchBlockFlowResult
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13262)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13262), inst: 4588 }), TypeDefinitionIndex(TypeDefinitionIndex(13441))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13293))
// CS Name: ::Oculus.Platform::MessageWithLaunchBlockFlowResult*
class CORDL_TYPE MessageWithLaunchBlockFlowResult : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::LaunchBlockFlowResult*> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::Oculus::Platform::Message_1<::Oculus::Platform::Models::LaunchBlockFlowResult*>)]{};

static inline ::Oculus::Platform::MessageWithLaunchBlockFlowResult* New_ctor(::cordl_internals::intptr_t  c_message) ;

/// @brief Method .ctor addr 0x26ef138 size 0x58 virtual false final false
inline void _ctor(::cordl_internals::intptr_t  c_message) ;

/// @brief Method GetLaunchBlockFlowResult addr 0x26f1d78 size 0x3c virtual true final false
inline ::Oculus::Platform::Models::LaunchBlockFlowResult* GetLaunchBlockFlowResult() ;

/// @brief Method GetDataFromMessage addr 0x26f1db4 size 0x9c virtual true final false
inline ::Oculus::Platform::Models::LaunchBlockFlowResult* GetDataFromMessage(::cordl_internals::intptr_t  c_message) ;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithLaunchBlockFlowResult", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MessageWithLaunchBlockFlowResult(MessageWithLaunchBlockFlowResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithLaunchBlockFlowResult", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MessageWithLaunchBlockFlowResult(MessageWithLaunchBlockFlowResult const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MessageWithLaunchBlockFlowResult()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithLaunchBlockFlowResult, 0x30>, "Size mismatch!");

} // namespace end def Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithLaunchBlockFlowResult);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithLaunchBlockFlowResult*, "Oculus.Platform", "MessageWithLaunchBlockFlowResult");
