#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/Models/zzzz__PidList_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MessageWithPidList)
namespace Oculus::Platform::Models {
class PidList;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithPidList;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithPidList);
// Type: Oculus.Platform::MessageWithPidList
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13262), inst: 4604 }), TypeDefinitionIndex(TypeDefinitionIndex(13262)), TypeDefinitionIndex(TypeDefinitionIndex(13470))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13316))
// CS Name: ::Oculus.Platform::MessageWithPidList*
class CORDL_TYPE MessageWithPidList : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::PidList*> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::Oculus::Platform::Message_1<::Oculus::Platform::Models::PidList*>)]{};

static inline ::Oculus::Platform::MessageWithPidList* New_ctor(::cordl_internals::intptr_t  c_message) ;

/// @brief Method .ctor addr 0x26ef608 size 0x58 virtual false final false
inline void _ctor(::cordl_internals::intptr_t  c_message) ;

/// @brief Method GetPidList addr 0x26f3450 size 0x3c virtual true final false
inline ::Oculus::Platform::Models::PidList* GetPidList() ;

/// @brief Method GetDataFromMessage addr 0x26f348c size 0x9c virtual true final false
inline ::Oculus::Platform::Models::PidList* GetDataFromMessage(::cordl_internals::intptr_t  c_message) ;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithPidList", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MessageWithPidList(MessageWithPidList && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithPidList", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MessageWithPidList(MessageWithPidList const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MessageWithPidList()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithPidList, 0x30>, "Size mismatch!");

} // namespace end def Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithPidList);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithPidList*, "Oculus.Platform", "MessageWithPidList");
