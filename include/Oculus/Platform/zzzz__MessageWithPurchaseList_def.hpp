#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/Models/zzzz__PurchaseList_def.hpp"
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MessageWithPurchaseList)
namespace Oculus::Platform::Models {
class PurchaseList;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithPurchaseList;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithPurchaseList);
// Type: Oculus.Platform::MessageWithPurchaseList
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13476)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13262), inst: 982 }), TypeDefinitionIndex(TypeDefinitionIndex(13262))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13319))
// CS Name: ::Oculus.Platform::MessageWithPurchaseList*
class CORDL_TYPE MessageWithPurchaseList : public ::Oculus::Platform::Message_1<::Oculus::Platform::Models::PurchaseList*> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::Oculus::Platform::Message_1<::Oculus::Platform::Models::PurchaseList*>)]{};

static inline ::Oculus::Platform::MessageWithPurchaseList* New_ctor(::cordl_internals::intptr_t  c_message) ;

/// @brief Method .ctor addr 0x26ef710 size 0x58 virtual false final false
inline void _ctor(::cordl_internals::intptr_t  c_message) ;

/// @brief Method GetPurchaseList addr 0x26f36d8 size 0x3c virtual true final false
inline ::Oculus::Platform::Models::PurchaseList* GetPurchaseList() ;

/// @brief Method GetDataFromMessage addr 0x26f3714 size 0x9c virtual true final false
inline ::Oculus::Platform::Models::PurchaseList* GetDataFromMessage(::cordl_internals::intptr_t  c_message) ;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithPurchaseList", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MessageWithPurchaseList(MessageWithPurchaseList && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithPurchaseList", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MessageWithPurchaseList(MessageWithPurchaseList const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MessageWithPurchaseList()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithPurchaseList, 0x30>, "Size mismatch!");

} // namespace end def Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithPurchaseList);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithPurchaseList*, "Oculus.Platform", "MessageWithPurchaseList");
