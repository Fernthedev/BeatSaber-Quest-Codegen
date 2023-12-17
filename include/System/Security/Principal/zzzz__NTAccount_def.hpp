#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Security/Principal/zzzz__IdentityReference_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(NTAccount)
namespace System::Security::Principal {
class IdentityReference;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Security::Principal {
class NTAccount;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Principal::NTAccount);
// Type: System.Security.Principal::NTAccount
namespace System::Security::Principal {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(3000))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3001))
// CS Name: ::System.Security.Principal::NTAccount*
class CORDL_TYPE NTAccount : public ::System::Security::Principal::IdentityReference {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Security::Principal::IdentityReference)]{};

/// @brief Field _value offset 0x10
 __declspec(property(get=__get__value, put=__set__value)) ::StringW  _value;

 __declspec(property(get=get_Value)) ::StringW  Value;

constexpr void __set__value(::StringW  value) ;

constexpr ::StringW& __get__value() ;

constexpr ::StringW const& __get__value() const;

static inline ::System::Security::Principal::NTAccount* New_ctor(::StringW  name) ;

/// @brief Method .ctor addr 0x2476e94 size 0xe8 virtual false final false
inline void _ctor(::StringW  name) ;

/// @brief Method get_Value addr 0x2476f7c size 0x8 virtual true final false
inline ::StringW get_Value() ;

/// @brief Method Equals addr 0x2476f84 size 0x98 virtual true final false
inline bool Equals(::System::Object*  o) ;

/// @brief Method GetHashCode addr 0x2477084 size 0x28 virtual true final false
inline int32_t GetHashCode() ;

/// @brief Method ToString addr 0x24770ac size 0xc virtual true final false
inline ::StringW ToString() ;

/// @brief Method Translate addr 0x24770b8 size 0x22c virtual true final false
inline ::System::Security::Principal::IdentityReference* Translate(::System::Type*  targetType) ;

/// @brief Method op_Equality addr 0x247701c size 0x68 virtual false final false
static inline bool op_Equality(::System::Security::Principal::NTAccount*  left, ::System::Security::Principal::NTAccount*  right) ;

// Ctor Parameters [CppParam { name: "", ty: "NTAccount", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
NTAccount(NTAccount && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NTAccount", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
NTAccount(NTAccount const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 NTAccount()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Principal::NTAccount, 0x18>, "Size mismatch!");

} // namespace end def System::Security::Principal
NEED_NO_BOX(::System::Security::Principal::NTAccount);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Principal::NTAccount*, "System.Security.Principal", "NTAccount");
