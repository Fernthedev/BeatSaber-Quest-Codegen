#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/Models/zzzz__DeserializableList_1_def.hpp"
#include "Oculus/Platform/Models/zzzz__NetSyncSession_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NetSyncSessionList)
// Forward declare root types
namespace Oculus::Platform::Models {
class NetSyncSessionList;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::NetSyncSessionList);
// Type: Oculus.Platform.Models::NetSyncSessionList
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13459)), TypeDefinitionIndex(TypeDefinitionIndex(13430)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13430), inst: 1178 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13460))
// CS Name: ::Oculus.Platform.Models::NetSyncSessionList*
class CORDL_TYPE NetSyncSessionList : public ::Oculus::Platform::Models::DeserializableList_1<::Oculus::Platform::Models::NetSyncSession*> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::Oculus::Platform::Models::DeserializableList_1<::Oculus::Platform::Models::NetSyncSession*>)]{};

static inline ::Oculus::Platform::Models::NetSyncSessionList* New_ctor(::cordl_internals::intptr_t  a) ;

/// @brief Method .ctor addr 0x2707654 size 0x23c virtual false final false
inline void _ctor(::cordl_internals::intptr_t  a) ;

// Ctor Parameters [CppParam { name: "", ty: "NetSyncSessionList", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NetSyncSessionList(NetSyncSessionList && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NetSyncSessionList", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NetSyncSessionList(NetSyncSessionList const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 NetSyncSessionList()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::NetSyncSessionList, 0x28>, "Size mismatch!");

} // namespace end def Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::NetSyncSessionList);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::NetSyncSessionList*, "Oculus.Platform.Models", "NetSyncSessionList");
