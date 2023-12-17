#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(FactorySubContainerBinderBase_1)
namespace Zenject {
class DiContainer;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace UnityEngine {
class Object;
}
namespace Zenject {
class IProvider;
}
namespace Zenject {
class BindInfo;
}
namespace Zenject {
template<typename TContract>
class __FactorySubContainerBinderBase_1____c__DisplayClass25_0;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
namespace Zenject {
class NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder;
}
namespace Zenject {
template<typename TContract>
class __FactorySubContainerBinderBase_1____c__DisplayClass23_0;
}
namespace Zenject {
template<typename TContract>
class __FactorySubContainerBinderBase_1____c__DisplayClass29_0;
}
namespace Zenject {
template<typename TContract>
class __FactorySubContainerBinderBase_1____c__DisplayClass27_0;
}
namespace Zenject {
class FactoryBindInfo;
}
namespace Zenject {
class ScopeConcreteIdArgConditionCopyNonLazyBinder;
}
namespace Zenject {
class SubContainerCreatorBindInfo;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace Zenject {
class GameObjectCreationParameters;
}
// Forward declare root types
namespace Zenject {
template<typename TContract>
class FactorySubContainerBinderBase_1;
}
namespace Zenject {
template<typename TContract>
class __FactorySubContainerBinderBase_1____c__DisplayClass23_0;
}
namespace Zenject {
template<typename TContract>
class __FactorySubContainerBinderBase_1____c__DisplayClass25_0;
}
namespace Zenject {
template<typename TContract>
class __FactorySubContainerBinderBase_1____c__DisplayClass27_0;
}
namespace Zenject {
template<typename TContract>
class __FactorySubContainerBinderBase_1____c__DisplayClass29_0;
}
namespace Zenject {
template<::il2cpp_utils::il2cpp_reference_type TContract>
class FactorySubContainerBinderBase_1<TContract>;
}
namespace Zenject {
template<::il2cpp_utils::il2cpp_reference_type TContract>
class __FactorySubContainerBinderBase_1____c__DisplayClass23_0<TContract>;
}
namespace Zenject {
template<::il2cpp_utils::il2cpp_reference_type TContract>
class __FactorySubContainerBinderBase_1____c__DisplayClass25_0<TContract>;
}
namespace Zenject {
template<::il2cpp_utils::il2cpp_reference_type TContract>
class __FactorySubContainerBinderBase_1____c__DisplayClass27_0<TContract>;
}
namespace Zenject {
template<::il2cpp_utils::il2cpp_reference_type TContract>
class __FactorySubContainerBinderBase_1____c__DisplayClass29_0<TContract>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::FactorySubContainerBinderBase_1);
MARK_GEN_REF_PTR_T(::Zenject::__FactorySubContainerBinderBase_1____c__DisplayClass23_0);
MARK_GEN_REF_PTR_T(::Zenject::__FactorySubContainerBinderBase_1____c__DisplayClass25_0);
MARK_GEN_REF_PTR_T(::Zenject::__FactorySubContainerBinderBase_1____c__DisplayClass27_0);
MARK_GEN_REF_PTR_T(::Zenject::__FactorySubContainerBinderBase_1____c__DisplayClass29_0);
// Type: ::<>c__DisplayClass23_0
// Type: ::<>c__DisplayClass25_0
// Type: ::<>c__DisplayClass27_0
// Type: ::<>c__DisplayClass29_0
// Type: Zenject::FactorySubContainerBinderBase`1
// Type: ::<>c__DisplayClass23_0
namespace Zenject {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TContract>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(10823))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10823), inst: 2 })
// CS Name: ::FactorySubContainerBinderBase`1::<>c__DisplayClass23_0<TContract>*
class CORDL_TYPE __FactorySubContainerBinderBase_1____c__DisplayClass23_0<TContract> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field <>4__this offset 0x10
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::Zenject::FactorySubContainerBinderBase_1<TContract>*  __4__this;

/// @brief Field subcontainerBindInfo offset 0x18
 __declspec(property(get=__get_subcontainerBindInfo, put=__set_subcontainerBindInfo)) ::Zenject::SubContainerCreatorBindInfo*  subcontainerBindInfo;

/// @brief Field installerType offset 0x20
 __declspec(property(get=__get_installerType, put=__set_installerType)) ::System::Type*  installerType;

constexpr void __set___4__this(::Zenject::FactorySubContainerBinderBase_1<TContract>*  value) ;

constexpr ::Zenject::FactorySubContainerBinderBase_1<TContract>* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::Zenject::FactorySubContainerBinderBase_1<TContract>*> __get___4__this() const;

constexpr void __set_subcontainerBindInfo(::Zenject::SubContainerCreatorBindInfo*  value) ;

constexpr ::Zenject::SubContainerCreatorBindInfo* __get_subcontainerBindInfo() ;

constexpr ::cordl_internals::to_const_pointer<::Zenject::SubContainerCreatorBindInfo*> __get_subcontainerBindInfo() const;

constexpr void __set_installerType(::System::Type*  value) ;

constexpr ::System::Type* __get_installerType() ;

constexpr ::cordl_internals::to_const_pointer<::System::Type*> __get_installerType() const;

static inline ::Zenject::__FactorySubContainerBinderBase_1____c__DisplayClass23_0<TContract>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method <ByInstaller>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Zenject::IProvider* _ByInstaller_b__0(::Zenject::DiContainer*  container) ;

/// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() ;

// Ctor Parameters [CppParam { name: "", ty: "__FactorySubContainerBinderBase_1____c__DisplayClass23_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__FactorySubContainerBinderBase_1____c__DisplayClass23_0(__FactorySubContainerBinderBase_1____c__DisplayClass23_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__FactorySubContainerBinderBase_1____c__DisplayClass23_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__FactorySubContainerBinderBase_1____c__DisplayClass23_0(__FactorySubContainerBinderBase_1____c__DisplayClass23_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __FactorySubContainerBinderBase_1____c__DisplayClass23_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: ::<>c__DisplayClass25_0
namespace Zenject {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TContract>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(10824))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10824), inst: 2 })
// CS Name: ::FactorySubContainerBinderBase`1::<>c__DisplayClass25_0<TContract>*
class CORDL_TYPE __FactorySubContainerBinderBase_1____c__DisplayClass25_0<TContract> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field <>4__this offset 0x10
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::Zenject::FactorySubContainerBinderBase_1<TContract>*  __4__this;

/// @brief Field gameObjectInfo offset 0x18
 __declspec(property(get=__get_gameObjectInfo, put=__set_gameObjectInfo)) ::Zenject::GameObjectCreationParameters*  gameObjectInfo;

/// @brief Field installerType offset 0x20
 __declspec(property(get=__get_installerType, put=__set_installerType)) ::System::Type*  installerType;

constexpr void __set___4__this(::Zenject::FactorySubContainerBinderBase_1<TContract>*  value) ;

constexpr ::Zenject::FactorySubContainerBinderBase_1<TContract>* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::Zenject::FactorySubContainerBinderBase_1<TContract>*> __get___4__this() const;

constexpr void __set_gameObjectInfo(::Zenject::GameObjectCreationParameters*  value) ;

constexpr ::Zenject::GameObjectCreationParameters* __get_gameObjectInfo() ;

constexpr ::cordl_internals::to_const_pointer<::Zenject::GameObjectCreationParameters*> __get_gameObjectInfo() const;

constexpr void __set_installerType(::System::Type*  value) ;

constexpr ::System::Type* __get_installerType() ;

constexpr ::cordl_internals::to_const_pointer<::System::Type*> __get_installerType() const;

static inline ::Zenject::__FactorySubContainerBinderBase_1____c__DisplayClass25_0<TContract>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method <ByNewGameObjectInstaller>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Zenject::IProvider* _ByNewGameObjectInstaller_b__0(::Zenject::DiContainer*  container) ;

/// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() ;

// Ctor Parameters [CppParam { name: "", ty: "__FactorySubContainerBinderBase_1____c__DisplayClass25_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__FactorySubContainerBinderBase_1____c__DisplayClass25_0(__FactorySubContainerBinderBase_1____c__DisplayClass25_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__FactorySubContainerBinderBase_1____c__DisplayClass25_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__FactorySubContainerBinderBase_1____c__DisplayClass25_0(__FactorySubContainerBinderBase_1____c__DisplayClass25_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __FactorySubContainerBinderBase_1____c__DisplayClass25_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: ::<>c__DisplayClass27_0
namespace Zenject {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TContract>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10825)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10825), inst: 2 })
// CS Name: ::FactorySubContainerBinderBase`1::<>c__DisplayClass27_0<TContract>*
class CORDL_TYPE __FactorySubContainerBinderBase_1____c__DisplayClass27_0<TContract> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field <>4__this offset 0x10
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::Zenject::FactorySubContainerBinderBase_1<TContract>*  __4__this;

/// @brief Field prefab offset 0x18
 __declspec(property(get=__get_prefab, put=__set_prefab)) ::UnityEngine::Object*  prefab;

/// @brief Field gameObjectInfo offset 0x20
 __declspec(property(get=__get_gameObjectInfo, put=__set_gameObjectInfo)) ::Zenject::GameObjectCreationParameters*  gameObjectInfo;

/// @brief Field installerType offset 0x28
 __declspec(property(get=__get_installerType, put=__set_installerType)) ::System::Type*  installerType;

constexpr void __set___4__this(::Zenject::FactorySubContainerBinderBase_1<TContract>*  value) ;

constexpr ::Zenject::FactorySubContainerBinderBase_1<TContract>* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::Zenject::FactorySubContainerBinderBase_1<TContract>*> __get___4__this() const;

constexpr void __set_prefab(::UnityEngine::Object*  value) ;

constexpr ::UnityEngine::Object* __get_prefab() ;

constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Object*> __get_prefab() const;

constexpr void __set_gameObjectInfo(::Zenject::GameObjectCreationParameters*  value) ;

constexpr ::Zenject::GameObjectCreationParameters* __get_gameObjectInfo() ;

constexpr ::cordl_internals::to_const_pointer<::Zenject::GameObjectCreationParameters*> __get_gameObjectInfo() const;

constexpr void __set_installerType(::System::Type*  value) ;

constexpr ::System::Type* __get_installerType() ;

constexpr ::cordl_internals::to_const_pointer<::System::Type*> __get_installerType() const;

static inline ::Zenject::__FactorySubContainerBinderBase_1____c__DisplayClass27_0<TContract>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method <ByNewPrefabInstaller>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Zenject::IProvider* _ByNewPrefabInstaller_b__0(::Zenject::DiContainer*  container) ;

/// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() ;

// Ctor Parameters [CppParam { name: "", ty: "__FactorySubContainerBinderBase_1____c__DisplayClass27_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__FactorySubContainerBinderBase_1____c__DisplayClass27_0(__FactorySubContainerBinderBase_1____c__DisplayClass27_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__FactorySubContainerBinderBase_1____c__DisplayClass27_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__FactorySubContainerBinderBase_1____c__DisplayClass27_0(__FactorySubContainerBinderBase_1____c__DisplayClass27_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __FactorySubContainerBinderBase_1____c__DisplayClass27_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: ::<>c__DisplayClass29_0
namespace Zenject {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TContract>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10826)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10826), inst: 2 })
// CS Name: ::FactorySubContainerBinderBase`1::<>c__DisplayClass29_0<TContract>*
class CORDL_TYPE __FactorySubContainerBinderBase_1____c__DisplayClass29_0<TContract> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field <>4__this offset 0x10
 __declspec(property(get=__get___4__this, put=__set___4__this)) ::Zenject::FactorySubContainerBinderBase_1<TContract>*  __4__this;

/// @brief Field resourcePath offset 0x18
 __declspec(property(get=__get_resourcePath, put=__set_resourcePath)) ::StringW  resourcePath;

/// @brief Field gameObjectInfo offset 0x20
 __declspec(property(get=__get_gameObjectInfo, put=__set_gameObjectInfo)) ::Zenject::GameObjectCreationParameters*  gameObjectInfo;

/// @brief Field installerType offset 0x28
 __declspec(property(get=__get_installerType, put=__set_installerType)) ::System::Type*  installerType;

constexpr void __set___4__this(::Zenject::FactorySubContainerBinderBase_1<TContract>*  value) ;

constexpr ::Zenject::FactorySubContainerBinderBase_1<TContract>* __get___4__this() ;

constexpr ::cordl_internals::to_const_pointer<::Zenject::FactorySubContainerBinderBase_1<TContract>*> __get___4__this() const;

constexpr void __set_resourcePath(::StringW  value) ;

constexpr ::StringW& __get_resourcePath() ;

constexpr ::StringW const& __get_resourcePath() const;

constexpr void __set_gameObjectInfo(::Zenject::GameObjectCreationParameters*  value) ;

constexpr ::Zenject::GameObjectCreationParameters* __get_gameObjectInfo() ;

constexpr ::cordl_internals::to_const_pointer<::Zenject::GameObjectCreationParameters*> __get_gameObjectInfo() const;

constexpr void __set_installerType(::System::Type*  value) ;

constexpr ::System::Type* __get_installerType() ;

constexpr ::cordl_internals::to_const_pointer<::System::Type*> __get_installerType() const;

static inline ::Zenject::__FactorySubContainerBinderBase_1____c__DisplayClass29_0<TContract>* New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor() ;

/// @brief Method <ByNewPrefabResourceInstaller>b__0 addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Zenject::IProvider* _ByNewPrefabResourceInstaller_b__0(::Zenject::DiContainer*  container) ;

/// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() ;

// Ctor Parameters [CppParam { name: "", ty: "__FactorySubContainerBinderBase_1____c__DisplayClass29_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__FactorySubContainerBinderBase_1____c__DisplayClass29_0(__FactorySubContainerBinderBase_1____c__DisplayClass29_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__FactorySubContainerBinderBase_1____c__DisplayClass29_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__FactorySubContainerBinderBase_1____c__DisplayClass29_0(__FactorySubContainerBinderBase_1____c__DisplayClass29_0 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __FactorySubContainerBinderBase_1____c__DisplayClass29_0()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: Zenject::FactorySubContainerBinderBase`1
namespace Zenject {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TContract>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10827)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10827), inst: 2 })
// CS Name: ::Zenject::FactorySubContainerBinderBase`1<TContract>*
class CORDL_TYPE FactorySubContainerBinderBase_1<TContract> : public ::System::Object {
public:
// Declarations
using __c__DisplayClass29_0 = ::Zenject::__FactorySubContainerBinderBase_1____c__DisplayClass29_0<TContract>;

using __c__DisplayClass27_0 = ::Zenject::__FactorySubContainerBinderBase_1____c__DisplayClass27_0<TContract>;

using __c__DisplayClass25_0 = ::Zenject::__FactorySubContainerBinderBase_1____c__DisplayClass25_0<TContract>;

using __c__DisplayClass23_0 = ::Zenject::__FactorySubContainerBinderBase_1____c__DisplayClass23_0<TContract>;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::System::Object)]{};

/// @brief Field <BindContainer>k__BackingField offset 0x10
 __declspec(property(get=__get__BindContainer_k__BackingField, put=__set__BindContainer_k__BackingField)) ::Zenject::DiContainer*  _BindContainer_k__BackingField;

/// @brief Field <FactoryBindInfo>k__BackingField offset 0x18
 __declspec(property(get=__get__FactoryBindInfo_k__BackingField, put=__set__FactoryBindInfo_k__BackingField)) ::Zenject::FactoryBindInfo*  _FactoryBindInfo_k__BackingField;

/// @brief Field <BindInfo>k__BackingField offset 0x20
 __declspec(property(get=__get__BindInfo_k__BackingField, put=__set__BindInfo_k__BackingField)) ::Zenject::BindInfo*  _BindInfo_k__BackingField;

/// @brief Field <SubIdentifier>k__BackingField offset 0x28
 __declspec(property(get=__get__SubIdentifier_k__BackingField, put=__set__SubIdentifier_k__BackingField)) ::System::Object*  _SubIdentifier_k__BackingField;

 __declspec(property(get=get_BindContainer, put=set_BindContainer)) ::Zenject::DiContainer*  BindContainer;

 __declspec(property(get=get_FactoryBindInfo, put=set_FactoryBindInfo)) ::Zenject::FactoryBindInfo*  FactoryBindInfo;

 __declspec(property(get=get_ProviderFunc, put=set_ProviderFunc)) ::System::Func_2<::Zenject::DiContainer*,::Zenject::IProvider*>*  ProviderFunc;

 __declspec(property(get=get_BindInfo, put=set_BindInfo)) ::Zenject::BindInfo*  BindInfo;

 __declspec(property(get=get_SubIdentifier, put=set_SubIdentifier)) ::System::Object*  SubIdentifier;

 __declspec(property(get=get_ContractType)) ::System::Type*  ContractType;

constexpr void __set__BindContainer_k__BackingField(::Zenject::DiContainer*  value) ;

constexpr ::Zenject::DiContainer* __get__BindContainer_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> __get__BindContainer_k__BackingField() const;

constexpr void __set__FactoryBindInfo_k__BackingField(::Zenject::FactoryBindInfo*  value) ;

constexpr ::Zenject::FactoryBindInfo* __get__FactoryBindInfo_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::Zenject::FactoryBindInfo*> __get__FactoryBindInfo_k__BackingField() const;

constexpr void __set__BindInfo_k__BackingField(::Zenject::BindInfo*  value) ;

constexpr ::Zenject::BindInfo* __get__BindInfo_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::Zenject::BindInfo*> __get__BindInfo_k__BackingField() const;

constexpr void __set__SubIdentifier_k__BackingField(::System::Object*  value) ;

constexpr ::System::Object* __get__SubIdentifier_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::System::Object*> __get__SubIdentifier_k__BackingField() const;

static inline ::Zenject::FactorySubContainerBinderBase_1<TContract>* New_ctor(::Zenject::DiContainer*  bindContainer, ::Zenject::BindInfo*  bindInfo, ::Zenject::FactoryBindInfo*  factoryBindInfo, ::System::Object*  subIdentifier) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::Zenject::DiContainer*  bindContainer, ::Zenject::BindInfo*  bindInfo, ::Zenject::FactoryBindInfo*  factoryBindInfo, ::System::Object*  subIdentifier) ;

/// @brief Method get_BindContainer addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Zenject::DiContainer* get_BindContainer() ;

/// @brief Method set_BindContainer addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_BindContainer(::Zenject::DiContainer*  value) ;

/// @brief Method get_FactoryBindInfo addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Zenject::FactoryBindInfo* get_FactoryBindInfo() ;

/// @brief Method set_FactoryBindInfo addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_FactoryBindInfo(::Zenject::FactoryBindInfo*  value) ;

/// @brief Method get_ProviderFunc addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Func_2<::Zenject::DiContainer*,::Zenject::IProvider*>* get_ProviderFunc() ;

/// @brief Method set_ProviderFunc addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_ProviderFunc(::System::Func_2<::Zenject::DiContainer*,::Zenject::IProvider*>*  value) ;

/// @brief Method get_BindInfo addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Zenject::BindInfo* get_BindInfo() ;

/// @brief Method set_BindInfo addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_BindInfo(::Zenject::BindInfo*  value) ;

/// @brief Method get_SubIdentifier addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Object* get_SubIdentifier() ;

/// @brief Method set_SubIdentifier addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_SubIdentifier(::System::Object*  value) ;

/// @brief Method get_ContractType addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Type* get_ContractType() ;

/// @brief Method ByInstaller addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TInstaller>
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* ByInstaller() ;

/// @brief Method ByInstaller addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* ByInstaller(::System::Type*  installerType) ;

/// @brief Method ByNewGameObjectInstaller addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TInstaller>
inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* ByNewGameObjectInstaller() ;

/// @brief Method ByNewGameObjectInstaller addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* ByNewGameObjectInstaller(::System::Type*  installerType) ;

/// @brief Method ByNewPrefabInstaller addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TInstaller>
inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* ByNewPrefabInstaller(::UnityEngine::Object*  prefab) ;

/// @brief Method ByNewPrefabInstaller addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* ByNewPrefabInstaller(::UnityEngine::Object*  prefab, ::System::Type*  installerType) ;

/// @brief Method ByNewPrefabResourceInstaller addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TInstaller>
inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* ByNewPrefabResourceInstaller(::StringW  resourcePath) ;

/// @brief Method ByNewPrefabResourceInstaller addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* ByNewPrefabResourceInstaller(::StringW  resourcePath, ::System::Type*  installerType) ;

// Ctor Parameters [CppParam { name: "", ty: "FactorySubContainerBinderBase_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FactorySubContainerBinderBase_1(FactorySubContainerBinderBase_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FactorySubContainerBinderBase_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FactorySubContainerBinderBase_1(FactorySubContainerBinderBase_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 FactorySubContainerBinderBase_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::FactorySubContainerBinderBase_1, "Zenject", "FactorySubContainerBinderBase`1");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::__FactorySubContainerBinderBase_1____c__DisplayClass23_0, "Zenject", "FactorySubContainerBinderBase`1/<>c__DisplayClass23_0");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::__FactorySubContainerBinderBase_1____c__DisplayClass25_0, "Zenject", "FactorySubContainerBinderBase`1/<>c__DisplayClass25_0");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::__FactorySubContainerBinderBase_1____c__DisplayClass27_0, "Zenject", "FactorySubContainerBinderBase`1/<>c__DisplayClass27_0");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::__FactorySubContainerBinderBase_1____c__DisplayClass29_0, "Zenject", "FactorySubContainerBinderBase`1/<>c__DisplayClass29_0");
