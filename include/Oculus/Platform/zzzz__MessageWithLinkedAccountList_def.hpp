#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/Models/zzzz__LinkedAccountList_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MessageWithLinkedAccountList)
namespace Oculus::Platform::Models {
class LinkedAccountList;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithLinkedAccountList;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithLinkedAccountList);
// Type: Oculus.Platform::MessageWithLinkedAccountList
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13262), inst: 4593 }), TypeDefinitionIndex(TypeDefinitionIndex(13452)), TypeDefinitionIndex(TypeDefinitionIndex(13262))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13300))
// CS Name: ::Oculus.Platform::MessageWithLinkedAccountList*
class CORDL_TYPE MessageWithLinkedAccountList : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::LinkedAccountList*> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::Oculus::Platform::Message_1<::Oculus::Platform::Models::LinkedAccountList*>)]{};

static inline ::Oculus::Platform::MessageWithLinkedAccountList* New_ctor(::cordl_internals::intptr_t  c_message) ;

/// @brief Method .ctor addr 0x26f23b8 size 0x58 virtual false final false
inline void _ctor(::cordl_internals::intptr_t  c_message) ;

/// @brief Method GetLinkedAccountList addr 0x26f2410 size 0x3c virtual true final false
inline ::Oculus::Platform::Models::LinkedAccountList* GetLinkedAccountList() ;

/// @brief Method GetDataFromMessage addr 0x26f244c size 0x9c virtual true final false
inline ::Oculus::Platform::Models::LinkedAccountList* GetDataFromMessage(::cordl_internals::intptr_t  c_message) ;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithLinkedAccountList", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MessageWithLinkedAccountList(MessageWithLinkedAccountList && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithLinkedAccountList", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MessageWithLinkedAccountList(MessageWithLinkedAccountList const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MessageWithLinkedAccountList()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithLinkedAccountList, 0x30>, "Size mismatch!");

} // namespace end def Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithLinkedAccountList);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithLinkedAccountList*, "Oculus.Platform", "MessageWithLinkedAccountList");
