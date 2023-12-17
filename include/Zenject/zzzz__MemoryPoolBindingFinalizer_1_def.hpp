#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__ProviderBindingFinalizer_def.hpp"
CORDL_MODULE_EXPORT(MemoryPoolBindingFinalizer_1)
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class MemoryPoolBindInfo;
}
namespace Zenject {
class BindInfo;
}
namespace Zenject {
class FactoryBindInfo;
}
// Forward declare root types
namespace Zenject {
template<typename TContract>
class MemoryPoolBindingFinalizer_1;
}
namespace Zenject {
template<::il2cpp_utils::il2cpp_reference_type TContract>
class MemoryPoolBindingFinalizer_1<TContract>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::MemoryPoolBindingFinalizer_1);
// Type: Zenject::MemoryPoolBindingFinalizer`1
// Type: Zenject::MemoryPoolBindingFinalizer`1
namespace Zenject {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TContract>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10966)), TypeDefinitionIndex(TypeDefinitionIndex(10865))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10865), inst: 2 })
// CS Name: ::Zenject::MemoryPoolBindingFinalizer`1<TContract>*
class CORDL_TYPE MemoryPoolBindingFinalizer_1<TContract> : public ::Zenject::ProviderBindingFinalizer {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x28};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x28 - sizeof(::Zenject::ProviderBindingFinalizer)]{};

/// @brief Field _poolBindInfo offset 0x18
 __declspec(property(get=__get__poolBindInfo, put=__set__poolBindInfo)) ::Zenject::MemoryPoolBindInfo*  _poolBindInfo;

/// @brief Field _factoryBindInfo offset 0x20
 __declspec(property(get=__get__factoryBindInfo, put=__set__factoryBindInfo)) ::Zenject::FactoryBindInfo*  _factoryBindInfo;

constexpr void __set__poolBindInfo(::Zenject::MemoryPoolBindInfo*  value) ;

constexpr ::Zenject::MemoryPoolBindInfo* __get__poolBindInfo() ;

constexpr ::cordl_internals::to_const_pointer<::Zenject::MemoryPoolBindInfo*> __get__poolBindInfo() const;

constexpr void __set__factoryBindInfo(::Zenject::FactoryBindInfo*  value) ;

constexpr ::Zenject::FactoryBindInfo* __get__factoryBindInfo() ;

constexpr ::cordl_internals::to_const_pointer<::Zenject::FactoryBindInfo*> __get__factoryBindInfo() const;

static inline ::Zenject::MemoryPoolBindingFinalizer_1<TContract>* New_ctor(::Zenject::BindInfo*  bindInfo, ::Zenject::FactoryBindInfo*  factoryBindInfo, ::Zenject::MemoryPoolBindInfo*  poolBindInfo) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::Zenject::BindInfo*  bindInfo, ::Zenject::FactoryBindInfo*  factoryBindInfo, ::Zenject::MemoryPoolBindInfo*  poolBindInfo) ;

/// @brief Method OnFinalizeBinding addr 0x0 size 0xffffffffffffffff virtual true final false
inline void OnFinalizeBinding(::Zenject::DiContainer*  container) ;

// Ctor Parameters [CppParam { name: "", ty: "MemoryPoolBindingFinalizer_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MemoryPoolBindingFinalizer_1(MemoryPoolBindingFinalizer_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MemoryPoolBindingFinalizer_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MemoryPoolBindingFinalizer_1(MemoryPoolBindingFinalizer_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MemoryPoolBindingFinalizer_1()  = default;
public:


// Fields


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::MemoryPoolBindingFinalizer_1, "Zenject", "MemoryPoolBindingFinalizer`1");
