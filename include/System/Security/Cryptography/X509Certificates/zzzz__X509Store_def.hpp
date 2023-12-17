#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(X509Store)
namespace System {
class IDisposable;
}
namespace System::Security::Cryptography::X509Certificates {
struct StoreLocation;
}
namespace System::Security::Cryptography::X509Certificates {
struct StoreName;
}
namespace Mono::Security::X509 {
class X509Stores;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate2Collection;
}
namespace System::Security::Cryptography::X509Certificates {
struct OpenFlags;
}
namespace Mono::Security::X509 {
class X509Store;
}
// Forward declare root types
namespace System::Security::Cryptography::X509Certificates {
class X509Store;
}
// Write type traits
MARK_REF_PTR_T(::System::Security::Cryptography::X509Certificates::X509Store);
// Type: System.Security.Cryptography.X509Certificates::X509Store
namespace System::Security::Cryptography::X509Certificates {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9016))
// CS Name: ::System.Security.Cryptography.X509Certificates::X509Store*
class CORDL_TYPE X509Store : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::System::Object)]{};

/// @brief Field _name offset 0x10
 __declspec(property(get=__get__name, put=__set__name)) ::StringW  _name;

/// @brief Field _location offset 0x18
 __declspec(property(get=__get__location, put=__set__location)) ::System::Security::Cryptography::X509Certificates::StoreLocation  _location;

/// @brief Field list offset 0x20
 __declspec(property(get=__get_list, put=__set_list)) ::System::Security::Cryptography::X509Certificates::X509Certificate2Collection*  list;

/// @brief Field _flags offset 0x28
 __declspec(property(get=__get__flags, put=__set__flags)) ::System::Security::Cryptography::X509Certificates::OpenFlags  _flags;

/// @brief Field store offset 0x30
 __declspec(property(get=__get_store, put=__set_store)) ::Mono::Security::X509::X509Store*  store;

 __declspec(property(get=get_Certificates)) ::System::Security::Cryptography::X509Certificates::X509Certificate2Collection*  Certificates;

 __declspec(property(get=get_Factory)) ::Mono::Security::X509::X509Stores*  Factory;

 __declspec(property(get=get_Store)) ::Mono::Security::X509::X509Store*  Store;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

constexpr void __set__name(::StringW  value) ;

constexpr ::StringW& __get__name() ;

constexpr ::StringW const& __get__name() const;

constexpr void __set__location(::System::Security::Cryptography::X509Certificates::StoreLocation  value) ;

constexpr ::System::Security::Cryptography::X509Certificates::StoreLocation& __get__location() ;

constexpr ::System::Security::Cryptography::X509Certificates::StoreLocation const& __get__location() const;

constexpr void __set_list(::System::Security::Cryptography::X509Certificates::X509Certificate2Collection*  value) ;

constexpr ::System::Security::Cryptography::X509Certificates::X509Certificate2Collection* __get_list() ;

constexpr ::cordl_internals::to_const_pointer<::System::Security::Cryptography::X509Certificates::X509Certificate2Collection*> __get_list() const;

constexpr void __set__flags(::System::Security::Cryptography::X509Certificates::OpenFlags  value) ;

constexpr ::System::Security::Cryptography::X509Certificates::OpenFlags& __get__flags() ;

constexpr ::System::Security::Cryptography::X509Certificates::OpenFlags const& __get__flags() const;

constexpr void __set_store(::Mono::Security::X509::X509Store*  value) ;

constexpr ::Mono::Security::X509::X509Store* __get_store() ;

constexpr ::cordl_internals::to_const_pointer<::Mono::Security::X509::X509Store*> __get_store() const;

static inline ::System::Security::Cryptography::X509Certificates::X509Store* New_ctor(::System::Security::Cryptography::X509Certificates::StoreName  storeName, ::System::Security::Cryptography::X509Certificates::StoreLocation  storeLocation) ;

/// @brief Method .ctor addr 0x298615c size 0x138 virtual false final false
inline void _ctor(::System::Security::Cryptography::X509Certificates::StoreName  storeName, ::System::Security::Cryptography::X509Certificates::StoreLocation  storeLocation) ;

/// @brief Method get_Certificates addr 0x2986294 size 0x88 virtual false final false
inline ::System::Security::Cryptography::X509Certificates::X509Certificate2Collection* get_Certificates() ;

/// @brief Method get_Factory addr 0x298631c size 0x1c virtual false final false
inline ::Mono::Security::X509::X509Stores* get_Factory() ;

/// @brief Method get_Store addr 0x2986338 size 0x8 virtual false final false
inline ::Mono::Security::X509::X509Store* get_Store() ;

/// @brief Method Close addr 0x2986340 size 0x1c virtual false final false
inline void Close() ;

/// @brief Method Dispose addr 0x298635c size 0x1c virtual true final true
inline void Dispose() ;

/// @brief Method Open addr 0x2986378 size 0x3fc virtual false final false
inline void Open(::System::Security::Cryptography::X509Certificates::OpenFlags  flags) ;

// Ctor Parameters [CppParam { name: "", ty: "X509Store", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
X509Store(X509Store && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "X509Store", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
X509Store(X509Store const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 X509Store()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Security::Cryptography::X509Certificates::X509Store, 0x38>, "Size mismatch!");

} // namespace end def System::Security::Cryptography::X509Certificates
NEED_NO_BOX(::System::Security::Cryptography::X509Certificates::X509Store);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::X509Certificates::X509Store*, "System.Security.Cryptography.X509Certificates", "X509Store");
