#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
CORDL_MODULE_EXPORT(PoolableMemoryPoolProviderBase_1)
namespace Zenject {
class InjectTypeInfo;
}
namespace Zenject {
struct TypeValuePair;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Zenject {
class IProvider;
}
namespace Zenject {
class DiContainer;
}
namespace System {
class Type;
}
namespace System {
struct Guid;
}
namespace Zenject {
class InjectContext;
}
namespace System {
class Action;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Zenject {
template<typename TContract>
class PoolableMemoryPoolProviderBase_1;
}
namespace Zenject {
template<::il2cpp_utils::il2cpp_reference_type TContract>
class PoolableMemoryPoolProviderBase_1<TContract>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::PoolableMemoryPoolProviderBase_1);
// Type: Zenject::PoolableMemoryPoolProviderBase`1
// Type: Zenject::PoolableMemoryPoolProviderBase`1
namespace Zenject {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TContract>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11219)), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11219), inst: 2 })
// CS Name: ::Zenject::PoolableMemoryPoolProviderBase`1<TContract>*
class CORDL_TYPE PoolableMemoryPoolProviderBase_1<TContract> : public ::System::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::System::Object)]{};

/// @brief Field <PoolId>k__BackingField offset 0x10
 __declspec(property(get=__get__PoolId_k__BackingField, put=__set__PoolId_k__BackingField)) ::System::Guid  _PoolId_k__BackingField;

/// @brief Field <Container>k__BackingField offset 0x20
 __declspec(property(get=__get__Container_k__BackingField, put=__set__Container_k__BackingField)) ::Zenject::DiContainer*  _Container_k__BackingField;

 __declspec(property(get=get_IsCached)) bool  IsCached;

 __declspec(property(get=get_PoolId, put=set_PoolId)) ::System::Guid  PoolId;

 __declspec(property(get=get_Container, put=set_Container)) ::Zenject::DiContainer*  Container;

 __declspec(property(get=get_TypeVariesBasedOnMemberType)) bool  TypeVariesBasedOnMemberType;

/// @brief Convert operator to "::Zenject::IProvider"
constexpr operator  ::Zenject::IProvider*() noexcept;

constexpr void __set__PoolId_k__BackingField(::System::Guid  value) ;

constexpr ::System::Guid& __get__PoolId_k__BackingField() ;

constexpr ::System::Guid const& __get__PoolId_k__BackingField() const;

constexpr void __set__Container_k__BackingField(::Zenject::DiContainer*  value) ;

constexpr ::Zenject::DiContainer* __get__Container_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::Zenject::DiContainer*> __get__Container_k__BackingField() const;

static inline ::Zenject::PoolableMemoryPoolProviderBase_1<TContract>* New_ctor(::Zenject::DiContainer*  container, ::System::Guid  poolId) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::Zenject::DiContainer*  container, ::System::Guid  poolId) ;

/// @brief Method get_IsCached addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool get_IsCached() ;

/// @brief Method get_PoolId addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::System::Guid get_PoolId() ;

/// @brief Method set_PoolId addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_PoolId(::System::Guid  value) ;

/// @brief Method get_Container addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Zenject::DiContainer* get_Container() ;

/// @brief Method set_Container addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_Container(::Zenject::DiContainer*  value) ;

/// @brief Method get_TypeVariesBasedOnMemberType addr 0x0 size 0xffffffffffffffff virtual true final true
inline bool get_TypeVariesBasedOnMemberType() ;

/// @brief Method GetInstanceType addr 0x0 size 0xffffffffffffffff virtual true final true
inline ::System::Type* GetInstanceType(::Zenject::InjectContext*  context) ;

/// @brief Method GetAllInstancesWithInjectSplit addr 0x0 size 0xffffffffffffffff virtual true final false
inline void GetAllInstancesWithInjectSplit(::Zenject::InjectContext*  context, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*  args, ByRef<::System::Action*>  injectAction, ::System::Collections::Generic::List_1<::System::Object*>*  buffer) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() ;

// Ctor Parameters [CppParam { name: "", ty: "PoolableMemoryPoolProviderBase_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PoolableMemoryPoolProviderBase_1(PoolableMemoryPoolProviderBase_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PoolableMemoryPoolProviderBase_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PoolableMemoryPoolProviderBase_1(PoolableMemoryPoolProviderBase_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 PoolableMemoryPoolProviderBase_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::PoolableMemoryPoolProviderBase_1, "Zenject", "PoolableMemoryPoolProviderBase`1");
