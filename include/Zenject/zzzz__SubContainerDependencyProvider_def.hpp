#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
CORDL_MODULE_EXPORT(SubContainerDependencyProvider)
namespace Zenject {
class IProvider;
}
namespace Zenject {
struct TypeValuePair;
}
namespace Zenject {
class ISubContainerCreator;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class Object;
}
namespace System {
class Action;
}
namespace Zenject {
class DiContainer;
}
namespace System {
class Type;
}
namespace Zenject {
class InjectContext;
}
// Forward declare root types
namespace Zenject {
class SubContainerDependencyProvider;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::SubContainerDependencyProvider);
// Type: Zenject::SubContainerDependencyProvider
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11297))
// CS Name: ::Zenject::SubContainerDependencyProvider*
class CORDL_TYPE SubContainerDependencyProvider : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field _subContainerCreator offset 0x10
 __declspec(property(get=__get__subContainerCreator, put=__set__subContainerCreator)) ::Zenject::ISubContainerCreator*  _subContainerCreator;

/// @brief Field _dependencyType offset 0x18
 __declspec(property(get=__get__dependencyType, put=__set__dependencyType)) ::System::Type*  _dependencyType;

/// @brief Field _identifier offset 0x20
 __declspec(property(get=__get__identifier, put=__set__identifier)) ::System::Object*  _identifier;

/// @brief Field _resolveAll offset 0x28
 __declspec(property(get=__get__resolveAll, put=__set__resolveAll)) bool  _resolveAll;

 __declspec(property(get=get_IsCached)) bool  IsCached;

 __declspec(property(get=get_TypeVariesBasedOnMemberType)) bool  TypeVariesBasedOnMemberType;

/// @brief Convert operator to "::Zenject::IProvider"
constexpr operator  ::Zenject::IProvider*() noexcept;

constexpr void __set__subContainerCreator(::Zenject::ISubContainerCreator*  value) ;

constexpr ::Zenject::ISubContainerCreator* __get__subContainerCreator() ;

constexpr ::cordl_internals::to_const_pointer<::Zenject::ISubContainerCreator*> __get__subContainerCreator() const;

constexpr void __set__dependencyType(::System::Type*  value) ;

constexpr ::System::Type* __get__dependencyType() ;

constexpr ::cordl_internals::to_const_pointer<::System::Type*> __get__dependencyType() const;

constexpr void __set__identifier(::System::Object*  value) ;

constexpr ::System::Object* __get__identifier() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get__identifier() const;

constexpr void __set__resolveAll(bool  value) ;

constexpr bool& __get__resolveAll() ;

constexpr bool const& __get__resolveAll() const;

static inline ::Zenject::SubContainerDependencyProvider* New_ctor(::System::Type*  dependencyType, ::System::Object*  identifier, ::Zenject::ISubContainerCreator*  subContainerCreator, bool  resolveAll) ;

/// @brief Method .ctor addr 0x2f0d680 size 0x44 virtual false final false
inline void _ctor(::System::Type*  dependencyType, ::System::Object*  identifier, ::Zenject::ISubContainerCreator*  subContainerCreator, bool  resolveAll) ;

/// @brief Method get_IsCached addr 0x2f0d6c4 size 0x8 virtual true final true
inline bool get_IsCached() ;

/// @brief Method get_TypeVariesBasedOnMemberType addr 0x2f0d6cc size 0x8 virtual true final true
inline bool get_TypeVariesBasedOnMemberType() ;

/// @brief Method GetInstanceType addr 0x2f0d6d4 size 0x8 virtual true final true
inline ::System::Type* GetInstanceType(::Zenject::InjectContext*  context) ;

/// @brief Method CreateSubContext addr 0x2f0d6dc size 0x3c virtual false final false
inline ::Zenject::InjectContext* CreateSubContext(::Zenject::InjectContext*  parent, ::Zenject::DiContainer*  subContainer) ;

/// @brief Method GetAllInstancesWithInjectSplit addr 0x2f0d718 size 0x1a8 virtual true final true
inline void GetAllInstancesWithInjectSplit(::Zenject::InjectContext*  context, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*  args, ByRef<::System::Action*>  injectAction, ::System::Collections::Generic::List_1<::System::Object*>*  buffer) ;

// Ctor Parameters [CppParam { name: "", ty: "SubContainerDependencyProvider", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SubContainerDependencyProvider(SubContainerDependencyProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SubContainerDependencyProvider", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SubContainerDependencyProvider(SubContainerDependencyProvider const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SubContainerDependencyProvider()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::SubContainerDependencyProvider, 0x30>, "Size mismatch!");

} // namespace end def Zenject
NEED_NO_BOX(::Zenject::SubContainerDependencyProvider);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::SubContainerDependencyProvider*, "Zenject", "SubContainerDependencyProvider");
