#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(DefaultCertificatePolicy)
// Forward declare root types
namespace System::Net {
class DefaultCertificatePolicy;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::DefaultCertificatePolicy);
// Type: System.Net::DefaultCertificatePolicy
namespace System::Net {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9158))
// CS Name: ::System.Net::DefaultCertificatePolicy*
class CORDL_TYPE DefaultCertificatePolicy : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

// Ctor Parameters [CppParam { name: "", ty: "DefaultCertificatePolicy", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DefaultCertificatePolicy(DefaultCertificatePolicy && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DefaultCertificatePolicy", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DefaultCertificatePolicy(DefaultCertificatePolicy const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 DefaultCertificatePolicy()  = default;
public:

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::DefaultCertificatePolicy, 0x10>, "Size mismatch!");

} // namespace end def System::Net
NEED_NO_BOX(::System::Net::DefaultCertificatePolicy);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::DefaultCertificatePolicy*, "System.Net", "DefaultCertificatePolicy");
