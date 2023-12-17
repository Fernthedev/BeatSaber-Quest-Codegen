#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Zenject/zzzz__FactoryArgumentsToChoiceBinder_1_def.hpp"
CORDL_MODULE_EXPORT(FactoryToChoiceIdBinder_1)
namespace Zenject {
class BindInfo;
}
namespace Zenject {
class FactoryBindInfo;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
template<typename TContract>
class FactoryArgumentsToChoiceBinder_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Zenject {
template<typename TContract>
class FactoryToChoiceIdBinder_1;
}
namespace Zenject {
template<::il2cpp_utils::il2cpp_reference_type TContract>
class FactoryToChoiceIdBinder_1<TContract>;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Zenject::FactoryToChoiceIdBinder_1);
// Type: Zenject::FactoryToChoiceIdBinder`1
// Type: Zenject::FactoryToChoiceIdBinder`1
namespace Zenject {
// cpp template
template<::il2cpp_utils::il2cpp_reference_type TContract>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10856)), TypeDefinitionIndex(TypeDefinitionIndex(10703)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10703), inst: 1770 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10856), inst: 2 })
// CS Name: ::Zenject::FactoryToChoiceIdBinder`1<TContract>*
class CORDL_TYPE FactoryToChoiceIdBinder_1<TContract> : public ::Zenject::FactoryArgumentsToChoiceBinder_1<TContract> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __IL2CPP_REFERENCE_TYPE_SIZE{0x38};

/// @brief The size this ref type adds onto its base type, may evaluate to 0
 uint8_t  __fields[0x38 - sizeof(::Zenject::FactoryArgumentsToChoiceBinder_1<TContract>)]{};

static inline ::Zenject::FactoryToChoiceIdBinder_1<TContract>* New_ctor(::Zenject::DiContainer*  container, ::Zenject::BindInfo*  bindInfo, ::Zenject::FactoryBindInfo*  factoryBindInfo) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
inline void _ctor(::Zenject::DiContainer*  container, ::Zenject::BindInfo*  bindInfo, ::Zenject::FactoryBindInfo*  factoryBindInfo) ;

/// @brief Method WithId addr 0x0 size 0xffffffffffffffff virtual false final false
inline ::Zenject::FactoryArgumentsToChoiceBinder_1<TContract>* WithId(::System::Object*  identifier) ;

// Ctor Parameters [CppParam { name: "", ty: "FactoryToChoiceIdBinder_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FactoryToChoiceIdBinder_1(FactoryToChoiceIdBinder_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FactoryToChoiceIdBinder_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FactoryToChoiceIdBinder_1(FactoryToChoiceIdBinder_1 const& ) = delete;

protected:
// Ctor Parameters []
// @brief default ctor
 FactoryToChoiceIdBinder_1()  = default;
public:


// Methods

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::FactoryToChoiceIdBinder_1, "Zenject", "FactoryToChoiceIdBinder`1");
