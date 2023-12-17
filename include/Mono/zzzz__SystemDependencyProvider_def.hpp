#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SystemDependencyProvider)
namespace System {
class Object;
}
namespace Mono {
class ISystemDependencyProvider;
}
namespace Mono {
class ISystemCertificateProvider;
}
namespace Mono {
class SystemCertificateProvider;
}
namespace Mono {
class X509PalImpl;
}
// Forward declare root types
namespace Mono {
class SystemDependencyProvider;
}
// Write type traits
MARK_REF_PTR_T(::Mono::SystemDependencyProvider);
// Type: Mono::SystemDependencyProvider
namespace Mono {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8751))
// CS Name: ::Mono::SystemDependencyProvider*
class CORDL_TYPE SystemDependencyProvider : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::Object)]{};

/// @brief Field <CertificateProvider>k__BackingField offset 0x10
 __declspec(property(get=__get__CertificateProvider_k__BackingField, put=__set__CertificateProvider_k__BackingField)) ::Mono::SystemCertificateProvider*  _CertificateProvider_k__BackingField;

 __declspec(property(get=Mono_ISystemDependencyProvider_get_CertificateProvider)) ::Mono::ISystemCertificateProvider*  Mono_ISystemDependencyProvider_CertificateProvider;

 __declspec(property(get=get_CertificateProvider)) ::Mono::SystemCertificateProvider*  CertificateProvider;

 __declspec(property(get=get_X509Pal)) ::Mono::X509PalImpl*  X509Pal;

/// @brief Convert operator to "::Mono::ISystemDependencyProvider"
constexpr operator  ::Mono::ISystemDependencyProvider*() noexcept;

static inline void setStaticF_instance(::Mono::SystemDependencyProvider*  value) ;

static inline ::Mono::SystemDependencyProvider* getStaticF_instance() ;

static inline void setStaticF_syncRoot(::System::Object*  value) ;

static inline ::System::Object* getStaticF_syncRoot() ;

constexpr void __set__CertificateProvider_k__BackingField(::Mono::SystemCertificateProvider*  value) ;

constexpr ::Mono::SystemCertificateProvider* __get__CertificateProvider_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::Mono::SystemCertificateProvider*> __get__CertificateProvider_k__BackingField() const;

/// @brief Method get_Instance addr 0x2816b90 size 0x5c virtual false final false
static inline ::Mono::SystemDependencyProvider* get_Instance() ;

/// @brief Method Initialize addr 0x2816bec size 0x154 virtual false final false
static inline void Initialize() ;

/// @brief Method Mono.ISystemDependencyProvider.get_CertificateProvider addr 0x2816dd8 size 0x8 virtual true final true
inline ::Mono::ISystemCertificateProvider* Mono_ISystemDependencyProvider_get_CertificateProvider() ;

/// @brief Method get_CertificateProvider addr 0x2816de0 size 0x8 virtual false final false
inline ::Mono::SystemCertificateProvider* get_CertificateProvider() ;

/// @brief Method get_X509Pal addr 0x2816de8 size 0x18 virtual false final false
inline ::Mono::X509PalImpl* get_X509Pal() ;

static inline ::Mono::SystemDependencyProvider* New_ctor() ;

/// @brief Method .ctor addr 0x2816d40 size 0x98 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "SystemDependencyProvider", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SystemDependencyProvider(SystemDependencyProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SystemDependencyProvider", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SystemDependencyProvider(SystemDependencyProvider const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SystemDependencyProvider()  = default;
public:


// Fields

// Static field instance

// Static field syncRoot


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Mono::SystemDependencyProvider, 0x18>, "Size mismatch!");

} // namespace end def Mono
NEED_NO_BOX(::Mono::SystemDependencyProvider);
DEFINE_IL2CPP_ARG_TYPE(::Mono::SystemDependencyProvider*, "Mono", "SystemDependencyProvider");
