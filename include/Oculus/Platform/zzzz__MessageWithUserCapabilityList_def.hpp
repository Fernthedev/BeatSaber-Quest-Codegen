#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/Models/zzzz__UserCapabilityList_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MessageWithUserCapabilityList)
namespace Oculus::Platform::Models {
class UserCapabilityList;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithUserCapabilityList;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithUserCapabilityList);
// Type: Oculus.Platform::MessageWithUserCapabilityList
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13488)), TypeDefinitionIndex(TypeDefinitionIndex(13262)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13262), inst: 4612 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13329))
// CS Name: ::Oculus.Platform::MessageWithUserCapabilityList*
class CORDL_TYPE MessageWithUserCapabilityList : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::UserCapabilityList*> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::Oculus::Platform::Message_1<::Oculus::Platform::Models::UserCapabilityList*>)]{};

static inline ::Oculus::Platform::MessageWithUserCapabilityList* New_ctor(::cordl_internals::intptr_t  c_message) ;

/// @brief Method .ctor addr 0x26efa80 size 0x58 virtual false final false
inline void _ctor(::cordl_internals::intptr_t  c_message) ;

/// @brief Method GetUserCapabilityList addr 0x26f3f00 size 0x3c virtual true final false
inline ::Oculus::Platform::Models::UserCapabilityList* GetUserCapabilityList() ;

/// @brief Method GetDataFromMessage addr 0x26f3f3c size 0x9c virtual true final false
inline ::Oculus::Platform::Models::UserCapabilityList* GetDataFromMessage(::cordl_internals::intptr_t  c_message) ;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithUserCapabilityList", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MessageWithUserCapabilityList(MessageWithUserCapabilityList && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithUserCapabilityList", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MessageWithUserCapabilityList(MessageWithUserCapabilityList const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MessageWithUserCapabilityList()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithUserCapabilityList, 0x30>, "Size mismatch!");

} // namespace end def Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithUserCapabilityList);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithUserCapabilityList*, "Oculus.Platform", "MessageWithUserCapabilityList");
