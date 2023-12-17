#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(ScriptableObjectResourceProvider)
namespace System {
class Action;
}
namespace Zenject {
class __ScriptableObjectResourceProvider____c__DisplayClass13_0;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class IProvider;
}
namespace System {
class Type;
}
namespace System {
class Object;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Zenject {
struct TypeValuePair;
}
namespace Zenject {
class InjectContext;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace Zenject {
class InjectTypeInfo;
}
// Forward declare root types
namespace Zenject {
class ScriptableObjectResourceProvider;
}
namespace Zenject {
class __ScriptableObjectResourceProvider____c__DisplayClass13_0;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::ScriptableObjectResourceProvider);
MARK_REF_PTR_T(::Zenject::__ScriptableObjectResourceProvider____c__DisplayClass13_0);
// Type: ::<>c__DisplayClass13_0
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11239))
// CS Name: ::ScriptableObjectResourceProvider::<>c__DisplayClass13_0*
class CORDL_TYPE __ScriptableObjectResourceProvider____c__DisplayClass13_0 : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field buffer offset 0x10
 __declspec(property(get=__get_buffer, put=__set_buffer)) ::System::Collections::Generic::List_1<::System::Object*>*  buffer;

/// @brief Field <>4__this offset 0x18
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::Zenject::ScriptableObjectResourceProvider*  __4__this;

/// @brief Field args offset 0x20
 __declspec(property(get=__get_args, put=__set_args)) ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*  args;

/// @brief Field context offset 0x28
 __declspec(property(get=__get_context, put=__set_context)) ::Zenject::InjectContext*  context;

constexpr void __set_buffer(::System::Collections::Generic::List_1<::System::Object*>*  value) ;

constexpr ::System::Collections::Generic::List_1<::System::Object*>* __get_buffer() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::System::Object*>*> __get_buffer() const;

constexpr void __set___4__this(::Zenject::ScriptableObjectResourceProvider*  value) ;

constexpr ::Zenject::ScriptableObjectResourceProvider* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::Zenject::ScriptableObjectResourceProvider*> __get___4__this() const;

constexpr void __set_args(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*  value) ;

constexpr ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* __get_args() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*> __get_args() const;

constexpr void __set_context(::Zenject::InjectContext*  value) ;

constexpr ::Zenject::InjectContext* __get_context() ;

constexpr ::cordl_internals::to_const_pointer<::Zenject::InjectContext*> __get_context() const;

static inline ::Zenject::__ScriptableObjectResourceProvider____c__DisplayClass13_0* New_ctor() ;

/// @brief Method .ctor addr 0x2f0abfc size 0x8 virtual false final false
inline void _ctor() ;

/// @brief Method <GetAllInstancesWithInjectSplit>b__0 addr 0x2f0ac04 size 0x190 virtual false final false
inline void _GetAllInstancesWithInjectSplit_b__0() ;

/// @brief Method __zenCreate addr 0x2f0ad94 size 0x5c virtual false final false
static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2f0adf0 size 0x1c0 virtual false final false
static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() ;

// Ctor Parameters [CppParam { name: "", ty: "__ScriptableObjectResourceProvider____c__DisplayClass13_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__ScriptableObjectResourceProvider____c__DisplayClass13_0(__ScriptableObjectResourceProvider____c__DisplayClass13_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__ScriptableObjectResourceProvider____c__DisplayClass13_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__ScriptableObjectResourceProvider____c__DisplayClass13_0(__ScriptableObjectResourceProvider____c__DisplayClass13_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __ScriptableObjectResourceProvider____c__DisplayClass13_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__ScriptableObjectResourceProvider____c__DisplayClass13_0, 0x30>, "Size mismatch!");

} // namespace end def Zenject
// Type: Zenject::ScriptableObjectResourceProvider
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11240))
// CS Name: ::Zenject::ScriptableObjectResourceProvider*
class CORDL_TYPE ScriptableObjectResourceProvider : public ::System::Object {
public:
// Declarations
using __c__DisplayClass13_0 = ::Zenject::__ScriptableObjectResourceProvider____c__DisplayClass13_0;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x48};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x48 - sizeof(::System::Object)]{};

/// @brief Field _container offset 0x10
 __declspec(property(get=__get__container, put=__set__container)) ::Zenject::DiContainer*  _container;

/// @brief Field _resourceType offset 0x18
 __declspec(property(get=__get__resourceType, put=__set__resourceType)) ::System::Type*  _resourceType;

/// @brief Field _resourcePath offset 0x20
 __declspec(property(get=__get__resourcePath, put=__set__resourcePath)) ::StringW  _resourcePath;

/// @brief Field _extraArguments offset 0x28
 __declspec(property(get=__get__extraArguments, put=__set__extraArguments)) ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*  _extraArguments;

/// @brief Field _createNew offset 0x30
 __declspec(property(get=__get__createNew, put=__set__createNew)) bool  _createNew;

/// @brief Field _concreteIdentifier offset 0x38
 __declspec(property(get=__get__concreteIdentifier, put=__set__concreteIdentifier)) ::System::Object*  _concreteIdentifier;

/// @brief Field _instantiateCallback offset 0x40
 __declspec(property(get=__get__instantiateCallback, put=__set__instantiateCallback)) ::System::Action_2<::Zenject::InjectContext*,::System::Object*>*  _instantiateCallback;

 __declspec(property(get=get_IsCached)) bool  IsCached;

 __declspec(property(get=get_TypeVariesBasedOnMemberType)) bool  TypeVariesBasedOnMemberType;

/// @brief Convert operator to "::Zenject::IProvider"
constexpr operator  ::Zenject::IProvider*() noexcept;

constexpr void __set__container(::Zenject::DiContainer*  value) ;

constexpr ::Zenject::DiContainer* __get__container() ;

constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> __get__container() const;

constexpr void __set__resourceType(::System::Type*  value) ;

constexpr ::System::Type* __get__resourceType() ;

constexpr ::cordl_internals::to_const_pointer<::System::Type*> __get__resourceType() const;

constexpr void __set__resourcePath(::StringW  value) ;

constexpr ::StringW& __get__resourcePath() ;

constexpr ::StringW const& __get__resourcePath() const;

constexpr void __set__extraArguments(::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*  value) ;

constexpr ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>* __get__extraArguments() ;

constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*> __get__extraArguments() const;

constexpr void __set__createNew(bool  value) ;

constexpr bool& __get__createNew() ;

constexpr bool const& __get__createNew() const;

constexpr void __set__concreteIdentifier(::System::Object*  value) ;

constexpr ::System::Object* __get__concreteIdentifier() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get__concreteIdentifier() const;

constexpr void __set__instantiateCallback(::System::Action_2<::Zenject::InjectContext*,::System::Object*>*  value) ;

constexpr ::System::Action_2<::Zenject::InjectContext*,::System::Object*>* __get__instantiateCallback() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_2<::Zenject::InjectContext*,::System::Object*>*> __get__instantiateCallback() const;

static inline ::Zenject::ScriptableObjectResourceProvider* New_ctor(::StringW  resourcePath, ::System::Type*  resourceType, ::Zenject::DiContainer*  container, ::System::Collections::Generic::IEnumerable_1<::Zenject::TypeValuePair>*  extraArguments, bool  createNew, ::System::Object*  concreteIdentifier, ::System::Action_2<::Zenject::InjectContext*,::System::Object*>*  instantiateCallback) ;

/// @brief Method .ctor addr 0x2f0a8bc size 0xc8 virtual false final false
inline void _ctor(::StringW  resourcePath, ::System::Type*  resourceType, ::Zenject::DiContainer*  container, ::System::Collections::Generic::IEnumerable_1<::Zenject::TypeValuePair>*  extraArguments, bool  createNew, ::System::Object*  concreteIdentifier, ::System::Action_2<::Zenject::InjectContext*,::System::Object*>*  instantiateCallback) ;

/// @brief Method get_IsCached addr 0x2f0a984 size 0x8 virtual true final true
inline bool get_IsCached() ;

/// @brief Method get_TypeVariesBasedOnMemberType addr 0x2f0a98c size 0x8 virtual true final true
inline bool get_TypeVariesBasedOnMemberType() ;

/// @brief Method GetInstanceType addr 0x2f0a994 size 0x8 virtual true final true
inline ::System::Type* GetInstanceType(::Zenject::InjectContext*  context) ;

/// @brief Method GetAllInstancesWithInjectSplit addr 0x2f0a99c size 0x260 virtual true final true
inline void GetAllInstancesWithInjectSplit(::Zenject::InjectContext*  context, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*  args, ByRef<::System::Action*>  injectAction, ::System::Collections::Generic::List_1<::System::Object*>*  buffer) ;

// Ctor Parameters [CppParam { name: "", ty: "ScriptableObjectResourceProvider", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ScriptableObjectResourceProvider(ScriptableObjectResourceProvider && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ScriptableObjectResourceProvider", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ScriptableObjectResourceProvider(ScriptableObjectResourceProvider const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 ScriptableObjectResourceProvider()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::ScriptableObjectResourceProvider, 0x48>, "Size mismatch!");

} // namespace end def Zenject
NEED_NO_BOX(::Zenject::ScriptableObjectResourceProvider);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::ScriptableObjectResourceProvider*, "Zenject", "ScriptableObjectResourceProvider");
NEED_NO_BOX(::Zenject::__ScriptableObjectResourceProvider____c__DisplayClass13_0);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__ScriptableObjectResourceProvider____c__DisplayClass13_0*, "Zenject", "ScriptableObjectResourceProvider/<>c__DisplayClass13_0");
