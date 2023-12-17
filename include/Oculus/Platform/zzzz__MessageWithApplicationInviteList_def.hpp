#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/Models/zzzz__ApplicationInviteList_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MessageWithApplicationInviteList)
namespace Oculus::Platform::Models {
class ApplicationInviteList;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithApplicationInviteList;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithApplicationInviteList);
// Type: Oculus.Platform::MessageWithApplicationInviteList
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13262), inst: 4575 }), TypeDefinitionIndex(TypeDefinitionIndex(13262)), TypeDefinitionIndex(TypeDefinitionIndex(13415))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13273))
// CS Name: ::Oculus.Platform::MessageWithApplicationInviteList*
class CORDL_TYPE MessageWithApplicationInviteList : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::ApplicationInviteList*> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::Oculus::Platform::Message_1<::Oculus::Platform::Models::ApplicationInviteList*>)]{};

static inline ::Oculus::Platform::MessageWithApplicationInviteList* New_ctor(::cordl_internals::intptr_t  c_message) ;

/// @brief Method .ctor addr 0x26eeab0 size 0x58 virtual false final false
inline void _ctor(::cordl_internals::intptr_t  c_message) ;

/// @brief Method GetApplicationInviteList addr 0x26f0cc0 size 0x3c virtual true final false
inline ::Oculus::Platform::Models::ApplicationInviteList* GetApplicationInviteList() ;

/// @brief Method GetDataFromMessage addr 0x26f0cfc size 0x9c virtual true final false
inline ::Oculus::Platform::Models::ApplicationInviteList* GetDataFromMessage(::cordl_internals::intptr_t  c_message) ;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithApplicationInviteList", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MessageWithApplicationInviteList(MessageWithApplicationInviteList && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithApplicationInviteList", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MessageWithApplicationInviteList(MessageWithApplicationInviteList const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MessageWithApplicationInviteList()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithApplicationInviteList, 0x30>, "Size mismatch!");

} // namespace end def Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithApplicationInviteList);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithApplicationInviteList*, "Oculus.Platform", "MessageWithApplicationInviteList");
