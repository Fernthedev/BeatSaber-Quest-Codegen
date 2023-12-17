#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Zenject/zzzz__PoolableMemoryPool_3_def.hpp"
#include "Zenject/zzzz__SignalDeclaration_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(SignalSubscription)
namespace Zenject {
template<typename TParam1,typename TParam2>
class IPoolable_2;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace Zenject {
struct BindingId;
}
namespace Zenject {
class SignalDeclaration;
}
namespace Zenject {
class __SignalSubscription__Pool;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace Zenject {
class SignalSubscription;
}
namespace Zenject {
class __SignalSubscription__Pool;
}
// Write type traits
MARK_REF_PTR_T(::Zenject::SignalSubscription);
MARK_REF_PTR_T(::Zenject::__SignalSubscription__Pool);
// Type: Zenject::SignalSubscription
namespace Zenject {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10661))
// CS Name: ::Zenject::SignalSubscription*
class CORDL_TYPE SignalSubscription : public ::System::Object {
public:
// Declarations
using Pool = ::Zenject::__SignalSubscription__Pool;

/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::System::Object)]{};

/// @brief Field _pool offset 0x10
 __declspec(property(get=__get__pool, put=__set__pool)) ::Zenject::__SignalSubscription__Pool*  _pool;

/// @brief Field _callback offset 0x18
 __declspec(property(get=__get__callback, put=__set__callback)) ::System::Action_1<::System::Object*>*  _callback;

/// @brief Field _declaration offset 0x20
 __declspec(property(get=__get__declaration, put=__set__declaration)) ::Zenject::SignalDeclaration*  _declaration;

/// @brief Field _signalId offset 0x28
 __declspec(property(get=__get__signalId, put=__set__signalId)) ::Zenject::BindingId  _signalId;

 __declspec(property(get=get_SignalId)) ::Zenject::BindingId  SignalId;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Convert operator to "::Zenject::IPoolable_2<::System::Action_1<::System::Object*>*,::Zenject::SignalDeclaration*>"
constexpr operator  ::Zenject::IPoolable_2<::System::Action_1<::System::Object*>*,::Zenject::SignalDeclaration*>*() noexcept;

constexpr void __set__pool(::Zenject::__SignalSubscription__Pool*  value) ;

constexpr ::Zenject::__SignalSubscription__Pool* __get__pool() ;

constexpr ::cordl_internals::to_const_pointer<::Zenject::__SignalSubscription__Pool*> __get__pool() const;

constexpr void __set__callback(::System::Action_1<::System::Object*>*  value) ;

constexpr ::System::Action_1<::System::Object*>* __get__callback() ;

constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::System::Object*>*> __get__callback() const;

constexpr void __set__declaration(::Zenject::SignalDeclaration*  value) ;

constexpr ::Zenject::SignalDeclaration* __get__declaration() ;

constexpr ::cordl_internals::to_const_pointer<::Zenject::SignalDeclaration*> __get__declaration() const;

constexpr void __set__signalId(::Zenject::BindingId  value) ;

constexpr ::Zenject::BindingId& __get__signalId() ;

constexpr ::Zenject::BindingId const& __get__signalId() const;

static inline ::Zenject::SignalSubscription* New_ctor(::Zenject::__SignalSubscription__Pool*  pool) ;

/// @brief Method .ctor addr 0x2ec3b8c size 0x34 virtual false final false
inline void _ctor(::Zenject::__SignalSubscription__Pool*  pool) ;

/// @brief Method get_SignalId addr 0x2ec3bd0 size 0xc virtual false final false
inline ::Zenject::BindingId get_SignalId() ;

/// @brief Method OnSpawned addr 0x2ec3bdc size 0x44 virtual true final true
inline void OnSpawned(::System::Action_1<::System::Object*>*  callback, ::Zenject::SignalDeclaration*  declaration) ;

/// @brief Method OnDespawned addr 0x2ec3c20 size 0x2c virtual true final true
inline void OnDespawned() ;

/// @brief Method SetDefaults addr 0x2ec3bc0 size 0x10 virtual false final false
inline void SetDefaults() ;

/// @brief Method Dispose addr 0x2ec3c4c size 0x9c virtual true final true
inline void Dispose() ;

/// @brief Method OnDeclarationDespawned addr 0x2ec2b74 size 0x8 virtual false final false
inline void OnDeclarationDespawned() ;

/// @brief Method Invoke addr 0x2ec3094 size 0x24 virtual false final false
inline void Invoke(::System::Object*  signal) ;

/// @brief Method __zenCreate addr 0x2ec3ce8 size 0xd4 virtual false final false
static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2ec3dbc size 0x274 virtual false final false
static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() ;

// Ctor Parameters [CppParam { name: "", ty: "SignalSubscription", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SignalSubscription(SignalSubscription && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SignalSubscription", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SignalSubscription(SignalSubscription const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 SignalSubscription()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::SignalSubscription, 0x38>, "Size mismatch!");

} // namespace end def Zenject
// Type: ::Pool
namespace Zenject {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(2323), inst: 2 }), TypeDefinitionIndex(TypeDefinitionIndex(10659)), TypeDefinitionIndex(TypeDefinitionIndex(2323)), TypeDefinitionIndex(TypeDefinitionIndex(11067)), TypeDefinitionIndex(TypeDefinitionIndex(10661)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11067), inst: 3502 }), TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10660))
// CS Name: ::SignalSubscription::Pool*
class CORDL_TYPE __SignalSubscription__Pool : public ::Zenject::PoolableMemoryPool_3<::System::Action_1<::System::Object*>*,::Zenject::SignalDeclaration*,::Zenject::SignalSubscription*> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::Zenject::PoolableMemoryPool_3<::System::Action_1<::System::Object*>*,::Zenject::SignalDeclaration*,::Zenject::SignalSubscription*>)]{};

static inline ::Zenject::__SignalSubscription__Pool* New_ctor() ;

/// @brief Method .ctor addr 0x2ec4030 size 0x48 virtual false final false
inline void _ctor() ;

/// @brief Method __zenCreate addr 0x2ec4078 size 0x58 virtual false final false
static inline ::System::Object* __zenCreate(::ArrayW<::System::Object*,::Array<::System::Object*>*>  P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x2ec40d0 size 0x1c0 virtual false final false
static inline ::Zenject::InjectTypeInfo* __zenCreateInjectTypeInfo() ;

// Ctor Parameters [CppParam { name: "", ty: "__SignalSubscription__Pool", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
__SignalSubscription__Pool(__SignalSubscription__Pool && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "__SignalSubscription__Pool", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
__SignalSubscription__Pool(__SignalSubscription__Pool const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 __SignalSubscription__Pool()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Zenject::__SignalSubscription__Pool, 0x38>, "Size mismatch!");

} // namespace end def Zenject
NEED_NO_BOX(::Zenject::SignalSubscription);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::SignalSubscription*, "Zenject", "SignalSubscription");
NEED_NO_BOX(::Zenject::__SignalSubscription__Pool);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::__SignalSubscription__Pool*, "Zenject", "SignalSubscription/Pool");
