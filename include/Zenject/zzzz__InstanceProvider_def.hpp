#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
CORDL_MODULE_EXPORT(InstanceProvider)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Zenject {
class InjectContext;
}
namespace Zenject {
class DiContainer;
}
namespace System {
class Action;
}
namespace System {
class Type;
}
namespace Zenject {
class IProvider;
}
namespace Zenject {
struct TypeValuePair;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Zenject {
class InstanceProvider;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::InstanceProvider);
// Type: Zenject::InstanceProvider
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11203))
// CS Name: ::Zenject::InstanceProvider*
class CORDL_TYPE InstanceProvider : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field _instance offset 0x10
 __declspec(property(get=__get__instance, put=__set__instance)) ::System::Object*  _instance;

/// @brief Field _instanceType offset 0x18
 __declspec(property(get=__get__instanceType, put=__set__instanceType)) ::System::Type*  _instanceType;

/// @brief Field _container offset 0x20
 __declspec(property(get=__get__container, put=__set__container)) ::Zenject::DiContainer*  _container;

 __declspec(property(get=get_IsCached)) bool  IsCached;

 __declspec(property(get=get_TypeVariesBasedOnMemberType)) bool  TypeVariesBasedOnMemberType;

/// @brief Convert operator to "::Zenject::IProvider"
constexpr operator  ::Zenject::IProvider*() noexcept;

constexpr void __set__instance(::System::Object*  value) ;

constexpr ::System::Object* __get__instance() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get__instance() const;

constexpr void __set__instanceType(::System::Type*  value) ;

constexpr ::System::Type* __get__instanceType() ;

constexpr ::cordl_internals::to_const_pointer<::System::Type*> __get__instanceType() const;

constexpr void __set__container(::Zenject::DiContainer*  value) ;

constexpr ::Zenject::DiContainer* __get__container() ;

constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> __get__container() const;

static inline ::Zenject::InstanceProvider* New_ctor(::System::Type*  instanceType, ::System::Object*  instance, ::Zenject::DiContainer*  container) ;

/// @brief Method .ctor addr 0x2f07990 size 0x3c virtual false final false
inline void _ctor(::System::Type*  instanceType, ::System::Object*  instance, ::Zenject::DiContainer*  container) ;

/// @brief Method get_IsCached addr 0x2f079cc size 0x8 virtual true final true
inline bool get_IsCached() ;

/// @brief Method get_TypeVariesBasedOnMemberType addr 0x2f079d4 size 0x8 virtual true final true
inline bool get_TypeVariesBasedOnMemberType() ;

/// @brief Method GetInstanceType addr 0x2f079dc size 0x8 virtual true final true
inline ::System::Type* GetInstanceType(::Zenject::InjectContext*  context) ;

/// @brief Method GetAllInstancesWithInjectSplit addr 0x2f079e4 size 0x1a4 virtual true final true
inline void GetAllInstancesWithInjectSplit(::Zenject::InjectContext*  context, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*  args, ByRef<::System::Action*>  injectAction, ::System::Collections::Generic::List_1<::System::Object*>*  buffer) ;

/// @brief Method <GetAllInstancesWithInjectSplit>b__9_0 addr 0x2f07b88 size 0x54 virtual false final false
inline void _GetAllInstancesWithInjectSplit_b__9_0() ;

// Ctor Parameters [CppParam { name: "", ty: "InstanceProvider", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
InstanceProvider(InstanceProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InstanceProvider", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
InstanceProvider(InstanceProvider const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 InstanceProvider()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::InstanceProvider, 0x28>, "Size mismatch!");

} // namespace end def Zenject
NEED_NO_BOX(::Zenject::InstanceProvider);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::InstanceProvider*, "Zenject", "InstanceProvider");
