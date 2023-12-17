#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SdkAccount)
namespace Oculus::Platform {
struct SdkAccountType;
}
// Forward declare root types
namespace Oculus::Platform::Models {
class SdkAccount;
}
// Write type traits
MARK_REF_PTR_T(::Oculus::Platform::Models::SdkAccount);
// Type: Oculus.Platform.Models::SdkAccount
namespace Oculus::Platform::Models {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13478))
// CS Name: ::Oculus.Platform.Models::SdkAccount*
class CORDL_TYPE SdkAccount : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field AccountType offset 0x10
 __declspec(property(get=__get_AccountType, put=__set_AccountType)) ::Oculus::Platform::SdkAccountType  AccountType;

/// @brief Field UserId offset 0x18
 __declspec(property(get=__get_UserId, put=__set_UserId)) uint64_t  UserId;

constexpr void __set_AccountType(::Oculus::Platform::SdkAccountType  value) ;

constexpr ::Oculus::Platform::SdkAccountType& __get_AccountType() ;

constexpr ::Oculus::Platform::SdkAccountType const& __get_AccountType() const;

constexpr void __set_UserId(uint64_t  value) ;

constexpr uint64_t& __get_UserId() ;

constexpr uint64_t const& __get_UserId() const;

static inline ::Oculus::Platform::Models::SdkAccount* New_ctor(::cordl_internals::intptr_t  o) ;

/// @brief Method .ctor addr 0x2708b4c size 0x88 virtual false final false
inline void _ctor(::cordl_internals::intptr_t  o) ;

// Ctor Parameters [CppParam { name: "", ty: "SdkAccount", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SdkAccount(SdkAccount && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SdkAccount", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SdkAccount(SdkAccount const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SdkAccount()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Oculus::Platform::Models::SdkAccount, 0x20>, "Size mismatch!");

} // namespace end def Oculus::Platform::Models
NEED_NO_BOX(::Oculus::Platform::Models::SdkAccount);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Models::SdkAccount*, "Oculus.Platform.Models", "SdkAccount");
