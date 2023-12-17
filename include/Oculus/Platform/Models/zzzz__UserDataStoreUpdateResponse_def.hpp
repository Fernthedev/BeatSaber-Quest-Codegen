#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UserDataStoreUpdateResponse)
// Forward declare root types
namespace Oculus::Platform::Models {
class UserDataStoreUpdateResponse;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::UserDataStoreUpdateResponse);
// Type: Oculus.Platform.Models::UserDataStoreUpdateResponse
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13489))
// CS Name: ::Oculus.Platform.Models::UserDataStoreUpdateResponse*
class CORDL_TYPE UserDataStoreUpdateResponse : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field Success offset 0x10
 __declspec(property(get=__get_Success, put=__set_Success)) bool  Success;

constexpr void __set_Success(bool  value) ;

constexpr bool& __get_Success() ;

constexpr bool const& __get_Success() const;

static inline ::Oculus::Platform::Models::UserDataStoreUpdateResponse* New_ctor(::cordl_internals::intptr_t  o) ;

/// @brief Method .ctor addr 0x2709340 size 0x7c virtual false final false
inline void _ctor(::cordl_internals::intptr_t  o) ;

// Ctor Parameters [CppParam { name: "", ty: "UserDataStoreUpdateResponse", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
UserDataStoreUpdateResponse(UserDataStoreUpdateResponse && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UserDataStoreUpdateResponse", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
UserDataStoreUpdateResponse(UserDataStoreUpdateResponse const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 UserDataStoreUpdateResponse()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::UserDataStoreUpdateResponse, 0x18>, "Size mismatch!");

} // namespace end def Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::UserDataStoreUpdateResponse);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::UserDataStoreUpdateResponse*, "Oculus.Platform.Models", "UserDataStoreUpdateResponse");
