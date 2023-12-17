#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/Models/zzzz__LaunchReportFlowResult_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MessageWithLaunchReportFlowResult)
namespace Oculus::Platform::Models {
class LaunchReportFlowResult;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithLaunchReportFlowResult;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithLaunchReportFlowResult);
// Type: Oculus.Platform::MessageWithLaunchReportFlowResult
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13262)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13262), inst: 4590 }), TypeDefinitionIndex(TypeDefinitionIndex(13445))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13296))
// CS Name: ::Oculus.Platform::MessageWithLaunchReportFlowResult*
class CORDL_TYPE MessageWithLaunchReportFlowResult : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::LaunchReportFlowResult*> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::Oculus::Platform::Message_1<::Oculus::Platform::Models::LaunchReportFlowResult*>)]{};

static inline ::Oculus::Platform::MessageWithLaunchReportFlowResult* New_ctor(::cordl_internals::intptr_t  c_message) ;

/// @brief Method .ctor addr 0x26f2000 size 0x58 virtual false final false
inline void _ctor(::cordl_internals::intptr_t  c_message) ;

/// @brief Method GetLaunchReportFlowResult addr 0x26f2058 size 0x3c virtual true final false
inline ::Oculus::Platform::Models::LaunchReportFlowResult* GetLaunchReportFlowResult() ;

/// @brief Method GetDataFromMessage addr 0x26f2094 size 0x9c virtual true final false
inline ::Oculus::Platform::Models::LaunchReportFlowResult* GetDataFromMessage(::cordl_internals::intptr_t  c_message) ;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithLaunchReportFlowResult", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MessageWithLaunchReportFlowResult(MessageWithLaunchReportFlowResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithLaunchReportFlowResult", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MessageWithLaunchReportFlowResult(MessageWithLaunchReportFlowResult const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MessageWithLaunchReportFlowResult()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithLaunchReportFlowResult, 0x30>, "Size mismatch!");

} // namespace end def Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithLaunchReportFlowResult);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithLaunchReportFlowResult*, "Oculus.Platform", "MessageWithLaunchReportFlowResult");
