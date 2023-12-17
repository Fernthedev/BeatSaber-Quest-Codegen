#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__FactoryArgumentsToChoiceBinder_1_def.hpp"
CORDL_MODULE_EXPORT(MemoryPoolExpandBinder_1)
namespace Zenject {
class BindInfo;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class FactoryBindInfo;
}
namespace Zenject {
class MemoryPoolBindInfo;
}
namespace Zenject {
template<typename TContract>
class FactoryArgumentsToChoiceBinder_1;
}
// Forward declare root types
namespace Zenject {
template<typename TContract>
class MemoryPoolExpandBinder_1;
}
namespace Zenject {
template<::il2cpp_utils::il2cpp_reference_type TContract>
class MemoryPoolExpandBinder_1<TContract>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::MemoryPoolExpandBinder_1);
// Type: Zenject::MemoryPoolExpandBinder`1
// Type: Zenject::MemoryPoolExpandBinder`1
namespace Zenject {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TContract>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10703)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10703), inst: 1771 }), TypeDefinitionIndex(TypeDefinitionIndex(10866))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10866), inst: 2 })
// CS Name: ::Zenject::MemoryPoolExpandBinder`1<TContract>*
class CORDL_TYPE MemoryPoolExpandBinder_1<TContract> : public ::Zenject::FactoryArgumentsToChoiceBinder_1<TContract> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x40};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x40 - sizeof(::Zenject::FactoryArgumentsToChoiceBinder_1<TContract>)]{};

/// @brief Field <MemoryPoolBindInfo>k__BackingField offset 0x38
 __declspec(property(get=__get__MemoryPoolBindInfo_k__BackingField, put=__set__MemoryPoolBindInfo_k__BackingField)) ::Zenject::MemoryPoolBindInfo*  _MemoryPoolBindInfo_k__BackingField;

 __declspec(property(get=get_MemoryPoolBindInfo, put=set_MemoryPoolBindInfo)) ::Zenject::MemoryPoolBindInfo*  MemoryPoolBindInfo;

constexpr void __set__MemoryPoolBindInfo_k__BackingField(::Zenject::MemoryPoolBindInfo*  value) ;

constexpr ::Zenject::MemoryPoolBindInfo* __get__MemoryPoolBindInfo_k__BackingField() ;

constexpr ::cordl_internals::to_const_pointer<::Zenject::MemoryPoolBindInfo*> __get__MemoryPoolBindInfo_k__BackingField() const;

static inline ::Zenject::MemoryPoolExpandBinder_1<TContract>* New_ctor(::Zenject::DiContainer*  bindContainer, ::Zenject::BindInfo*  bindInfo, ::Zenject::FactoryBindInfo*  factoryBindInfo, ::Zenject::MemoryPoolBindInfo*  poolBindInfo) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::Zenject::DiContainer*  bindContainer, ::Zenject::BindInfo*  bindInfo, ::Zenject::FactoryBindInfo*  factoryBindInfo, ::Zenject::MemoryPoolBindInfo*  poolBindInfo) ;

/// @brief Method get_MemoryPoolBindInfo addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Zenject::MemoryPoolBindInfo* get_MemoryPoolBindInfo() ;

/// @brief Method set_MemoryPoolBindInfo addr 0x0 size 0xffffffffffffffff virtual false final false
inline void set_MemoryPoolBindInfo(::Zenject::MemoryPoolBindInfo*  value) ;

/// @brief Method ExpandByOneAtATime addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Zenject::FactoryArgumentsToChoiceBinder_1<TContract>* ExpandByOneAtATime(bool  showExpandWarning) ;

/// @brief Method ExpandByDoubling addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Zenject::FactoryArgumentsToChoiceBinder_1<TContract>* ExpandByDoubling(bool  showExpandWarning) ;

// Ctor Parameters [CppParam { name: "", ty: "MemoryPoolExpandBinder_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MemoryPoolExpandBinder_1(MemoryPoolExpandBinder_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MemoryPoolExpandBinder_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MemoryPoolExpandBinder_1(MemoryPoolExpandBinder_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 MemoryPoolExpandBinder_1()  = default;
public:


// Fields


// Properties


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::MemoryPoolExpandBinder_1, "Zenject", "MemoryPoolExpandBinder`1");
