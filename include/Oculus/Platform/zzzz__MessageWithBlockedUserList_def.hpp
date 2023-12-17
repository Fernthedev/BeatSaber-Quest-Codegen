#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/Models/zzzz__BlockedUserList_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MessageWithBlockedUserList)
namespace Oculus::Platform::Models {
class BlockedUserList;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithBlockedUserList;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithBlockedUserList);
// Type: Oculus.Platform::MessageWithBlockedUserList
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13262)), TypeDefinitionIndex(TypeDefinitionIndex(13425)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13262), inst: 4582 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13282))
// CS Name: ::Oculus.Platform::MessageWithBlockedUserList*
class CORDL_TYPE MessageWithBlockedUserList : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::BlockedUserList*> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::Oculus::Platform::Message_1<::Oculus::Platform::Models::BlockedUserList*>)]{};

static inline ::Oculus::Platform::MessageWithBlockedUserList* New_ctor(::cordl_internals::intptr_t  c_message) ;

/// @brief Method .ctor addr 0x26eedc8 size 0x58 virtual false final false
inline void _ctor(::cordl_internals::intptr_t  c_message) ;

/// @brief Method GetBlockedUserList addr 0x26f1458 size 0x3c virtual true final false
inline ::Oculus::Platform::Models::BlockedUserList* GetBlockedUserList() ;

/// @brief Method GetDataFromMessage addr 0x26f1494 size 0x9c virtual true final false
inline ::Oculus::Platform::Models::BlockedUserList* GetDataFromMessage(::cordl_internals::intptr_t  c_message) ;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithBlockedUserList", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MessageWithBlockedUserList(MessageWithBlockedUserList && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithBlockedUserList", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MessageWithBlockedUserList(MessageWithBlockedUserList const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MessageWithBlockedUserList()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithBlockedUserList, 0x30>, "Size mismatch!");

} // namespace end def Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithBlockedUserList);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithBlockedUserList*, "Oculus.Platform", "MessageWithBlockedUserList");
