#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/Models/zzzz__NetSyncSessionList_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MessageWithNetSyncSessionList)
namespace Oculus::Platform::Models {
class NetSyncSessionList;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithNetSyncSessionList;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithNetSyncSessionList);
// Type: Oculus.Platform::MessageWithNetSyncSessionList
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13262), inst: 4598 }), TypeDefinitionIndex(TypeDefinitionIndex(13262)), TypeDefinitionIndex(TypeDefinitionIndex(13460))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13307))
// CS Name: ::Oculus.Platform::MessageWithNetSyncSessionList*
class CORDL_TYPE MessageWithNetSyncSessionList : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::NetSyncSessionList*> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::Oculus::Platform::Message_1<::Oculus::Platform::Models::NetSyncSessionList*>)]{};

static inline ::Oculus::Platform::MessageWithNetSyncSessionList* New_ctor(::cordl_internals::intptr_t  c_message) ;

/// @brief Method .ctor addr 0x26f2b00 size 0x58 virtual false final false
inline void _ctor(::cordl_internals::intptr_t  c_message) ;

/// @brief Method GetNetSyncSessionList addr 0x26f2b58 size 0x3c virtual true final false
inline ::Oculus::Platform::Models::NetSyncSessionList* GetNetSyncSessionList() ;

/// @brief Method GetDataFromMessage addr 0x26f2b94 size 0x9c virtual true final false
inline ::Oculus::Platform::Models::NetSyncSessionList* GetDataFromMessage(::cordl_internals::intptr_t  c_message) ;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithNetSyncSessionList", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MessageWithNetSyncSessionList(MessageWithNetSyncSessionList && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithNetSyncSessionList", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MessageWithNetSyncSessionList(MessageWithNetSyncSessionList const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MessageWithNetSyncSessionList()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithNetSyncSessionList, 0x30>, "Size mismatch!");

} // namespace end def Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithNetSyncSessionList);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithNetSyncSessionList*, "Oculus.Platform", "MessageWithNetSyncSessionList");
