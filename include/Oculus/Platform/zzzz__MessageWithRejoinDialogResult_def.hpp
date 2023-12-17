#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/Models/zzzz__RejoinDialogResult_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MessageWithRejoinDialogResult)
namespace Oculus::Platform::Models {
class RejoinDialogResult;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithRejoinDialogResult;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithRejoinDialogResult);
// Type: Oculus.Platform::MessageWithRejoinDialogResult
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13262)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13262), inst: 4607 }), TypeDefinitionIndex(TypeDefinitionIndex(13477))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13320))
// CS Name: ::Oculus.Platform::MessageWithRejoinDialogResult*
class CORDL_TYPE MessageWithRejoinDialogResult : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::RejoinDialogResult*> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::Oculus::Platform::Message_1<::Oculus::Platform::Models::RejoinDialogResult*>)]{};

static inline ::Oculus::Platform::MessageWithRejoinDialogResult* New_ctor(::cordl_internals::intptr_t  c_message) ;

/// @brief Method .ctor addr 0x26ef768 size 0x58 virtual false final false
inline void _ctor(::cordl_internals::intptr_t  c_message) ;

/// @brief Method GetRejoinDialogResult addr 0x26f37b0 size 0x3c virtual true final false
inline ::Oculus::Platform::Models::RejoinDialogResult* GetRejoinDialogResult() ;

/// @brief Method GetDataFromMessage addr 0x26f37ec size 0x9c virtual true final false
inline ::Oculus::Platform::Models::RejoinDialogResult* GetDataFromMessage(::cordl_internals::intptr_t  c_message) ;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithRejoinDialogResult", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MessageWithRejoinDialogResult(MessageWithRejoinDialogResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithRejoinDialogResult", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MessageWithRejoinDialogResult(MessageWithRejoinDialogResult const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MessageWithRejoinDialogResult()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithRejoinDialogResult, 0x30>, "Size mismatch!");

} // namespace end def Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithRejoinDialogResult);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithRejoinDialogResult*, "Oculus.Platform", "MessageWithRejoinDialogResult");
