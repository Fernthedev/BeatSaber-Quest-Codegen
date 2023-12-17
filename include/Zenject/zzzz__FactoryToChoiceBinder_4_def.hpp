#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__FactoryFromBinder_4_def.hpp"
CORDL_MODULE_EXPORT(FactoryToChoiceBinder_4)
namespace Zenject {
class FactoryBindInfo;
}
namespace Zenject {
class BindInfo;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
template<typename TParam1,typename TParam2,typename TParam3,typename TContract>
class FactoryFromBinder_4;
}
// Forward declare root types
namespace Zenject {
template<typename TParam1,typename TParam2,typename TParam3,typename TContract>
class FactoryToChoiceBinder_4;
}
namespace Zenject {
template<::il2cpp_utils::il2cpp_reference_type TParam1,::il2cpp_utils::il2cpp_reference_type TParam2,::il2cpp_utils::il2cpp_reference_type TParam3,::il2cpp_utils::il2cpp_reference_type TContract>
class FactoryToChoiceBinder_4<TParam1,TParam2,TParam3,TContract>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::FactoryToChoiceBinder_4);
// Type: Zenject::FactoryToChoiceBinder`4
// Type: Zenject::FactoryToChoiceBinder`4
namespace Zenject {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TParam1,::il2cpp_utils::il2cpp_reference_type TParam2,::il2cpp_utils::il2cpp_reference_type TParam3,::il2cpp_utils::il2cpp_reference_type TContract>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10852)), TypeDefinitionIndex(TypeDefinitionIndex(10747)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10747), inst: 1820 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10852), inst: 6124 })
// CS Name: ::Zenject::FactoryToChoiceBinder`4<TParam1,TParam2,TParam3,TContract>*
class CORDL_TYPE FactoryToChoiceBinder_4<TParam1,TParam2,TParam3,TContract> : public ::Zenject::FactoryFromBinder_4<TParam1,TParam2,TParam3,TContract> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::Zenject::FactoryFromBinder_4<TParam1,TParam2,TParam3,TContract>)]{};

static inline ::Zenject::FactoryToChoiceBinder_4<TParam1,TParam2,TParam3,TContract>* New_ctor(::Zenject::DiContainer*  bindContainer, ::Zenject::BindInfo*  bindInfo, ::Zenject::FactoryBindInfo*  factoryBindInfo) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::Zenject::DiContainer*  bindContainer, ::Zenject::BindInfo*  bindInfo, ::Zenject::FactoryBindInfo*  factoryBindInfo) ;

/// @brief Method ToSelf addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Zenject::FactoryFromBinder_4<TParam1,TParam2,TParam3,TContract>* ToSelf() ;

/// @brief Method To addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TConcrete>
inline ::Zenject::FactoryFromBinder_4<TParam1,TParam2,TParam3,TConcrete>* To() ;

// Ctor Parameters [CppParam { name: "", ty: "FactoryToChoiceBinder_4", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FactoryToChoiceBinder_4(FactoryToChoiceBinder_4 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FactoryToChoiceBinder_4", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FactoryToChoiceBinder_4(FactoryToChoiceBinder_4 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 FactoryToChoiceBinder_4()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::FactoryToChoiceBinder_4, "Zenject", "FactoryToChoiceBinder`4");
