#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__FactoryArgumentsToChoiceBinder_5_def.hpp"
CORDL_MODULE_EXPORT(FactoryToChoiceIdBinder_5)
namespace Zenject {
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TContract>
class FactoryArgumentsToChoiceBinder_5;
}
namespace Zenject {
class FactoryBindInfo;
}
namespace Zenject {
class DiContainer;
}
namespace System {
class Object;
}
namespace Zenject {
class BindInfo;
}
// Forward declare root types
namespace Zenject {
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TContract>
class FactoryToChoiceIdBinder_5;
}
namespace Zenject {
template<::il2cpp_utils::il2cpp_reference_type TParam1,::il2cpp_utils::il2cpp_reference_type TParam2,::il2cpp_utils::il2cpp_reference_type TParam3,::il2cpp_utils::il2cpp_reference_type TParam4,::il2cpp_utils::il2cpp_reference_type TContract>
class FactoryToChoiceIdBinder_5<TParam1,TParam2,TParam3,TParam4,TContract>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::FactoryToChoiceIdBinder_5);
// Type: Zenject::FactoryToChoiceIdBinder`5
// Type: Zenject::FactoryToChoiceIdBinder`5
namespace Zenject {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TParam1,::il2cpp_utils::il2cpp_reference_type TParam2,::il2cpp_utils::il2cpp_reference_type TParam3,::il2cpp_utils::il2cpp_reference_type TParam4,::il2cpp_utils::il2cpp_reference_type TContract>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10708), inst: 1777 }), TypeDefinitionIndex(TypeDefinitionIndex(10861)), TypeDefinitionIndex(TypeDefinitionIndex(10708))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10861), inst: 6125 })
// CS Name: ::Zenject::FactoryToChoiceIdBinder`5<TParam1,TParam2,TParam3,TParam4,TContract>*
class CORDL_TYPE FactoryToChoiceIdBinder_5<TParam1,TParam2,TParam3,TParam4,TContract> : public ::Zenject::FactoryArgumentsToChoiceBinder_5<TParam1,TParam2,TParam3,TParam4,TContract> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::Zenject::FactoryArgumentsToChoiceBinder_5<TParam1,TParam2,TParam3,TParam4,TContract>)]{};

static inline ::Zenject::FactoryToChoiceIdBinder_5<TParam1,TParam2,TParam3,TParam4,TContract>* New_ctor(::Zenject::DiContainer*  bindContainer, ::Zenject::BindInfo*  bindInfo, ::Zenject::FactoryBindInfo*  factoryBindInfo) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::Zenject::DiContainer*  bindContainer, ::Zenject::BindInfo*  bindInfo, ::Zenject::FactoryBindInfo*  factoryBindInfo) ;

/// @brief Method WithId addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Zenject::FactoryArgumentsToChoiceBinder_5<TParam1,TParam2,TParam3,TParam4,TContract>* WithId(::System::Object*  identifier) ;

// Ctor Parameters [CppParam { name: "", ty: "FactoryToChoiceIdBinder_5", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FactoryToChoiceIdBinder_5(FactoryToChoiceIdBinder_5 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FactoryToChoiceIdBinder_5", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FactoryToChoiceIdBinder_5(FactoryToChoiceIdBinder_5 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 FactoryToChoiceIdBinder_5()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::FactoryToChoiceIdBinder_5, "Zenject", "FactoryToChoiceIdBinder`5");
