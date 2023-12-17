#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/Models/zzzz__InstalledApplicationList_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MessageWithInstalledApplicationList)
namespace Oculus::Platform::Models {
class InstalledApplicationList;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithInstalledApplicationList;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithInstalledApplicationList);
// Type: Oculus.Platform::MessageWithInstalledApplicationList
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13262)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13262), inst: 4586 }), TypeDefinitionIndex(TypeDefinitionIndex(13438))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13291))
// CS Name: ::Oculus.Platform::MessageWithInstalledApplicationList*
class CORDL_TYPE MessageWithInstalledApplicationList : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::InstalledApplicationList*> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::Oculus::Platform::Message_1<::Oculus::Platform::Models::InstalledApplicationList*>)]{};

static inline ::Oculus::Platform::MessageWithInstalledApplicationList* New_ctor(::cordl_internals::intptr_t  c_message) ;

/// @brief Method .ctor addr 0x26f1b70 size 0x58 virtual false final false
inline void _ctor(::cordl_internals::intptr_t  c_message) ;

/// @brief Method GetInstalledApplicationList addr 0x26f1bc8 size 0x3c virtual true final false
inline ::Oculus::Platform::Models::InstalledApplicationList* GetInstalledApplicationList() ;

/// @brief Method GetDataFromMessage addr 0x26f1c04 size 0x9c virtual true final false
inline ::Oculus::Platform::Models::InstalledApplicationList* GetDataFromMessage(::cordl_internals::intptr_t  c_message) ;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithInstalledApplicationList", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MessageWithInstalledApplicationList(MessageWithInstalledApplicationList && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithInstalledApplicationList", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MessageWithInstalledApplicationList(MessageWithInstalledApplicationList const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MessageWithInstalledApplicationList()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithInstalledApplicationList, 0x30>, "Size mismatch!");

} // namespace end def Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithInstalledApplicationList);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithInstalledApplicationList*, "Oculus.Platform", "MessageWithInstalledApplicationList");
