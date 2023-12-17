#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__FactoryFromBinder_7_def.hpp"
CORDL_MODULE_EXPORT(FactoryToChoiceBinder_7)
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class FactoryBindInfo;
}
namespace Zenject {
class BindInfo;
}
namespace Zenject {
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TParam5,typename TParam6,typename TContract>
class FactoryFromBinder_7;
}
// Forward declare root types
namespace Zenject {
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TParam5,typename TParam6,typename TContract>
class FactoryToChoiceBinder_7;
}
namespace Zenject {
template<::il2cpp_utils::il2cpp_reference_type TParam1,::il2cpp_utils::il2cpp_reference_type TParam2,::il2cpp_utils::il2cpp_reference_type TParam3,::il2cpp_utils::il2cpp_reference_type TParam4,::il2cpp_utils::il2cpp_reference_type TParam5,::il2cpp_utils::il2cpp_reference_type TParam6,::il2cpp_utils::il2cpp_reference_type TContract>
class FactoryToChoiceBinder_7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TContract>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::FactoryToChoiceBinder_7);
// Type: Zenject::FactoryToChoiceBinder`7
// Type: Zenject::FactoryToChoiceBinder`7
namespace Zenject {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TParam1,::il2cpp_utils::il2cpp_reference_type TParam2,::il2cpp_utils::il2cpp_reference_type TParam3,::il2cpp_utils::il2cpp_reference_type TParam4,::il2cpp_utils::il2cpp_reference_type TParam5,::il2cpp_utils::il2cpp_reference_type TParam6,::il2cpp_utils::il2cpp_reference_type TContract>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10774), inst: 1847 }), TypeDefinitionIndex(TypeDefinitionIndex(10855)), TypeDefinitionIndex(TypeDefinitionIndex(10774))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10855), inst: 6127 })
// CS Name: ::Zenject::FactoryToChoiceBinder`7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TContract>*
class CORDL_TYPE FactoryToChoiceBinder_7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TContract> : public ::Zenject::FactoryFromBinder_7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TContract> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::Zenject::FactoryFromBinder_7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TContract>)]{};

static inline ::Zenject::FactoryToChoiceBinder_7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TContract>* New_ctor(::Zenject::DiContainer*  bindContainer, ::Zenject::BindInfo*  bindInfo, ::Zenject::FactoryBindInfo*  factoryBindInfo) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::Zenject::DiContainer*  bindContainer, ::Zenject::BindInfo*  bindInfo, ::Zenject::FactoryBindInfo*  factoryBindInfo) ;

/// @brief Method ToSelf addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Zenject::FactoryFromBinder_7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TContract>* ToSelf() ;

/// @brief Method To addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TConcrete>
inline ::Zenject::FactoryFromBinder_7<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TConcrete>* To() ;

// Ctor Parameters [CppParam { name: "", ty: "FactoryToChoiceBinder_7", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FactoryToChoiceBinder_7(FactoryToChoiceBinder_7 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FactoryToChoiceBinder_7", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FactoryToChoiceBinder_7(FactoryToChoiceBinder_7 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 FactoryToChoiceBinder_7()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::FactoryToChoiceBinder_7, "Zenject", "FactoryToChoiceBinder`7");
