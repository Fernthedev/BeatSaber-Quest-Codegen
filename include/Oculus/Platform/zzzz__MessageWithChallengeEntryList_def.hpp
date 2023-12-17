#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/Models/zzzz__ChallengeEntryList_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MessageWithChallengeEntryList)
namespace Oculus::Platform::Models {
class ChallengeEntryList;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithChallengeEntryList;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithChallengeEntryList);
// Type: Oculus.Platform::MessageWithChallengeEntryList
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13262), inst: 4583 }), TypeDefinitionIndex(TypeDefinitionIndex(13429)), TypeDefinitionIndex(TypeDefinitionIndex(13262))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13285))
// CS Name: ::Oculus.Platform::MessageWithChallengeEntryList*
class CORDL_TYPE MessageWithChallengeEntryList : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::ChallengeEntryList*> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::Oculus::Platform::Message_1<::Oculus::Platform::Models::ChallengeEntryList*>)]{};

static inline ::Oculus::Platform::MessageWithChallengeEntryList* New_ctor(::cordl_internals::intptr_t  c_message) ;

/// @brief Method .ctor addr 0x26eeed0 size 0x58 virtual false final false
inline void _ctor(::cordl_internals::intptr_t  c_message) ;

/// @brief Method GetChallengeEntryList addr 0x26f16e0 size 0x3c virtual true final false
inline ::Oculus::Platform::Models::ChallengeEntryList* GetChallengeEntryList() ;

/// @brief Method GetDataFromMessage addr 0x26f171c size 0x9c virtual true final false
inline ::Oculus::Platform::Models::ChallengeEntryList* GetDataFromMessage(::cordl_internals::intptr_t  c_message) ;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithChallengeEntryList", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MessageWithChallengeEntryList(MessageWithChallengeEntryList && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithChallengeEntryList", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MessageWithChallengeEntryList(MessageWithChallengeEntryList const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MessageWithChallengeEntryList()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithChallengeEntryList, 0x30>, "Size mismatch!");

} // namespace end def Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithChallengeEntryList);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithChallengeEntryList*, "Oculus.Platform", "MessageWithChallengeEntryList");
