#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/ComponentModel/zzzz__TypeDescriptionProvider_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(DelegatingTypeDescriptionProvider)
namespace System::ComponentModel {
class TypeDescriptionProvider;
}
namespace System {
class Type;
}
namespace System {
class Object;
}
namespace System::Collections {
class IDictionary;
}
namespace System::ComponentModel {
class ICustomTypeDescriptor;
}
namespace System::ComponentModel {
class IExtenderProvider;
}
// Forward declare root types
namespace System::ComponentModel {
class DelegatingTypeDescriptionProvider;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::DelegatingTypeDescriptionProvider);
// Type: System.ComponentModel::DelegatingTypeDescriptionProvider
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9460))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9419))
// CS Name: ::System.ComponentModel::DelegatingTypeDescriptionProvider*
class CORDL_TYPE DelegatingTypeDescriptionProvider : public ::System::ComponentModel::TypeDescriptionProvider {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::ComponentModel::TypeDescriptionProvider)]{};

/// @brief Field _type offset 0x20
 __declspec(property(get=__get__type, put=__set__type)) ::System::Type*  _type;

 __declspec(property(get=get_Provider)) ::System::ComponentModel::TypeDescriptionProvider*  Provider;

constexpr void __set__type(::System::Type*  value) ;

constexpr ::System::Type* __get__type() ;

constexpr ::cordl_internals::to_const_pointer<::System::Type*> __get__type() const;

static inline ::System::ComponentModel::DelegatingTypeDescriptionProvider* New_ctor(::System::Type*  type) ;

/// @brief Method .ctor addr 0x290e6a0 size 0x28 virtual false final false
inline void _ctor(::System::Type*  type) ;

/// @brief Method get_Provider addr 0x290e6c8 size 0x5c virtual false final false
inline ::System::ComponentModel::TypeDescriptionProvider* get_Provider() ;

/// @brief Method GetCache addr 0x290e724 size 0x28 virtual true final false
inline ::System::Collections::IDictionary* GetCache(::System::Object*  instance) ;

/// @brief Method GetExtendedTypeDescriptor addr 0x290e74c size 0x28 virtual true final false
inline ::System::ComponentModel::ICustomTypeDescriptor* GetExtendedTypeDescriptor(::System::Object*  instance) ;

/// @brief Method GetExtenderProviders addr 0x290e774 size 0x28 virtual true final false
inline ::ArrayW<::System::ComponentModel::IExtenderProvider*,::Array<::System::ComponentModel::IExtenderProvider*>*> GetExtenderProviders(::System::Object*  instance) ;

/// @brief Method GetReflectionType addr 0x290e79c size 0x38 virtual true final false
inline ::System::Type* GetReflectionType(::System::Type*  objectType, ::System::Object*  instance) ;

/// @brief Method GetTypeDescriptor addr 0x290e7d4 size 0x38 virtual true final false
inline ::System::ComponentModel::ICustomTypeDescriptor* GetTypeDescriptor(::System::Type*  objectType, ::System::Object*  instance) ;

// Ctor Parameters [CppParam { name: "", ty: "DelegatingTypeDescriptionProvider", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DelegatingTypeDescriptionProvider(DelegatingTypeDescriptionProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DelegatingTypeDescriptionProvider", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DelegatingTypeDescriptionProvider(DelegatingTypeDescriptionProvider const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 DelegatingTypeDescriptionProvider()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::DelegatingTypeDescriptionProvider, 0x28>, "Size mismatch!");

} // namespace end def System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::DelegatingTypeDescriptionProvider);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::DelegatingTypeDescriptionProvider*, "System.ComponentModel", "DelegatingTypeDescriptionProvider");
