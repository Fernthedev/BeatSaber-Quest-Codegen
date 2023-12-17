#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__PoolableMemoryPoolProviderBase_1_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
CORDL_MODULE_EXPORT(PoolableMemoryPoolProvider_3)
namespace Zenject {
class DiContainer;
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
namespace System {
struct Guid;
}
namespace Zenject {
class InjectContext;
}
namespace Zenject {
class IValidatable;
}
namespace Zenject {
struct TypeValuePair;
}
// Forward declare root types
namespace Zenject {
template<typename TParam1,typename TContract,typename TMemoryPool>
class PoolableMemoryPoolProvider_3;
}
namespace Zenject {
template<::il2cpp_utils::il2cpp_reference_type TParam1,::il2cpp_utils::il2cpp_reference_type TContract,::il2cpp_utils::il2cpp_reference_type TMemoryPool>
class PoolableMemoryPoolProvider_3<TParam1,TContract,TMemoryPool>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::PoolableMemoryPoolProvider_3);
// Type: Zenject::PoolableMemoryPoolProvider`3
// Type: Zenject::PoolableMemoryPoolProvider`3
namespace Zenject {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TParam1,::il2cpp_utils::il2cpp_reference_type TContract,::il2cpp_utils::il2cpp_reference_type TMemoryPool>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11221)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11219), inst: 4842 }), TypeDefinitionIndex(TypeDefinitionIndex(11219))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11221), inst: 5330 })
// CS Name: ::Zenject::PoolableMemoryPoolProvider`3<TParam1,TContract,TMemoryPool>*
class CORDL_TYPE PoolableMemoryPoolProvider_3<TParam1,TContract,TMemoryPool> : public ::Zenject::PoolableMemoryPoolProviderBase_1<TContract> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x30};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x30 - sizeof(::Zenject::PoolableMemoryPoolProviderBase_1<TContract>)]{};

/// @brief Field _pool offset 0x28
 __declspec(property(get=__get__pool, put=__set__pool)) TMemoryPool  _pool;

/// @brief Convert operator to "::Zenject::IValidatable"
constexpr operator  ::Zenject::IValidatable*() noexcept;

constexpr void __set__pool(TMemoryPool  value) ;

constexpr TMemoryPool& __get__pool() ;

constexpr TMemoryPool const& __get__pool() const;

static inline ::Zenject::PoolableMemoryPoolProvider_3<TParam1,TContract,TMemoryPool>* New_ctor(::Zenject::DiContainer*  container, ::System::Guid  poolId) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::Zenject::DiContainer*  container, ::System::Guid  poolId) ;

/// @brief Method Validate addr 0x0 size 0xffffffffffffffff virtual true final true
inline void Validate() ;

/// @brief Method GetAllInstancesWithInjectSplit addr 0x0 size 0xffffffffffffffff virtual true final false
inline void GetAllInstancesWithInjectSplit(::Zenject::InjectContext*  context, ::System::Collections::Generic::List_1<::Zenject::TypeValuePair>*  args, ByRef<::System::Action*>  injectAction, ::System::Collections::Generic::List_1<::System::Object*>*  buffer) ;

// Ctor Parameters [CppParam { name: "", ty: "PoolableMemoryPoolProvider_3", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
PoolableMemoryPoolProvider_3(PoolableMemoryPoolProvider_3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PoolableMemoryPoolProvider_3", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
PoolableMemoryPoolProvider_3(PoolableMemoryPoolProvider_3 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 PoolableMemoryPoolProvider_3()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::PoolableMemoryPoolProvider_3, "Zenject", "PoolableMemoryPoolProvider`3");
