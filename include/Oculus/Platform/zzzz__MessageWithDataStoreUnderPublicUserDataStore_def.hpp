#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Platform/zzzz__Message_1_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MessageWithDataStoreUnderPublicUserDataStore)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
// Forward declare root types
namespace Oculus::Platform {
class MessageWithDataStoreUnderPublicUserDataStore;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::MessageWithDataStoreUnderPublicUserDataStore);
// Type: Oculus.Platform::MessageWithDataStoreUnderPublicUserDataStore
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13262), inst: 4568 }), TypeDefinitionIndex(TypeDefinitionIndex(3824)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(3824), inst: 608 }), TypeDefinitionIndex(TypeDefinitionIndex(13262))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13287))
// CS Name: ::Oculus.Platform::MessageWithDataStoreUnderPublicUserDataStore*
class CORDL_TYPE MessageWithDataStoreUnderPublicUserDataStore : public ::Oculus::Platform::Message_1<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::Oculus::Platform::Message_1<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>)]{};

static inline ::Oculus::Platform::MessageWithDataStoreUnderPublicUserDataStore* New_ctor(::cordl_internals::intptr_t  c_message) ;

/// @brief Method .ctor addr 0x26eef80 size 0x58 virtual false final false
inline void _ctor(::cordl_internals::intptr_t  c_message) ;

/// @brief Method GetDataStore addr 0x26f1850 size 0x3c virtual true final false
inline ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* GetDataStore() ;

/// @brief Method GetDataFromMessage addr 0x26f188c size 0x5c virtual true final false
inline ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* GetDataFromMessage(::cordl_internals::intptr_t  c_message) ;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithDataStoreUnderPublicUserDataStore", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MessageWithDataStoreUnderPublicUserDataStore(MessageWithDataStoreUnderPublicUserDataStore && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MessageWithDataStoreUnderPublicUserDataStore", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MessageWithDataStoreUnderPublicUserDataStore(MessageWithDataStoreUnderPublicUserDataStore const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MessageWithDataStoreUnderPublicUserDataStore()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::MessageWithDataStoreUnderPublicUserDataStore, 0x30>, "Size mismatch!");

} // namespace end def Oculus::Platform
NEED_NO_BOX(::Oculus::Platform::MessageWithDataStoreUnderPublicUserDataStore);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::MessageWithDataStoreUnderPublicUserDataStore*, "Oculus.Platform", "MessageWithDataStoreUnderPublicUserDataStore");
