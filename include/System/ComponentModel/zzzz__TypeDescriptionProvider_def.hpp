#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/ComponentModel/zzzz__CustomTypeDescriptor_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(TypeDescriptionProvider)
namespace System {
class Type;
}
namespace System::Collections {
class IDictionary;
}
namespace System::ComponentModel {
class ICustomTypeDescriptor;
}
namespace System {
class Object;
}
namespace System::ComponentModel {
class IExtenderProvider;
}
namespace System::ComponentModel {
class __TypeDescriptionProvider__EmptyCustomTypeDescriptor;
}
// Forward declare root types
namespace System::ComponentModel {
class TypeDescriptionProvider;
}
namespace System::ComponentModel {
class __TypeDescriptionProvider__EmptyCustomTypeDescriptor;
}
// Write type traits
MARK_REF_PTR_T(::System::ComponentModel::TypeDescriptionProvider);
MARK_REF_PTR_T(::System::ComponentModel::__TypeDescriptionProvider__EmptyCustomTypeDescriptor);
// Type: ::EmptyCustomTypeDescriptor
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9414))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9459))
// CS Name: ::TypeDescriptionProvider::EmptyCustomTypeDescriptor*
class CORDL_TYPE __TypeDescriptionProvider__EmptyCustomTypeDescriptor : public ::System::ComponentModel::CustomTypeDescriptor {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x18};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x18 - sizeof(::System::ComponentModel::CustomTypeDescriptor)]{};

static inline ::System::ComponentModel::__TypeDescriptionProvider__EmptyCustomTypeDescriptor* New_ctor() ;

/// @brief Method .ctor addr 0x291904c size 0x8 virtual false final false
inline void _ctor() ;

// Ctor Parameters [CppParam { name: "", ty: "__TypeDescriptionProvider__EmptyCustomTypeDescriptor", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__TypeDescriptionProvider__EmptyCustomTypeDescriptor(__TypeDescriptionProvider__EmptyCustomTypeDescriptor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__TypeDescriptionProvider__EmptyCustomTypeDescriptor", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__TypeDescriptionProvider__EmptyCustomTypeDescriptor(__TypeDescriptionProvider__EmptyCustomTypeDescriptor const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __TypeDescriptionProvider__EmptyCustomTypeDescriptor()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::__TypeDescriptionProvider__EmptyCustomTypeDescriptor, 0x18>, "Size mismatch!");

} // namespace end def System::ComponentModel
// Type: System.ComponentModel::TypeDescriptionProvider
namespace System::ComponentModel {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9460))
// CS Name: ::System.ComponentModel::TypeDescriptionProvider*
class CORDL_TYPE TypeDescriptionProvider : public ::System::Object {
public:
// Declarations
using EmptyCustomTypeDescriptor = ::System::ComponentModel::__TypeDescriptionProvider__EmptyCustomTypeDescriptor;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x20};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x20 - sizeof(::System::Object)]{};

/// @brief Field _parent offset 0x10
 __declspec(property(get=__get__parent, put=__set__parent)) ::System::ComponentModel::TypeDescriptionProvider*  _parent;

/// @brief Field _emptyDescriptor offset 0x18
 __declspec(property(get=__get__emptyDescriptor, put=__set__emptyDescriptor)) ::System::ComponentModel::__TypeDescriptionProvider__EmptyCustomTypeDescriptor*  _emptyDescriptor;

constexpr void __set__parent(::System::ComponentModel::TypeDescriptionProvider*  value) ;

constexpr ::System::ComponentModel::TypeDescriptionProvider* __get__parent() ;

constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::TypeDescriptionProvider*> __get__parent() const;

constexpr void __set__emptyDescriptor(::System::ComponentModel::__TypeDescriptionProvider__EmptyCustomTypeDescriptor*  value) ;

constexpr ::System::ComponentModel::__TypeDescriptionProvider__EmptyCustomTypeDescriptor* __get__emptyDescriptor() ;

constexpr ::cordl_internals::to_const_pointer<::System::ComponentModel::__TypeDescriptionProvider__EmptyCustomTypeDescriptor*> __get__emptyDescriptor() const;

static inline ::System::ComponentModel::TypeDescriptionProvider* New_ctor() ;

/// @brief Method .ctor addr 0x2918f9c size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method GetCache addr 0x2918fa4 size 0x18 virtual true final false
inline ::System::Collections::IDictionary* GetCache(::System::Object*  instance) ;

/// @brief Method GetExtendedTypeDescriptor addr 0x2918fbc size 0x90 virtual true final false
inline ::System::ComponentModel::ICustomTypeDescriptor* GetExtendedTypeDescriptor(::System::Object*  instance) ;

/// @brief Method GetExtenderProviders addr 0x2919054 size 0xf4 virtual true final false
inline ::ArrayW<::System::ComponentModel::IExtenderProvider*,::Array<::System::ComponentModel::IExtenderProvider*>*> GetExtenderProviders(::System::Object*  instance) ;

/// @brief Method GetReflectionType addr 0x2919148 size 0x10 virtual false final false
inline ::System::Type* GetReflectionType(::System::Type*  objectType) ;

/// @brief Method GetReflectionType addr 0x2919158 size 0x1c virtual true final false
inline ::System::Type* GetReflectionType(::System::Type*  objectType, ::System::Object*  instance) ;

/// @brief Method GetTypeDescriptor addr 0x2919174 size 0x10 virtual false final false
inline ::System::ComponentModel::ICustomTypeDescriptor* GetTypeDescriptor(::System::Type*  objectType) ;

/// @brief Method GetTypeDescriptor addr 0x2919184 size 0x8c virtual false final false
inline ::System::ComponentModel::ICustomTypeDescriptor* GetTypeDescriptor(::System::Object*  instance) ;

/// @brief Method GetTypeDescriptor addr 0x2919210 size 0xa4 virtual true final false
inline ::System::ComponentModel::ICustomTypeDescriptor* GetTypeDescriptor(::System::Type*  objectType, ::System::Object*  instance) ;

// Ctor Parameters [CppParam { name: "", ty: "TypeDescriptionProvider", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
TypeDescriptionProvider(TypeDescriptionProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TypeDescriptionProvider", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
TypeDescriptionProvider(TypeDescriptionProvider const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 TypeDescriptionProvider()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::ComponentModel::TypeDescriptionProvider, 0x20>, "Size mismatch!");

} // namespace end def System::ComponentModel
NEED_NO_BOX(::System::ComponentModel::TypeDescriptionProvider);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::TypeDescriptionProvider*, "System.ComponentModel", "TypeDescriptionProvider");
NEED_NO_BOX(::System::ComponentModel::__TypeDescriptionProvider__EmptyCustomTypeDescriptor);
DEFINE_IL2CPP_ARG_TYPE(::System::ComponentModel::__TypeDescriptionProvider__EmptyCustomTypeDescriptor*, "System.ComponentModel", "TypeDescriptionProvider/EmptyCustomTypeDescriptor");
