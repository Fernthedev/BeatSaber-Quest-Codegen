#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/Models/zzzz__NetSyncVoipAttenuationValueList_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MessageWithNetSyncVoipAttenuationValueList)
namespace Oculus::Platform::Models {
class NetSyncVoipAttenuationValueList;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithNetSyncVoipAttenuationValueList;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithNetSyncVoipAttenuationValueList);
// Type: Oculus.Platform::MessageWithNetSyncVoipAttenuationValueList
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13262), inst: 4600 }), TypeDefinitionIndex(TypeDefinitionIndex(13262)), TypeDefinitionIndex(TypeDefinitionIndex(13464))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13310))
// CS Name: ::Oculus.Platform::MessageWithNetSyncVoipAttenuationValueList*
class CORDL_TYPE MessageWithNetSyncVoipAttenuationValueList : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::NetSyncVoipAttenuationValueList*> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::Oculus::Platform::Message_1<::Oculus::Platform::Models::NetSyncVoipAttenuationValueList*>)]{};

static inline ::Oculus::Platform::MessageWithNetSyncVoipAttenuationValueList* New_ctor(::cordl_internals::intptr_t  c_message) ;

/// @brief Method .ctor addr 0x26f2e38 size 0x58 virtual false final false
inline void _ctor(::cordl_internals::intptr_t  c_message) ;

/// @brief Method GetNetSyncVoipAttenuationValueList addr 0x26f2e90 size 0x3c virtual true final false
inline ::Oculus::Platform::Models::NetSyncVoipAttenuationValueList* GetNetSyncVoipAttenuationValueList() ;

/// @brief Method GetDataFromMessage addr 0x26f2ecc size 0x9c virtual true final false
inline ::Oculus::Platform::Models::NetSyncVoipAttenuationValueList* GetDataFromMessage(::cordl_internals::intptr_t  c_message) ;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithNetSyncVoipAttenuationValueList", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MessageWithNetSyncVoipAttenuationValueList(MessageWithNetSyncVoipAttenuationValueList && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithNetSyncVoipAttenuationValueList", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MessageWithNetSyncVoipAttenuationValueList(MessageWithNetSyncVoipAttenuationValueList const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MessageWithNetSyncVoipAttenuationValueList()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithNetSyncVoipAttenuationValueList, 0x30>, "Size mismatch!");

} // namespace end def Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithNetSyncVoipAttenuationValueList);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithNetSyncVoipAttenuationValueList*, "Oculus.Platform", "MessageWithNetSyncVoipAttenuationValueList");
