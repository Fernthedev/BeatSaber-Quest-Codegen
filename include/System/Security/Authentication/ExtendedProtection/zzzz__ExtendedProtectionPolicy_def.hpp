#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ExtendedProtectionPolicy)
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System::Security::Authentication::ExtendedProtection {
struct PolicyEnforcement;
}
// Forward declare root types
namespace System::Security::Authentication::ExtendedProtection {
class ExtendedProtectionPolicy;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicy);
// Type: System.Security.Authentication.ExtendedProtection::ExtendedProtectionPolicy
namespace System::Security::Authentication::ExtendedProtection {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8966))
// CS Name: ::System.Security.Authentication.ExtendedProtection::ExtendedProtectionPolicy*
class CORDL_TYPE ExtendedProtectionPolicy : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr operator  ::System::Runtime::Serialization::ISerializable*() noexcept;

static inline ::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicy* New_ctor(::System::Security::Authentication::ExtendedProtection::PolicyEnforcement  policyEnforcement) ;

/// @brief Method .ctor addr 0x29742e4 size 0x8 virtual false final false
inline void _ctor(::System::Security::Authentication::ExtendedProtection::PolicyEnforcement  policyEnforcement) ;

static inline ::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicy* New_ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method .ctor addr 0x29742ec size 0x48 virtual false final false
inline void _ctor(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

/// @brief Method ToString addr 0x2974334 size 0x8 virtual true final false
inline ::StringW ToString() ;

/// @brief Method System.Runtime.Serialization.ISerializable.GetObjectData addr 0x297433c size 0x40 virtual true final true
inline void System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo*  info, ::System::Runtime::Serialization::StreamingContext  context) ;

// Ctor Parameters [CppParam { name: "", ty: "ExtendedProtectionPolicy", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ExtendedProtectionPolicy(ExtendedProtectionPolicy && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ExtendedProtectionPolicy", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ExtendedProtectionPolicy(ExtendedProtectionPolicy const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ExtendedProtectionPolicy()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicy, 0x10>, "Size mismatch!");

} // namespace end def System::Security::Authentication::ExtendedProtection
NEED_NO_BOX(::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicy);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicy*, "System.Security.Authentication.ExtendedProtection", "ExtendedProtectionPolicy");
