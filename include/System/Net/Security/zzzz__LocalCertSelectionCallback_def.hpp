#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LocalCertSelectionCallback)
namespace System {
class Object;
}
namespace System::Security::Cryptography::X509Certificates {
class X509CertificateCollection;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate;
}
// Forward declare root types
namespace System::Net::Security {
class LocalCertSelectionCallback;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::Security::LocalCertSelectionCallback);
// Type: System.Net.Security::LocalCertSelectionCallback
namespace System::Net::Security {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9370))
// CS Name: ::System.Net.Security::LocalCertSelectionCallback*
class CORDL_TYPE LocalCertSelectionCallback : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x80};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x80 - sizeof(::System::MulticastDelegate)]{};

static inline ::System::Net::Security::LocalCertSelectionCallback* New_ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method .ctor addr 0x28ffc70 size 0xd8 virtual false final false
inline void _ctor(::System::Object*  object, ::cordl_internals::intptr_t  method) ;

/// @brief Method Invoke addr 0x28ffd48 size 0x14 virtual true final false
inline ::System::Security::Cryptography::X509Certificates::X509Certificate* Invoke(::StringW  targetHost, ::System::Security::Cryptography::X509Certificates::X509CertificateCollection*  localCertificates, ::System::Security::Cryptography::X509Certificates::X509Certificate*  remoteCertificate, ::ArrayW<::StringW,::Array<::StringW>*>  acceptableIssuers) ;

// Ctor Parameters [CppParam { name: "", ty: "LocalCertSelectionCallback", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LocalCertSelectionCallback(LocalCertSelectionCallback && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LocalCertSelectionCallback", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LocalCertSelectionCallback(LocalCertSelectionCallback const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 LocalCertSelectionCallback()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::Security::LocalCertSelectionCallback, 0x80>, "Size mismatch!");

} // namespace end def System::Net::Security
NEED_NO_BOX(::System::Net::Security::LocalCertSelectionCallback);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Security::LocalCertSelectionCallback*, "System.Net.Security", "LocalCertSelectionCallback");
