#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(X509StoreManager)
namespace Mono::Security::X509 {
class X509Stores;
}
namespace Mono::Security::X509 {
class X509CertificateCollection;
}
// Forward declare root types
namespace Mono::Security::X509 {
class X509StoreManager;
}
// Write type traits
MARK_REF_PTR_T(::Mono::Security::X509::X509StoreManager);
// Type: Mono.Security.X509::X509StoreManager
namespace Mono::Security::X509 {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13759))
// CS Name: ::Mono.Security.X509::X509StoreManager*
class CORDL_TYPE X509StoreManager : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x10};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x10 - sizeof(::System::Object)]{};

static inline void setStaticF__userPath(::StringW  value) ;

static inline ::StringW getStaticF__userPath() ;

static inline void setStaticF__localMachinePath(::StringW  value) ;

static inline ::StringW getStaticF__localMachinePath() ;

static inline void setStaticF__userStore(::Mono::Security::X509::X509Stores*  value) ;

static inline ::Mono::Security::X509::X509Stores* getStaticF__userStore() ;

static inline void setStaticF__machineStore(::Mono::Security::X509::X509Stores*  value) ;

static inline ::Mono::Security::X509::X509Stores* getStaticF__machineStore() ;

/// @brief Method get_CurrentUserPath addr 0x23fddbc size 0x100 virtual false final false
static inline ::StringW get_CurrentUserPath() ;

/// @brief Method get_LocalMachinePath addr 0x23fdebc size 0xe8 virtual false final false
static inline ::StringW get_LocalMachinePath() ;

/// @brief Method get_CurrentUser addr 0x23fdfa4 size 0xa0 virtual false final false
static inline ::Mono::Security::X509::X509Stores* get_CurrentUser() ;

/// @brief Method get_LocalMachine addr 0x23fe074 size 0xa0 virtual false final false
static inline ::Mono::Security::X509::X509Stores* get_LocalMachine() ;

/// @brief Method get_TrustedRootCertificates addr 0x23fbf74 size 0xcc virtual false final false
static inline ::Mono::Security::X509::X509CertificateCollection* get_TrustedRootCertificates() ;

// Ctor Parameters [CppParam { name: "", ty: "X509StoreManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
X509StoreManager(X509StoreManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "X509StoreManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
X509StoreManager(X509StoreManager const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 X509StoreManager()  = default;
public:


// Fields

// Static field _userPath

// Static field _localMachinePath

// Static field _userStore

// Static field _machineStore


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::Security::X509::X509StoreManager, 0x10>, "Size mismatch!");

} // namespace end def Mono::Security::X509
NEED_NO_BOX(::Mono::Security::X509::X509StoreManager);
DEFINE_IL2CPP_ARG_TYPE(::Mono::Security::X509::X509StoreManager*, "Mono.Security.X509", "X509StoreManager");
