#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/Models/zzzz__NetSyncSetSessionPropertyResult_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MessageWithNetSyncSetSessionPropertyResult)
namespace Oculus::Platform::Models {
class NetSyncSetSessionPropertyResult;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithNetSyncSetSessionPropertyResult;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithNetSyncSetSessionPropertyResult);
// Type: Oculus.Platform::MessageWithNetSyncSetSessionPropertyResult
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13462)), TypeDefinitionIndex(TypeDefinitionIndex(13262)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13262), inst: 4599 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13309))
// CS Name: ::Oculus.Platform::MessageWithNetSyncSetSessionPropertyResult*
class CORDL_TYPE MessageWithNetSyncSetSessionPropertyResult : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::NetSyncSetSessionPropertyResult*> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::Oculus::Platform::Message_1<::Oculus::Platform::Models::NetSyncSetSessionPropertyResult*>)]{};

static inline ::Oculus::Platform::MessageWithNetSyncSetSessionPropertyResult* New_ctor(::cordl_internals::intptr_t  c_message) ;

/// @brief Method .ctor addr 0x26f2d08 size 0x58 virtual false final false
inline void _ctor(::cordl_internals::intptr_t  c_message) ;

/// @brief Method GetNetSyncSetSessionPropertyResult addr 0x26f2d60 size 0x3c virtual true final false
inline ::Oculus::Platform::Models::NetSyncSetSessionPropertyResult* GetNetSyncSetSessionPropertyResult() ;

/// @brief Method GetDataFromMessage addr 0x26f2d9c size 0x9c virtual true final false
inline ::Oculus::Platform::Models::NetSyncSetSessionPropertyResult* GetDataFromMessage(::cordl_internals::intptr_t  c_message) ;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithNetSyncSetSessionPropertyResult", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MessageWithNetSyncSetSessionPropertyResult(MessageWithNetSyncSetSessionPropertyResult && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithNetSyncSetSessionPropertyResult", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MessageWithNetSyncSetSessionPropertyResult(MessageWithNetSyncSetSessionPropertyResult const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MessageWithNetSyncSetSessionPropertyResult()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithNetSyncSetSessionPropertyResult, 0x30>, "Size mismatch!");

} // namespace end def Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithNetSyncSetSessionPropertyResult);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithNetSyncSetSessionPropertyResult*, "Oculus.Platform", "MessageWithNetSyncSetSessionPropertyResult");
