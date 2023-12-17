#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/Models/zzzz__AbuseReportRecording_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MessageWithAbuseReportRecording)
namespace Oculus::Platform::Models {
class AbuseReportRecording;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithAbuseReportRecording;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithAbuseReportRecording);
// Type: Oculus.Platform::MessageWithAbuseReportRecording
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13262), inst: 4569 }), TypeDefinitionIndex(TypeDefinitionIndex(13262)), TypeDefinitionIndex(TypeDefinitionIndex(13406))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13267))
// CS Name: ::Oculus.Platform::MessageWithAbuseReportRecording*
class CORDL_TYPE MessageWithAbuseReportRecording : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::AbuseReportRecording*> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::Oculus::Platform::Message_1<::Oculus::Platform::Models::AbuseReportRecording*>)]{};

static inline ::Oculus::Platform::MessageWithAbuseReportRecording* New_ctor(::cordl_internals::intptr_t  c_message) ;

/// @brief Method .ctor addr 0x26f0758 size 0x58 virtual false final false
inline void _ctor(::cordl_internals::intptr_t  c_message) ;

/// @brief Method GetAbuseReportRecording addr 0x26f07b0 size 0x3c virtual true final false
inline ::Oculus::Platform::Models::AbuseReportRecording* GetAbuseReportRecording() ;

/// @brief Method GetDataFromMessage addr 0x26f07ec size 0x9c virtual true final false
inline ::Oculus::Platform::Models::AbuseReportRecording* GetDataFromMessage(::cordl_internals::intptr_t  c_message) ;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithAbuseReportRecording", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MessageWithAbuseReportRecording(MessageWithAbuseReportRecording && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithAbuseReportRecording", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MessageWithAbuseReportRecording(MessageWithAbuseReportRecording const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MessageWithAbuseReportRecording()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithAbuseReportRecording, 0x30>, "Size mismatch!");

} // namespace end def Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithAbuseReportRecording);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithAbuseReportRecording*, "Oculus.Platform", "MessageWithAbuseReportRecording");
