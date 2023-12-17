#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/Models/zzzz__UserList_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MessageWithUserList)
namespace Oculus::Platform::Models {
class UserList;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithUserList;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithUserList);
// Type: Oculus.Platform::MessageWithUserList
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13262)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13262), inst: 4614 }), TypeDefinitionIndex(TypeDefinitionIndex(13485))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13328))
// CS Name: ::Oculus.Platform::MessageWithUserList*
class CORDL_TYPE MessageWithUserList : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::UserList*> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::Oculus::Platform::Message_1<::Oculus::Platform::Models::UserList*>)]{};

static inline ::Oculus::Platform::MessageWithUserList* New_ctor(::cordl_internals::intptr_t  c_message) ;

/// @brief Method .ctor addr 0x26efa28 size 0x58 virtual false final false
inline void _ctor(::cordl_internals::intptr_t  c_message) ;

/// @brief Method GetUserList addr 0x26f3e28 size 0x3c virtual true final false
inline ::Oculus::Platform::Models::UserList* GetUserList() ;

/// @brief Method GetDataFromMessage addr 0x26f3e64 size 0x9c virtual true final false
inline ::Oculus::Platform::Models::UserList* GetDataFromMessage(::cordl_internals::intptr_t  c_message) ;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithUserList", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MessageWithUserList(MessageWithUserList && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithUserList", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MessageWithUserList(MessageWithUserList const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MessageWithUserList()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithUserList, 0x30>, "Size mismatch!");

} // namespace end def Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithUserList);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithUserList*, "Oculus.Platform", "MessageWithUserList");
