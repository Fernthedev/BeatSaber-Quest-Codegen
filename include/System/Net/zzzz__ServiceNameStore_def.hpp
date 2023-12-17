#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ServiceNameStore)
namespace System::Security::Authentication::ExtendedProtection {
class ServiceNameCollection;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace System::Net {
class ServiceNameStore;
}
// Write type traits
MARK_REF_PTR_T(::System::Net::ServiceNameStore);
// Type: System.Net::ServiceNameStore
namespace System::Net {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9109))
// CS Name: ::System.Net::ServiceNameStore*
class CORDL_TYPE ServiceNameStore : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field serviceNames offset 0x10
 __declspec(property(get=__get_serviceNames, put=__set_serviceNames)) ::System::Collections::Generic::List_1<::StringW>*  serviceNames;

/// @brief Field serviceNameCollection offset 0x18
 __declspec(property(get=__get_serviceNameCollection, put=__set_serviceNameCollection)) ::System::Security::Authentication::ExtendedProtection::ServiceNameCollection*  serviceNameCollection;

constexpr void __set_serviceNames(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr ::System::Collections::Generic::List_1<::StringW>* __get_serviceNames() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::StringW>*> __get_serviceNames() const;

constexpr void __set_serviceNameCollection(::System::Security::Authentication::ExtendedProtection::ServiceNameCollection*  value) ;

constexpr ::System::Security::Authentication::ExtendedProtection::ServiceNameCollection* __get_serviceNameCollection() ;

constexpr ::cordl_internals::to_const_pointer<::System::Security::Authentication::ExtendedProtection::ServiceNameCollection*> __get_serviceNameCollection() const;

static inline ::System::Net::ServiceNameStore* New_ctor() ;

/// @brief Method .ctor addr 0x29a88b0 size 0x80 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "ServiceNameStore", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ServiceNameStore(ServiceNameStore && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ServiceNameStore", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ServiceNameStore(ServiceNameStore const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ServiceNameStore()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Net::ServiceNameStore, 0x20>, "Size mismatch!");

} // namespace end def System::Net
NEED_NO_BOX(::System::Net::ServiceNameStore);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::ServiceNameStore*, "System.Net", "ServiceNameStore");
